#pragma once
#include "Register.h"
#include <msclr\marshal_cppstd.h>
#include "AccountSystem.h"

namespace AmigosQuiz {

	using namespace msclr::interop;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
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
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel3->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel4->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->panel1->Location = System::Drawing::Point(-2, 1);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(347, 550);
			this->panel1->TabIndex = 0;
			this->panel1->Click += gcnew System::EventHandler(this, &LoginForm::otherClick);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(110)), static_cast<System::Int32>(static_cast<System::Byte>(108)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(91, 356);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(127, 37);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Register";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &LoginForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label1->ForeColor = System::Drawing::Color::Transparent;
			this->label1->Location = System::Drawing::Point(103, 333);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(105, 20);
			this->label1->TabIndex = 4;
			this->label1->Text = L"No Account\?";
			this->label1->Click += gcnew System::EventHandler(this, &LoginForm::otherClick);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(60, 161);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(198, 69);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 3;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &LoginForm::otherClick);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(75, 33);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(170, 139);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &LoginForm::otherClick);
			// 
			// panel2
			// 
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->Location = System::Drawing::Point(346, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(549, 524);
			this->panel2->TabIndex = 1;
			// 
			// panel3
			// 
			this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel3.BackgroundImage")));
			this->panel3->Controls->Add(this->button2);
			this->panel3->Controls->Add(this->checkBox1);
			this->panel3->Controls->Add(this->panel5);
			this->panel3->Controls->Add(this->panel4);
			this->panel3->Controls->Add(this->label3);
			this->panel3->Controls->Add(this->label2);
			this->panel3->Location = System::Drawing::Point(344, 1);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(532, 524);
			this->panel3->TabIndex = 1;
			this->panel3->Click += gcnew System::EventHandler(this, &LoginForm::checkBox1_CheckedChanged);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(110)), static_cast<System::Int32>(static_cast<System::Byte>(108)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->button2->Location = System::Drawing::Point(54, 356);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(410, 48);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Sign in";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &LoginForm::otherClick);
			this->button2->Click += gcnew System::EventHandler(this, &LoginForm::button2_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::Color::Transparent;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->checkBox1->Location = System::Drawing::Point(164, 320);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(192, 17);
			this->checkBox1->TabIndex = 9;
			this->checkBox1->Text = L"I agree to the terms and conditions.";
			this->checkBox1->UseVisualStyleBackColor = false;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &LoginForm::checkBox1_CheckedChanged);
			this->checkBox1->Click += gcnew System::EventHandler(this, &LoginForm::otherClick);
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
			this->textBox2->Click += gcnew System::EventHandler(this, &LoginForm::textBox2_Click);
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
			this->textBox1->Text = L"Email Address";
			this->textBox1->Click += gcnew System::EventHandler(this, &LoginForm::textBox1_Click);
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &LoginForm::textBox1_TextChanged);
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
			this->label3->Click += gcnew System::EventHandler(this, &LoginForm::otherClick);
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
			this->label2->Click += gcnew System::EventHandler(this, &LoginForm::otherClick);
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(867, 523);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel1);
			this->Name = L"LoginForm";
			this->Text = L"LoginForm";
			this->Load += gcnew System::EventHandler(this, &LoginForm::LoginForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void LoginForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "Email Address") {
			textBox1->Text = "";
		}
		if (textBox2->Text == "") {
			textBox2->Text = "Password";
		}
	}
	private: System::Void textBox2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox2->Text == "Password") {
			textBox2->Text = "";
		}
		if (textBox1->Text == "") {
			textBox1->Text = "Email Address";
		}
	}
	private: System::Void otherClick(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "") {
			textBox1->Text = "Email Address";
		}
		if (textBox2->Text == "") {
			textBox2->Text = "Password";
		}		
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "") {
			textBox1->Text = "Email Address";
		}
		if (textBox2->Text == "") {
			textBox2->Text = "Password";
		}
		this->Hide();
		AmigosQuiz::Register reg;
		reg.ShowDialog();
		this->Show();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
			std::string email = marshal_as<std::string>(textBox1->Text);
			std::string password = marshal_as<std::string>(textBox2->Text);
			currentAccount = searchAccount(email, password);
			if (currentAccount.id == 0) {
				label1->Text = "Not Found Account Sorry";
			}
			else {
				label1->Text = "Found Account YAY";
			}
	}
};
}
