#include "AccountSystem.h"
#include "Register.h"
#include "EventForm.h"
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
			MessageBox::Show("Invalid First or Last Name");
		}
		else if (!isMailValid(newAcc.email)) {
			//Error Message
			MessageBox::Show ("Invalid Email");
		}
		else if (!isPassValid(newAcc.password)) {
			//Error Message
			MessageBox::Show("Incorrect Password Format");
		}
		else {
			currentAccount = newAcc;
			addAccount(newAcc);
			this->Hide();
			AmigosQuiz::EventForm ev;
			ev.ShowDialog();
			this->Show();
		}


}
