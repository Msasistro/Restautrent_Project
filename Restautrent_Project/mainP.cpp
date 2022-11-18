#include"loginForm.h"

using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	RestautrentProject::loginForm loginform;

	loginform.ShowDialog();
	User^ user = loginform.user;

	if (user != nullptr) {
		MessageBox::Show("login successfull", "welcome " + user->fname, MessageBoxButtons::OK);
	}
	else {
		MessageBox::Show("Authentication failed", "mainP.cpp", MessageBoxButtons::OK);
	}
}