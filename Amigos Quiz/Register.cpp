#include "Register.h";
#include "AccountSystem.h"
#include <msclr\marshal_cppstd.h>
using namespace msclr::interop;

System::Void AmigosQuiz::Register::button3_Click(System::Object^ sender, System::EventArgs^ e) {

		ACCOUNT newAcc = { 1,
										marshal_as<std::string>(textBox1->Text),
										marshal_as<std::string>(textBox2->Text),
										marshal_as<std::string>(textBox3->Text),
										marshal_as<std::string>(textBox4->Text) };

		if (!isNameValid(newAcc.firstName) && !isNameValid(newAcc.lastName)) {
			//Error Message
		}
		else if (!isMailValid(newAcc.email)) {
			//Error Message
		}
		else if (!isPassValid(newAcc.password)) {
			//Error Message
		}
		else {
			currentAccount = newAcc;
			addAccount(newAcc);
			//Continue to Form for Questions
		}


}
