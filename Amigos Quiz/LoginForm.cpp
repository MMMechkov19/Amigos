#include "LoginForm.h"
#include "AccountSystem.h"
using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args)
{
    initialiseAccounts();
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    AmigosQuiz::LoginForm frm;
    Application::Run(% frm);
}

