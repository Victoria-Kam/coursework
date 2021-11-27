#pragma once
#include"Header.h"
#include<Windows.h>
#include<fstream>
#include<iostream>

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
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
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

// код был сгенерирован автоматически, т.к. форма была визуально  сконструирована в visual studio
//***********************************************************************************************
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::CheckBox^  checkBox3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::CheckBox^  checkBox4;
	private: System::Windows::Forms::CheckBox^  checkBox5;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::CheckBox^  checkBox6;
	private: System::Windows::Forms::CheckBox^  checkBox7;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::CheckBox^  checkBox8;
	private: System::Windows::Forms::CheckBox^  checkBox9;
	private: System::Windows::Forms::CheckBox^  checkBox10;
	private: System::Windows::Forms::CheckBox^  checkBox11;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;



	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox7 = (gcnew System::Windows::Forms::CheckBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox8 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox9 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox10 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox11 = (gcnew System::Windows::Forms::CheckBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(725, 121);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(135, 45);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Подсчет общей суммы доходов";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(897, 26);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(135, 27);
			this->textBox1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(897, 57);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(135, 27);
			this->textBox2->TabIndex = 2;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::Color::Transparent;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->checkBox1->ForeColor = System::Drawing::Color::LavenderBlush;
			this->checkBox1->Location = System::Drawing::Point(32, 17);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(218, 28);
			this->checkBox1->TabIndex = 3;
			this->checkBox1->Text = L"Коммунальные услуги";
			this->checkBox1->UseVisualStyleBackColor = false;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->BackColor = System::Drawing::Color::Transparent;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->checkBox2->ForeColor = System::Drawing::Color::LavenderBlush;
			this->checkBox2->Location = System::Drawing::Point(32, 45);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(175, 28);
			this->checkBox2->TabIndex = 4;
			this->checkBox2->Text = L"Кредиты и долги";
			this->checkBox2->UseVisualStyleBackColor = false;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox2_CheckedChanged);
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(229, 45);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(131, 27);
			this->textBox3->TabIndex = 5;
			this->textBox3->Visible = false;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->BackColor = System::Drawing::Color::Transparent;
			this->checkBox3->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->checkBox3->ForeColor = System::Drawing::Color::LavenderBlush;
			this->checkBox3->Location = System::Drawing::Point(32, 73);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(197, 28);
			this->checkBox3->TabIndex = 6;
			this->checkBox3->Text = L"Продукты питания";
			this->checkBox3->UseVisualStyleBackColor = false;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox3_CheckedChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::LavenderBlush;
			this->label1->Location = System::Drawing::Point(721, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(151, 20);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Доход 1-го человека";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::LavenderBlush;
			this->label2->Location = System::Drawing::Point(721, 60);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(151, 20);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Доход 2-го человека";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::Orange;
			this->label3->Location = System::Drawing::Point(536, 221);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(324, 20);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Общий доход составляет (в рублях): ";
			this->label3->Visible = false;
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->BackColor = System::Drawing::Color::Transparent;
			this->checkBox4->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->checkBox4->ForeColor = System::Drawing::Color::LavenderBlush;
			this->checkBox4->Location = System::Drawing::Point(32, 101);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(158, 28);
			this->checkBox4->TabIndex = 10;
			this->checkBox4->Text = L"Одежда и обувь";
			this->checkBox4->UseVisualStyleBackColor = false;
			this->checkBox4->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox4_CheckedChanged);
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->BackColor = System::Drawing::Color::Transparent;
			this->checkBox5->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->checkBox5->ForeColor = System::Drawing::Color::LavenderBlush;
			this->checkBox5->Location = System::Drawing::Point(32, 129);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(121, 28);
			this->checkBox5->TabIndex = 11;
			this->checkBox5->Text = L"Животные";
			this->checkBox5->UseVisualStyleBackColor = false;
			this->checkBox5->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox5_CheckedChanged);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(891, 121);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(141, 45);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Расчет семейного бюджета";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->BackColor = System::Drawing::Color::Transparent;
			this->checkBox6->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->checkBox6->ForeColor = System::Drawing::Color::LavenderBlush;
			this->checkBox6->Location = System::Drawing::Point(32, 157);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(225, 28);
			this->checkBox6->TabIndex = 13;
			this->checkBox6->Text = L"Лечение, медикаменты";
			this->checkBox6->UseVisualStyleBackColor = false;
			this->checkBox6->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox6_CheckedChanged);
			// 
			// checkBox7
			// 
			this->checkBox7->AutoSize = true;
			this->checkBox7->BackColor = System::Drawing::Color::Transparent;
			this->checkBox7->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->checkBox7->ForeColor = System::Drawing::Color::LavenderBlush;
			this->checkBox7->Location = System::Drawing::Point(32, 185);
			this->checkBox7->Name = L"checkBox7";
			this->checkBox7->Size = System::Drawing::Size(78, 28);
			this->checkBox7->TabIndex = 14;
			this->checkBox7->Text = L"Дети";
			this->checkBox7->UseVisualStyleBackColor = false;
			this->checkBox7->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox7_CheckedChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::LavenderBlush;
			this->label4->Location = System::Drawing::Point(117, 187);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(212, 22);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Количество детей в семье";
			this->label4->Visible = false;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->Location = System::Drawing::Point(360, 188);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(37, 24);
			this->textBox4->TabIndex = 16;
			this->textBox4->Visible = false;
			// 
			// checkBox8
			// 
			this->checkBox8->AutoSize = true;
			this->checkBox8->BackColor = System::Drawing::Color::Transparent;
			this->checkBox8->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->checkBox8->ForeColor = System::Drawing::Color::LavenderBlush;
			this->checkBox8->Location = System::Drawing::Point(32, 213);
			this->checkBox8->Name = L"checkBox8";
			this->checkBox8->Size = System::Drawing::Size(348, 28);
			this->checkBox8->TabIndex = 17;
			this->checkBox8->Text = L"Расходы на общественный транспорт";
			this->checkBox8->UseVisualStyleBackColor = false;
			this->checkBox8->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox8_CheckedChanged);
			// 
			// checkBox9
			// 
			this->checkBox9->AutoSize = true;
			this->checkBox9->BackColor = System::Drawing::Color::Transparent;
			this->checkBox9->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->checkBox9->ForeColor = System::Drawing::Color::LavenderBlush;
			this->checkBox9->Location = System::Drawing::Point(32, 241);
			this->checkBox9->Name = L"checkBox9";
			this->checkBox9->Size = System::Drawing::Size(295, 28);
			this->checkBox9->TabIndex = 18;
			this->checkBox9->Text = L"Косметика, парфюмерия и т.п.";
			this->checkBox9->UseVisualStyleBackColor = false;
			this->checkBox9->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox9_CheckedChanged);
			// 
			// checkBox10
			// 
			this->checkBox10->AutoSize = true;
			this->checkBox10->BackColor = System::Drawing::Color::Transparent;
			this->checkBox10->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->checkBox10->ForeColor = System::Drawing::Color::LavenderBlush;
			this->checkBox10->Location = System::Drawing::Point(32, 269);
			this->checkBox10->Name = L"checkBox10";
			this->checkBox10->Size = System::Drawing::Size(218, 28);
			this->checkBox10->TabIndex = 19;
			this->checkBox10->Text = L"Образование, обучение";
			this->checkBox10->UseVisualStyleBackColor = false;
			this->checkBox10->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox10_CheckedChanged);
			// 
			// checkBox11
			// 
			this->checkBox11->AutoSize = true;
			this->checkBox11->BackColor = System::Drawing::Color::Transparent;
			this->checkBox11->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->checkBox11->ForeColor = System::Drawing::Color::LavenderBlush;
			this->checkBox11->Location = System::Drawing::Point(32, 297);
			this->checkBox11->Name = L"checkBox11";
			this->checkBox11->Size = System::Drawing::Size(274, 28);
			this->checkBox11->TabIndex = 20;
			this->checkBox11->Text = L"Отдых, развлечения, туризм";
			this->checkBox11->UseVisualStyleBackColor = false;
			this->checkBox11->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox11_CheckedChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::Color::Gold;
			this->label5->Location = System::Drawing::Point(875, 221);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 20);
			this->label5->TabIndex = 21;
			this->label5->Visible = false;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(540, 121);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(154, 45);
			this->button3->TabIndex = 22;
			this->button3->Text = L"Повторный расчет семейного бюджета ";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Visible = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(159, 519);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(98, 50);
			this->button4->TabIndex = 23;
			this->button4->Text = L"сохранить в файл";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(460, 333);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(46, 17);
			this->label6->TabIndex = 24;
			this->label6->Text = L"label6";
			this->label6->Visible = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(460, 365);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(46, 17);
			this->label7->TabIndex = 25;
			this->label7->Text = L"label7";
			this->label7->Visible = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(460, 396);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(46, 17);
			this->label8->TabIndex = 26;
			this->label8->Text = L"label8";
			this->label8->Visible = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(460, 428);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(46, 17);
			this->label9->TabIndex = 27;
			this->label9->Text = L"label9";
			this->label9->Visible = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(460, 458);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(54, 17);
			this->label10->TabIndex = 28;
			this->label10->Text = L"label10";
			this->label10->Visible = false;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(460, 490);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(54, 17);
			this->label11->TabIndex = 29;
			this->label11->Text = L"label11";
			this->label11->Visible = false;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(460, 521);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(54, 17);
			this->label12->TabIndex = 30;
			this->label12->Text = L"label12";
			this->label12->Visible = false;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(460, 553);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(54, 17);
			this->label13->TabIndex = 31;
			this->label13->Text = L"label13";
			this->label13->Visible = false;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(460, 586);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(54, 17);
			this->label14->TabIndex = 32;
			this->label14->Text = L"label14";
			this->label14->Visible = false;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(460, 620);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(54, 17);
			this->label15->TabIndex = 33;
			this->label15->Text = L"label15";
			this->label15->Visible = false;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(460, 648);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(54, 17);
			this->label16->TabIndex = 34;
			this->label16->Text = L"label16";
			this->label16->Visible = false;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::Transparent;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->ForeColor = System::Drawing::Color::Orange;
			this->label17->Location = System::Drawing::Point(536, 185);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(0, 20);
			this->label17->TabIndex = 35;
			this->label17->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::CornflowerBlue;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1063, 687);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->checkBox11);
			this->Controls->Add(this->checkBox10);
			this->Controls->Add(this->checkBox9);
			this->Controls->Add(this->checkBox8);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->checkBox7);
			this->Controls->Add(this->checkBox6);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->checkBox5);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
//**********************************************************************************************************************

	public: double itog = 0.00, sem_budz_itog = 0.00, kommun = 0.00, obch_dohod = 0.00, pitanie = 0.00, odezda_i_obuv = 0.00, animals = 0.00, dolg = 0.00, lecure = 0.00, kids = 0.00, transport = 0.00, cosmetic_i_parf = 0.00, study = 0.00, tourism = 0.00, for_kids = 0.00;
	public: int kol_vo_kods = 0;
	public: bool have_kids = false, have_dolg = false;

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
	{
		label3->Visible = true;
		label5->Visible = true;
		obch_dohod = System::Convert::ToDouble(textBox1->Text) + System::Convert::ToDouble(textBox2->Text);
		label5->Text = obch_dohod.ToString();
		System::Windows::Forms::DialogResult result;   // вводим диалог с сообщениями
		result = MessageBox::Show("У Вас есть дети в семье?", "information", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
		if (result == System::Windows::Forms::DialogResult::Yes)
		{
			MessageBox::Show("Тогда для начала введите количество детей в семье", "information");
		}

	}

	private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e)   //коммунальные услуги
	{

		if (checkBox1->Checked == true)
		{
			FamilyClass family;
			kommun = family.raschet_communalki(obch_dohod);
		}
		else
		{
			kommun = 0.00;
		}
	}
	private: System::Void checkBox2_CheckedChanged(System::Object^  sender, System::EventArgs^  e)   //кредиты и долги
	{
		if (checkBox2->Checked == true)
		{
			textBox3->Visible = true;
			have_dolg = true;
		}
		else
		{
			have_dolg = false;
			textBox3->Visible = false;
			textBox3->Text = "";
			dolg = 0.00;
		}

	}
	private: System::Void checkBox3_CheckedChanged(System::Object^  sender, System::EventArgs^  e)   //продукты питания
	{
		if (checkBox3->Checked == true)
		{
			FamilyClass family;
			pitanie = family.raschet_zatrat_productov(obch_dohod);
		}
		else
		{
			pitanie = 0.00;
		}
	}
	private: System::Void checkBox4_CheckedChanged(System::Object^  sender, System::EventArgs^  e)   //одежда и обувь
	{
		if (checkBox4->Checked == true)
		{
			FamilyClass family;
			odezda_i_obuv = family.raschet_odezdy_and_obuvy(obch_dohod);
		}
		else
		{
			odezda_i_obuv = 0.00;
		}
	}
	private: System::Void checkBox5_CheckedChanged(System::Object^  sender, System::EventArgs^  e)   //животные 
	{
		if (checkBox5->Checked == true)
		{
			FamilyClass family;
			animals = family.rasche_for_pets(obch_dohod);
		}
		else
		{
			animals = 0.00;
		}
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e)
	{
		FamilyClass family;
		if (have_dolg)
		{
			dolg = System::Convert::ToDouble(textBox3->Text);
		}
		label6->Visible = true;
		label6->Text = "Коммунальные услуги : " + kommun;
		label7->Visible = true;
		label7->Text = "Кредиты и долги : " + dolg;
		label8->Visible = true;
		label8->Text = "Продукты питания : " + pitanie;
		label9->Visible = true;
		label9->Text = "Одежда и обувь : " + odezda_i_obuv;
		label10->Visible = true;
		label10->Text = "Животные : " + animals;
		label11->Visible = true;
		label11->Text = "Лечение и медикаменты : " + lecure;
		label12->Visible = true;
		label12->Text = "Дети : " + kids;
		label13->Visible = true;
		label13->Text = "Расходы на общественный транспорт : " + transport;
		label14->Visible = true;
		label14->Text = "Косметика и парфюмерия : " + cosmetic_i_parf;
		label15->Visible = true;
		label15->Text = "Образование : " + study;
		label16->Visible = true;
		label16->Text = "Туризм и отдых : " + tourism;
		sem_budz_itog = obch_dohod - (kommun + dolg + pitanie + odezda_i_obuv + animals + lecure + kids + transport + cosmetic_i_parf + study + tourism);
		MessageBox::Show("Итого у Вас остается : "+floorl(sem_budz_itog),"Информация",MessageBoxButtons::OK,MessageBoxIcon::Information);
		/*	if (sem_budz_itog > obch_dohod)
		{
			itog = sem_budz_itog - obch_dohod;
			MessageBox::Show("У Вас отсатется" + itog, "Информация");
		}
		else
		{
			itog = sem_budz_itog - obch_dohod;
			MessageBox::Show("У Вас отсатется" + itog, "Информация");
		}*/
	}
	private: System::Void checkBox6_CheckedChanged(System::Object^  sender, System::EventArgs^  e)   //лечение и медикаменты
	{
		if (checkBox6->Checked == true)
		{
			FamilyClass family;
			lecure = family.raschet_for_lecure(obch_dohod);
		}
		else
		{
			lecure = 0.00;
		}
	}
	private: System::Void checkBox7_CheckedChanged(System::Object^  sender, System::EventArgs^  e)   //дети
	{
		if (checkBox7->Checked == true)
		{
			if (!have_kids)
			{
				label4->Visible = true;
				textBox4->Visible = true;
				button3->Visible = true;
				have_kids = true;
			}
		}
		else
		{
			label4->Visible = false;
			textBox4->Visible = false;
			button3->Visible = false;
			textBox4->Text = "";
			have_kids = false;
		}
	}
	private: System::Void checkBox8_CheckedChanged(System::Object^  sender, System::EventArgs^  e)   //расходы на общественный транспорт
	{
		if (checkBox8->Checked == true)
		{
			FamilyClass family;
			transport = family.raschet_zatrat_na_transport(obch_dohod);
		}
		else
		{
			transport = 0.00;
		}
	}
	private: System::Void checkBox9_CheckedChanged(System::Object^  sender, System::EventArgs^  e)   //косметика и парфюмерия
	{
		if (checkBox9->Checked == true)
		{
			FamilyClass family;
			cosmetic_i_parf = family.raschet_zatrat_kosmetiki_i_parfum(obch_dohod);
		}
		else
		{
			cosmetic_i_parf = 0.00;
		}
	}
	private: System::Void checkBox10_CheckedChanged(System::Object^  sender, System::EventArgs^  e)   //образование и обучение
	{
		if (checkBox10->Checked == true)
		{
			FamilyClass family;
			study = family.raschet_for_study(obch_dohod);
		}
		else
		{
			study = 0.00;
		}
	}
	private: System::Void checkBox11_CheckedChanged(System::Object^  sender, System::EventArgs^  e)   //отдых, развлечения и туризм
	{
		if (checkBox11->Checked == true)
		{
			FamilyClass family;
			tourism = family.raschet_for_tourizm(obch_dohod);
		}
		else
		{
			tourism = 0.00;
		}
	}

	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e)   // для доп. подсчета семейного бюджета с пособием для детей 
	{
		FamilyClass family;
		kol_vo_kods = System::Convert::ToInt32(textBox4->Text);
		if (have_kids && textBox4->Text != "")   //пособие увеличивается в зависимости сколько детей в семье начиная с 3-го ребенка
		{
			if (kol_vo_kods >= 3)
			{
				for (int i = 3; i <= kol_vo_kods; i++)
				{
					for_kids += 100.00;
				}
			}
			obch_dohod += for_kids;   //к бюджету семьи прибавляется пособие для детей
			label17->Visible = true;
			label17->Text = " + пособие для детей составляет :" + for_kids + " ";
			label5->Text = obch_dohod.ToString();
		}
		kids = family.raschet_zatrad_for_kids(obch_dohod, kol_vo_kods);   // затраты на детей
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e)
	{
		std::ofstream fle;
		fle.open("test.txt");
		fle << "\nРезультат расчета: ";
		fle << "\n\nОбщий доход: " << obch_dohod;
		fle << "\n\nКоммуналка: " << kommun;
		fle << "\n\nДолг: " << dolg;
		fle << "\n\nПитание: " << pitanie;
		fle << "\n\nОдежда и обувь: " << odezda_i_obuv;
		fle << "\n\nПитомцы: " << animals;
		fle << "\n\nЛекарства: " << lecure;
		fle << "\n\nДети: " << kids;
		fle << "\n\nТранспорт: " << transport;
		fle << "\n\nКосметика и парфюмерия: " << cosmetic_i_parf;
		fle << "\n\nОбучение: " << study;
		fle << "\n\nОтдых: " << tourism;
		fle << "\n\nИтоговый остаток: " << sem_budz_itog;
		fle.close();
		MessageBox::Show("Сохранено!","Information");
	}
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e)
	{
		//ToolTip tip;
		//tip.SetToolTip(label4, "Расчет семейного бюджета с учетом пособия на детей");
	}
};
}
