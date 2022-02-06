#include "Register.h";
#include "AccountSystem.h"
#include <msclr\marshal_cppstd.h>
using namespace msclr::interop;

System::Void AmigosQuiz::Register::button3_Click(System::Object^ sender, System::EventArgs^ e) {

		AccountSystem::ACCOUNT newAcc = { 1,
										marshal_as<std::string>(textBox1->Text),
										marshal_as<std::string>(textBox2->Text),
										marshal_as<std::string>(textBox3->Text),
										marshal_as<std::string>(textBox4->Text) };

		//AccountSystem::AddAccount(newAcc);

		label1->Text = textBox4->Text;

}
