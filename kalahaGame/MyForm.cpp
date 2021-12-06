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

void kalahaGame::MyForm::update(table tb)
{
	for (int i = 0; i < tb.tableVector.size();i++) {
		buttons[i]->Text = Convert::ToString(tb.tableVector[i]);
	}
}

void kalahaGame::MyForm::buttonToMove(int buttonNumber)
{
	vector<int> vec;
	for (int i = 0; i < 14; i++) {
		vec.push_back(Convert::ToInt32(buttons[i]->Text));
	}
	table tb(vec);
	disableButtons();
	status->Text = "Computer's move";
	tb.move(1, buttonNumber);
	update(tb);
}

System::Void kalahaGame::MyForm::MyForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	
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
	buttonToMove(12);
}

System::Void kalahaGame::MyForm::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	buttonToMove(1);
}

System::Void kalahaGame::MyForm::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
	buttonToMove(2);
}

System::Void kalahaGame::MyForm::button4_Click(System::Object^ sender, System::EventArgs^ e)
{
	buttonToMove(3);
}

System::Void kalahaGame::MyForm::button5_Click(System::Object^ sender, System::EventArgs^ e)
{
	buttonToMove(4);
}

System::Void kalahaGame::MyForm::button6_Click(System::Object^ sender, System::EventArgs^ e)
{
	buttonToMove(5);
}
