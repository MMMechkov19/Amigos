#pragma once

namespace AmigosQuiz {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Lesson
	/// </summary>
	public ref class Lesson : public System::Windows::Forms::Form
	{
	public:
		Lesson(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Lesson()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel7;
	protected:

	protected:













	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Lesson::typeid));
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel4->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel6
			// 
			this->panel6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel6.BackgroundImage")));
			this->panel6->Cursor = System::Windows::Forms::Cursors::Default;
			this->panel6->Location = System::Drawing::Point(346, 0);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(596, 524);
			this->panel6->TabIndex = 3;
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->panel6);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Cursor = System::Windows::Forms::Cursors::Default;
			this->panel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(347, 521);
			this->panel1->TabIndex = 4;
			// 
			// panel3
			// 
			this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel3.BackgroundImage")));
			this->panel3->Controls->Add(this->label4);
			this->panel3->Controls->Add(this->button2);
			this->panel3->Controls->Add(this->checkBox1);
			this->panel3->Controls->Add(this->panel5);
			this->panel3->Controls->Add(this->panel4);
			this->panel3->Controls->Add(this->label3);
			this->panel3->Controls->Add(this->label2);
			this->panel3->Location = System::Drawing::Point(346, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(532, 524);
			this->panel3->TabIndex = 2;
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F, System::Drawing::FontStyle::Underline));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(197)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->label4->Location = System::Drawing::Point(166, 407);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(190, 28);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Continue without signing in.";
			this->label4->UseMnemonic = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(110)), static_cast<System::Int32>(static_cast<System::Byte>(108)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->button2->Location = System::Drawing::Point(54, 356);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(410, 48);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Sign in";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::Color::Transparent;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Location = System::Drawing::Point(164, 320);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(291, 24);
			this->checkBox1->TabIndex = 9;
			this->checkBox1->Text = L"I agree to the terms and conditions.";
			this->checkBox1->UseVisualStyleBackColor = false;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(197)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)));
			this->panel5->Controls->Add(this->textBox2);
			this->panel5->Location = System::Drawing::Point(55, 241);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(409, 59);
			this->panel5->TabIndex = 8;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(197)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)));
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->textBox2->ForeColor = System::Drawing::Color::Transparent;
			this->textBox2->Location = System::Drawing::Point(18, 21);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(368, 19);
			this->textBox2->TabIndex = 8;
			this->textBox2->Text = L"Password";
			this->textBox2->UseSystemPasswordChar = true;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(197)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)));
			this->panel4->Controls->Add(this->textBox1);
			this->panel4->Location = System::Drawing::Point(54, 161);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(409, 59);
			this->panel4->TabIndex = 7;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(197)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->textBox1->ForeColor = System::Drawing::Color::Transparent;
			this->textBox1->Location = System::Drawing::Point(19, 20);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(368, 19);
			this->textBox1->TabIndex = 8;
			this->textBox1->Text = L"Username";
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F));
			this->label3->ForeColor = System::Drawing::Color::Transparent;
			this->label3->Location = System::Drawing::Point(51, 112);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(378, 39);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Sign in to your account so that we can import settings and preferences and adjust"
				L" your experience";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 33, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::Color::Transparent;
			this->label2->Location = System::Drawing::Point(46, 47);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(163, 52);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Sign in";
			// 
			// panel2
			// 
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->Location = System::Drawing::Point(346, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(549, 524);
			this->panel2->TabIndex = 1;
			// 
			// panel7
			// 
			this->panel7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel7.BackgroundImage")));
			this->panel7->Cursor = System::Windows::Forms::Cursors::Default;
			this->panel7->Location = System::Drawing::Point(346, 0);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(529, 524);
			this->panel7->TabIndex = 5;
			// 
			// Lesson
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(869, 513);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->panel1);
			this->Name = L"Lesson";
			this->Text = L"Lesson";
			this->panel1->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
};
}
