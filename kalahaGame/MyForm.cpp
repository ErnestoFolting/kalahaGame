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
	disableButtons();
	status->Text = "Computer's move";
	
}

System::Void kalahaGame::MyForm::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	disableButtons();
	status->Text = "Computer's move";
}

System::Void kalahaGame::MyForm::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
	disableButtons();
	status->Text = "Computer's move";
}

System::Void kalahaGame::MyForm::button4_Click(System::Object^ sender, System::EventArgs^ e)
{
	disableButtons();
	status->Text = "Computer's move";
}

System::Void kalahaGame::MyForm::button5_Click(System::Object^ sender, System::EventArgs^ e)
{
	disableButtons();
	status->Text = "Computer's move";
}

System::Void kalahaGame::MyForm::button6_Click(System::Object^ sender, System::EventArgs^ e)
{
	disableButtons();
	status->Text = "Computer's move";
}
