#include "MyForm.h"
#include <Windows.h>

using namespace kalahaGame; // Название проекта
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);
	return 0;
}

void kalahaGame::MyForm::disableButtons()
{
		for (int i = 0; i < 14; i++) {
			buttons[i]->Enabled = false;
		}
}

void kalahaGame::MyForm::enableButtons()
{
	for (int i = 0; i < 6; i++) {
		buttons[i]->Enabled = true;
	}
}

void kalahaGame::MyForm::update(table tb)
{
	for (int i = 0; i < tb.tableVector.size(); i++) {
		buttons[i]->BackColor = System::Drawing::Color::White;

	}
	for (int i = 0; i < tb.tableVector.size();i++) {
		if (buttons[i]->Text != Convert::ToString(tb.tableVector[i])) {
			buttons[i]->BackColor = System::Drawing::Color::Bisque;
		}
		buttons[i]->Text = Convert::ToString(tb.tableVector[i]);
		
	}
}

void kalahaGame::MyForm::playerMove(int buttonNumber)
{
	status->BackColor = System::Drawing::Color::White;
	disableButtons();
	vector<int> vec;
	for (int i = 0; i < 14; i++) {
		vec.push_back(Convert::ToInt32(buttons[i]->Text));
	}
	table tb(vec);
	if (tb.move(0, buttonNumber)) { // 0 - player, 1 - computer
		update(tb);
		status->Text = "Computer's move. Waiting...";
		if (!finishCheck(tb)) {
			timer1->Start();
		}
	}
	else {
		update(tb);
		if (!finishCheck(tb)) {
			enableButtons();
		}
	}
}

System::Void kalahaGame::MyForm::timer1_Tick(System::Object^ sender, System::EventArgs^ e)
{
	vector<int> vec;
	for (int i = 0; i < 14; i++) {
		vec.push_back(Convert::ToInt32(buttons[i]->Text));
	}
	table tb(vec);
	computerMove(tb);
	timer1->Stop();
}


void kalahaGame::MyForm::computerMove(table tb)
{
	vector<int> cellsToMove = computerFindCellsToMove(tb);
	//MessageBox::Show(Convert::ToString(cellsToMove[0]),"check cellsToMove"); //----------------------------
	for (int i = 0; i < cellsToMove.size(); i++) {
		if (!finishCheck(tb))
		tb.move(1, cellsToMove[i]);
	}
	update(tb);
	if (!finishCheck(tb)) {
		status->Text = "Your move!";
		enableButtons();
	}	
}

vector<int> kalahaGame::MyForm::computerFindCellsToMove(table tb)
{
	vector<int> cellsToMove;
	child temp;
	temp.state = tb.tableVector;
	vector<child> children = childrenFromPosition(temp);
	//MessageBox::Show(Convert::ToString(children[0].path[0]), "check child[0]"); //----------------------------
	int cellWithEvalToMove = minimax(temp, 1, -100, 100, true);
	//MessageBox::Show(Convert::ToString(cellWithEvalToMove), "check minimax"); //----------------------------
	for (int i = 0; i < children.size(); i++) {
		if (children[i].state[13] - children[i].state[6] == cellWithEvalToMove) {
			return children[i].path;
		}
	}
}

bool kalahaGame::MyForm::finishCheck(table tb)
{
	bool computerMoves = 0;
	bool playerMoves = 0;
	for (int i = 0; i < 6; i++) {
		if (tb.tableVector[i] != 0)playerMoves = 1;
	}
	for (int i = 7; i < 13; i++) {
		if (tb.tableVector[i] != 0)computerMoves = 1;
	}

	if (tb.tableVector[6] >= 37) {
		status->Text = "Congrats! You have won.";
	}
	else if (tb.tableVector[13] >= 37) {
		status->Text = "Not bad, but...The computer has won.";  
	}else if(!computerMoves || !playerMoves){
		for (int i = 0; i < 6;i++) {
			tb.tableVector[6] += tb.tableVector[i];
			tb.tableVector[i] = 0;
		}
		for (int i = 7; i < 13; i++) {
			tb.tableVector[13] += tb.tableVector[i];
			tb.tableVector[i] = 0;
		}
		if (tb.tableVector[6] > tb.tableVector[13]) {
			status->Text = "Congrats! Moves are over.You have won.";
		}
		else if (tb.tableVector[13] > tb.tableVector[6]) {
			status->Text = "Not bad, but...Moves are over. Computer has won.";  
		}
		else {
			status->Text = "Draw! Friends are winning";
		}
	}
	else {
		return false;
	}
	finishOfGame();
	return true;
}



void kalahaGame::MyForm::finishOfGame()
{
	enableButtons();
	for (int i = 0; i < 14; i++) {
		if (i != 6 && i != 13) {
			buttons[i]->Text = Convert::ToString(6);
		}
	}
	buttons[6]->Text = Convert::ToString(0);
	buttons[13]->Text = Convert::ToString(0);
	for (int i = 0; i <14; i++) {
		buttons[i]->BackColor = System::Drawing::Color::White;

	}
	status->BackColor = System::Drawing::Color::Yellow;

}

bool kalahaGame::MyForm::minimaxGameOverCheck(child c)
{
	if (c.state[6] >= 37 || c.state[13] >= 37)return true;

	bool computerMoves = 0;
	bool playerMoves = 0;
	for (int i = 0; i < 6; i++) {
		if (c.state[i] != 0)playerMoves = 1;
	}
	for (int i = 7; i < 13; i++) {
		if (c.state[i] != 0)computerMoves = 1;
	}

	if (!computerMoves || !playerMoves) {
		return true;
	}
	else {
		return false;
	}
}

int kalahaGame::MyForm::staticEvaluation(child c)
{
	int evaluation = (c.state[13] - c.state[6]);
	return evaluation;
}

int kalahaGame::MyForm::minimax(child position, int depth, int alpha, int beta, bool maximizingPlayer)
{
	if (depth == 0 || minimaxGameOverCheck(position)) {
		return staticEvaluation(position);
	}
	if (maximizingPlayer) {
		int maxEval = -100;
		vector<child>children = childrenFromPosition(position);
		for (int i = 0; i < children.size(); i++) {
			int eval = minimax(children[i], depth - 1, alpha, beta, false);
			maxEval = max(maxEval, eval);
			alpha = max(alpha, eval);
			if (beta <= alpha) {
				break;
			}
		}
		return maxEval;
	}
	else {
		int minEval = 100;
		vector<child>children = childrenFromPosition(position);
		for (int i = 0; i < children.size(); i++) {
			int eval = minimax(children[i], depth - 1, alpha, beta, true);
			int minEval = min(minEval, eval);
			beta = min(beta, eval);
			if (beta <= alpha) {
				break;
			}
		}
		return minEval;
	}
}

vector<child> kalahaGame::MyForm::childrenFromPosition(child root)
{
	vector<child> children;
	for (int i = 7; i < 13; i++) {
		table copy(root.state);
		if (root.state[i] != 0) {
			child tempChild;
			tempChild.path = root.path;
			if (copy.move(1, i)) {
				tempChild.state = copy.tableVector;
				tempChild.path.push_back(i);
				children.push_back(tempChild);
			}
			else {
				tempChild.state = copy.tableVector;
				tempChild.path.push_back(i);
				vector<child> recursiveChildren = childrenFromPosition(tempChild);
				for (int i = 0; i < recursiveChildren.size(); i++) {
					children.push_back(recursiveChildren[i]);
				}
			}
		}	
	}
	return children;
}

System::Void kalahaGame::MyForm::MyForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	srand(time(0));
	buttons[0] = button1;
	buttons[1] = button2;
	buttons[2] = button3;
	buttons[3] = button4;
	buttons[4] = button5;
	buttons[5] = button6;
	buttons[6] = kalaha1;
	buttons[7] = button7;
	buttons[8] = button8;
	buttons[9] = button9;
	buttons[10] = button10;
	buttons[11] = button11;
	buttons[12] = button12;
	buttons[13] = kalaha2;
}

System::Void kalahaGame::MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (Convert::ToInt32(button1->Text) == 0) {
		MessageBox::Show("Please, choose a cell with stones", "Oops!");
	}
	else {
		playerMove(0);
	}
}

System::Void kalahaGame::MyForm::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (Convert::ToInt32(button2->Text) == 0) {
		MessageBox::Show("Please, choose a cell with stones", "Oops!");
	}
	else {
		playerMove(1);
	}
}

System::Void kalahaGame::MyForm::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (Convert::ToInt32(button3->Text) == 0) {
		MessageBox::Show("Please, choose a cell with stones", "Oops!");
	}
	else {
		playerMove(2);
	}
}

System::Void kalahaGame::MyForm::button4_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (Convert::ToInt32(button4->Text) == 0) {
		MessageBox::Show("Please, choose a cell with stones", "Oops!");
	}
	else {
		playerMove(3);
	}
}

System::Void kalahaGame::MyForm::button5_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (Convert::ToInt32(button5->Text) == 0) {
		MessageBox::Show("Please, choose a cell with stones", "Oops!");
	}
	else {
		playerMove(4);
	}
}

System::Void kalahaGame::MyForm::button6_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (Convert::ToInt32(button6->Text) == 0) {
		MessageBox::Show("Please, choose a cell with stones", "Oops!");
	}
	else {
		playerMove(5);
	}
}

