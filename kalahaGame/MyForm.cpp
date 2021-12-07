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
	for (int i = 0; i < tb.tableVector.size();i++) {
		buttons[i]->Text = Convert::ToString(tb.tableVector[i]);
	}
}

void kalahaGame::MyForm::playerMove(int buttonNumber)
{
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
	int cellToMove = computerFindCellToMove();

	while (!tb.move(1, cellToMove) && !finishCheck(tb)) {
		update(tb);
		cellToMove = computerFindCellToMove();
	}
	update(tb);
	if (!finishCheck(tb)) {
		status->Text = "Your move!";
		enableButtons();
	}
}

int kalahaGame::MyForm::computerFindCellToMove()
{
	bool flag = false;
	int cellToMove;
	while (!flag) {
		cellToMove = rand() % 6 + 7;
		if (Convert::ToInt32(buttons[cellToMove]->Text) != 0) {
			flag = true;
		}
	}
	return cellToMove;
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
		MessageBox::Show("You have won.", "Congrats!");
	}
	else if (tb.tableVector[13] >= 37) {
		MessageBox::Show("The computer has won.", "Not bad, but...");
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
			MessageBox::Show("Moves are over. You have won.", "Congrats!");
		}
		else if (tb.tableVector[13] > tb.tableVector[6]) {
			MessageBox::Show("Moves are over. Computer has won.", "Not bad, but...");
		}
		else {
			MessageBox::Show("Friends are winning", "Draw!");
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
	status->Text = "Your move";
}

bool kalahaGame::MyForm::minimaxGameOverCheck(table tb)
{
	if (tb.tableVector[6] >= 37 || tb.tableVector[13] >= 37)return true;

	bool computerMoves = 0;
	bool playerMoves = 0;
	for (int i = 0; i < 6; i++) {
		if (tb.tableVector[i] != 0)playerMoves = 1;
	}
	for (int i = 7; i < 13; i++) {
		if (tb.tableVector[i] != 0)computerMoves = 1;
	}

	if (!computerMoves || !playerMoves) {
		return true;
	}
	else {
		return false;
	}
}

int kalahaGame::MyForm::staticEvaluation(table tb)
{
	int evaluation = (tb.tableVector[13] - tb.tableVector[6]);
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

