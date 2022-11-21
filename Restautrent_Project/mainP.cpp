#include"loginForm.h"
#include"mainForm.h"
#include "RegisterForm.h"
#include "user.h"

//problem is I cant connect to mysql properly

using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	
	User^ user = nullptr;
	while (true) {
		//defualt winform is the login
		RestautrentProject::loginForm loginform;
		loginform.ShowDialog();
		
		if (loginform.switchToRegister) {
			//switching to register form
			RestautrentProject::RegisterForm registerForm;
			registerForm.ShowDialog();

			if (registerForm.switchToLogin) {
				continue;
			}
			else
			{
				user = registerForm.user;
				break;
			}
		}
		else
		{
			//switch to login form
			user = loginform.user;
			break;
		}
	}

	if (user != nullptr) {
		RestautrentProject::mainForm mainForm(user);
		Application::Run(% mainForm);
	}
	else {
		MessageBox::Show("Authentication failed", "mainP.cpp", MessageBoxButtons::OK);
	}
}