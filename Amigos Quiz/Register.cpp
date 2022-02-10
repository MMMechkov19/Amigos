#include "AccountSystem.h"
#include "Register.h"
#include <msclr\marshal_cppstd.h>
using namespace msclr::interop;

System::Void AmigosQuiz::Register::button3_Click(System::Object^ sender, System::EventArgs^ e) {

	ACCOUNT newAcc = { lastid++,
									marshal_as<std::string>(textBox4->Text),
									marshal_as<std::string>(textBox5->Text),
									marshal_as<std::string>(textBox6->Text->ToLower()),
									marshal_as<std::string>(textBox3->Text) };

	if (!isNameValid(newAcc.firstName) || !isNameValid(newAcc.lastName)) {
			//Error Message
			label1->Text = "Invalid First or Last Name";
		}
		else if (!isMailValid(newAcc.email)) {
			//Error Message
			label1->Text = "Invalid Email";
		}
		else if (!isPassValid(newAcc.password)) {
			//Error Message
			label1->Text = "Invalid Password";
		}
		else {
			currentAccount = newAcc;
			addAccount(newAcc);
			//Continue to Form for Questions
		}


}
