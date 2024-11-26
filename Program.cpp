// This Cpp file  contains the main message .

#include "LoginForm.h"
#include "MainForm1.h"
#include "RegisterForm.h"

using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args) {

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	User^ user = nullptr;
	while (true)
	{
		MyResturantProduct::LoginForm loginForm;
		loginForm.ShowDialog();

		if (loginForm.switchToRegister) {
			//show the register form 
			MyResturantProduct::RegisterForm registerForm;
			registerForm.ShowDialog();

			if (registerForm.switchToLogin) {
				continue;
			}
		}
		else {
			user = loginForm.user;
			break;
		}

	}

	if (user != nullptr) {
		MyResturantProduct::MainForm1 mainForm(user);
		Application::Run(% mainForm);
	}
	else {
		MessageBox::Show("Authentication Canceled", "Program.cpp", MessageBoxButtons::OK);
	}
}