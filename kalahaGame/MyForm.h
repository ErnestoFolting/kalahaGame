#pragma once
#include <vector>
#include "table.h"
#include <ctime>

struct child {
	vector<int> state;
	vector<int> path;

};

namespace kalahaGame {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::StatusStrip^ statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^ status;
	private: System::Windows::Forms::Button^ kalaha1;
	private: System::Windows::Forms::Button^ kalaha2;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Label^ label14;
	private: System::ComponentModel::IContainer^ components;







	protected:





	protected:

	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->status = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->kalaha1 = (gcnew System::Windows::Forms::Button());
			this->kalaha2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->statusStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::Control;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Font = (gcnew System::Drawing::Font(L"AA Bebas Neue", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(113, 513);
			this->button1->MaximumSize = System::Drawing::Size(134, 88);
			this->button1->MinimumSize = System::Drawing::Size(134, 88);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(134, 88);
			this->button1->TabIndex = 0;
			this->button1->Text = L"6";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::Control;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Font = (gcnew System::Drawing::Font(L"AA Bebas Neue", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(280, 513);
			this->button2->MaximumSize = System::Drawing::Size(134, 88);
			this->button2->MinimumSize = System::Drawing::Size(134, 88);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(134, 88);
			this->button2->TabIndex = 1;
			this->button2->Text = L"6";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::Control;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Font = (gcnew System::Drawing::Font(L"AA Bebas Neue", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(439, 513);
			this->button3->MaximumSize = System::Drawing::Size(134, 88);
			this->button3->MinimumSize = System::Drawing::Size(134, 88);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(134, 88);
			this->button3->TabIndex = 2;
			this->button3->Text = L"6";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::Control;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->Font = (gcnew System::Drawing::Font(L"AA Bebas Neue", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(608, 513);
			this->button4->MaximumSize = System::Drawing::Size(134, 88);
			this->button4->MinimumSize = System::Drawing::Size(134, 88);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(134, 88);
			this->button4->TabIndex = 3;
			this->button4->Text = L"6";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::Control;
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->Font = (gcnew System::Drawing::Font(L"AA Bebas Neue", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(775, 513);
			this->button5->MaximumSize = System::Drawing::Size(134, 88);
			this->button5->MinimumSize = System::Drawing::Size(134, 88);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(134, 88);
			this->button5->TabIndex = 4;
			this->button5->Text = L"6";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::Control;
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->Font = (gcnew System::Drawing::Font(L"AA Bebas Neue", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(936, 513);
			this->button6->MaximumSize = System::Drawing::Size(134, 88);
			this->button6->MinimumSize = System::Drawing::Size(134, 88);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(134, 88);
			this->button6->TabIndex = 5;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::Control;
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->Enabled = false;
			this->button7->Font = (gcnew System::Drawing::Font(L"AA Bebas Neue", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(936, 259);
			this->button7->MaximumSize = System::Drawing::Size(134, 88);
			this->button7->MinimumSize = System::Drawing::Size(134, 88);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(134, 88);
			this->button7->TabIndex = 11;
			this->button7->Text = L"6";
			this->button7->UseVisualStyleBackColor = false;
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::Control;
			this->button8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button8->Enabled = false;
			this->button8->Font = (gcnew System::Drawing::Font(L"AA Bebas Neue", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(775, 259);
			this->button8->MaximumSize = System::Drawing::Size(134, 88);
			this->button8->MinimumSize = System::Drawing::Size(134, 88);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(134, 88);
			this->button8->TabIndex = 10;
			this->button8->Text = L"6";
			this->button8->UseVisualStyleBackColor = false;
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::Control;
			this->button9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button9->Enabled = false;
			this->button9->Font = (gcnew System::Drawing::Font(L"AA Bebas Neue", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->Location = System::Drawing::Point(608, 259);
			this->button9->MaximumSize = System::Drawing::Size(134, 88);
			this->button9->MinimumSize = System::Drawing::Size(134, 88);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(134, 88);
			this->button9->TabIndex = 9;
			this->button9->Text = L"6";
			this->button9->UseVisualStyleBackColor = false;
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::SystemColors::Control;
			this->button10->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button10->Enabled = false;
			this->button10->Font = (gcnew System::Drawing::Font(L"AA Bebas Neue", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->Location = System::Drawing::Point(439, 259);
			this->button10->MaximumSize = System::Drawing::Size(134, 88);
			this->button10->MinimumSize = System::Drawing::Size(134, 88);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(134, 88);
			this->button10->TabIndex = 8;
			this->button10->Text = L"6";
			this->button10->UseVisualStyleBackColor = false;
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::SystemColors::Control;
			this->button11->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button11->Enabled = false;
			this->button11->Font = (gcnew System::Drawing::Font(L"AA Bebas Neue", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->Location = System::Drawing::Point(280, 259);
			this->button11->MaximumSize = System::Drawing::Size(134, 88);
			this->button11->MinimumSize = System::Drawing::Size(134, 88);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(134, 88);
			this->button11->TabIndex = 7;
			this->button11->Text = L"6";
			this->button11->UseVisualStyleBackColor = false;
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::SystemColors::Control;
			this->button12->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button12->Enabled = false;
			this->button12->Font = (gcnew System::Drawing::Font(L"AA Bebas Neue", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button12->Location = System::Drawing::Point(113, 259);
			this->button12->MaximumSize = System::Drawing::Size(134, 88);
			this->button12->MinimumSize = System::Drawing::Size(134, 88);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(134, 88);
			this->button12->TabIndex = 6;
			this->button12->Text = L"6";
			this->button12->UseVisualStyleBackColor = false;
			// 
			// statusStrip1
			// 
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->status });
			this->statusStrip1->Location = System::Drawing::Point(0, 825);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(1184, 36);
			this->statusStrip1->TabIndex = 12;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// status
			// 
			this->status->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->status->Font = (gcnew System::Drawing::Font(L"AA Bebas Neue", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->status->Name = L"status";
			this->status->Size = System::Drawing::Size(107, 31);
			this->status->Text = L"Your Move";
			// 
			// kalaha1
			// 
			this->kalaha1->BackColor = System::Drawing::Color::MediumPurple;
			this->kalaha1->Enabled = false;
			this->kalaha1->Font = (gcnew System::Drawing::Font(L"AA Bebas Neue", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->kalaha1->Location = System::Drawing::Point(936, 378);
			this->kalaha1->Name = L"kalaha1";
			this->kalaha1->Size = System::Drawing::Size(230, 101);
			this->kalaha1->TabIndex = 13;
			this->kalaha1->Text = L"0";
			this->kalaha1->UseVisualStyleBackColor = false;
			// 
			// kalaha2
			// 
			this->kalaha2->BackColor = System::Drawing::Color::MediumPurple;
			this->kalaha2->Enabled = false;
			this->kalaha2->Font = (gcnew System::Drawing::Font(L"AA Bebas Neue", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->kalaha2->Location = System::Drawing::Point(17, 378);
			this->kalaha2->Name = L"kalaha2";
			this->kalaha2->Size = System::Drawing::Size(230, 101);
			this->kalaha2->TabIndex = 14;
			this->kalaha2->Text = L"0";
			this->kalaha2->UseVisualStyleBackColor = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"AA Bebas Neue", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(167, 621);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(18, 27);
			this->label1->TabIndex = 15;
			this->label1->Text = L"1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"AA Bebas Neue", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(338, 621);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(21, 27);
			this->label2->TabIndex = 16;
			this->label2->Text = L"2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"AA Bebas Neue", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(498, 621);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(21, 27);
			this->label3->TabIndex = 17;
			this->label3->Text = L"3";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"AA Bebas Neue", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(666, 621);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(22, 27);
			this->label4->TabIndex = 18;
			this->label4->Text = L"4";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"AA Bebas Neue", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(831, 621);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(21, 27);
			this->label5->TabIndex = 19;
			this->label5->Text = L"5";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"AA Bebas Neue", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(994, 621);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(21, 27);
			this->label6->TabIndex = 20;
			this->label6->Text = L"6";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"AA Bebas Neue", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(997, 219);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(21, 27);
			this->label7->TabIndex = 21;
			this->label7->Text = L"7";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"AA Bebas Neue", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(831, 219);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(21, 27);
			this->label8->TabIndex = 22;
			this->label8->Text = L"8";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"AA Bebas Neue", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(669, 219);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(21, 27);
			this->label9->TabIndex = 23;
			this->label9->Text = L"9";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"AA Bebas Neue", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(498, 219);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(27, 27);
			this->label10->TabIndex = 24;
			this->label10->Text = L"10";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"AA Bebas Neue", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(341, 219);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(24, 27);
			this->label11->TabIndex = 25;
			this->label11->Text = L"11";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"AA Bebas Neue", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(167, 219);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(27, 27);
			this->label12->TabIndex = 26;
			this->label12->Text = L"12";
			// 
			// timer1
			// 
			this->timer1->Interval = 3000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"AA Bebas Neue", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(396, 30);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(419, 39);
			this->label13->TabIndex = 27;
			this->label13->Text = L"Please, choose a level of difficulty";
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::SystemColors::Control;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"AA Bebas Neue", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Easy peasy", L"Medium", L"Overkill" });
			this->comboBox1->Location = System::Drawing::Point(439, 72);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(314, 39);
			this->comboBox1->TabIndex = 28;
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::MediumPurple;
			this->button13->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button13->Font = (gcnew System::Drawing::Font(L"AA Bebas Neue", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button13->Location = System::Drawing::Point(539, 147);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(93, 51);
			this->button13->TabIndex = 29;
			this->button13->Text = L"Start!";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"AA Bebas Neue", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->Location = System::Drawing::Point(475, 114);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(233, 42);
			this->label14->TabIndex = 30;
			this->label14->Text = L"Difficulty: Medium";
			this->label14->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightGray;
			this->ClientSize = System::Drawing::Size(1184, 861);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->kalaha2);
			this->Controls->Add(this->kalaha1);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(1200, 900);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(1200, 900);
			this->Name = L"MyForm";
			this->Text = L"Kalaha Game";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	cli::array<Button^>^ buttons = gcnew cli::array<Button^>(14);
	private: void disableButtons();
	private: void enableButtons();
	private: void update(table tb);
	private: void playerMove(int buttonNumber);
	private: void computerMove(table tb);
	private: vector<int> computerFindCellsToMove(table tb);
	private: bool finishCheck(table tb);
	private: void finishOfGame();
	private: bool minimaxGameOverCheck(child c);
	private: int staticEvaluation(child c);
	private: vector<int> minimax(child position, int depth, int alpha, int beta, bool maximizingPlayer);
	private: vector<child> kalahaGame::MyForm::childrenFromPosition(child root);
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e);
};
}
