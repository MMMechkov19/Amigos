#include "LoginForm.h"
using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    AmigosQuiz::LoginForm frm;
    Application::Run(% frm);
}

