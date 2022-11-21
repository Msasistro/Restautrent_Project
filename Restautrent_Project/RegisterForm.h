#pragma once
#include "user.h"

namespace RestautrentProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	/// <summary>
	/// Summary for RegisterForm
	/// </summary>
	public ref class RegisterForm : public System::Windows::Forms::Form
	{
	public:
		RegisterForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->CenterToScreen();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~RegisterForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ lbName;
	private: System::Windows::Forms::TextBox^ txtBname;
	private: System::Windows::Forms::TextBox^ txtBemail;
	private: System::Windows::Forms::Label^ lbEmail;

	private: System::Windows::Forms::TextBox^ txtBphone;
	private: System::Windows::Forms::Label^ lbPhone;

	private: System::Windows::Forms::TextBox^ txtBaddress;
	private: System::Windows::Forms::Label^ lbAddress;

	private: System::Windows::Forms::TextBox^ txtBpass;
	private: System::Windows::Forms::Label^ lbPass;

	private: System::Windows::Forms::TextBox^ txtBconfimp;
	private: System::Windows::Forms::Label^ lbConfirmPass;
	private: System::Windows::Forms::Button^ btnOK;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::LinkLabel^ llLogin;



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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lbName = (gcnew System::Windows::Forms::Label());
			this->txtBname = (gcnew System::Windows::Forms::TextBox());
			this->txtBemail = (gcnew System::Windows::Forms::TextBox());
			this->lbEmail = (gcnew System::Windows::Forms::Label());
			this->txtBphone = (gcnew System::Windows::Forms::TextBox());
			this->lbPhone = (gcnew System::Windows::Forms::Label());
			this->txtBaddress = (gcnew System::Windows::Forms::TextBox());
			this->lbAddress = (gcnew System::Windows::Forms::Label());
			this->txtBpass = (gcnew System::Windows::Forms::TextBox());
			this->lbPass = (gcnew System::Windows::Forms::Label());
			this->txtBconfimp = (gcnew System::Windows::Forms::TextBox());
			this->lbConfirmPass = (gcnew System::Windows::Forms::Label());
			this->btnOK = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->llLogin = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(556, 48);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Register";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// lbName
			// 
			this->lbName->AutoSize = true;
			this->lbName->Location = System::Drawing::Point(12, 48);
			this->lbName->Name = L"lbName";
			this->lbName->Size = System::Drawing::Size(65, 25);
			this->lbName->TabIndex = 1;
			this->lbName->Text = L"name";
			// 
			// txtBname
			// 
			this->txtBname->Location = System::Drawing::Point(244, 45);
			this->txtBname->Name = L"txtBname";
			this->txtBname->Size = System::Drawing::Size(312, 31);
			this->txtBname->TabIndex = 2;
			// 
			// txtBemail
			// 
			this->txtBemail->Location = System::Drawing::Point(244, 93);
			this->txtBemail->Name = L"txtBemail";
			this->txtBemail->Size = System::Drawing::Size(312, 31);
			this->txtBemail->TabIndex = 4;
			// 
			// lbEmail
			// 
			this->lbEmail->AutoSize = true;
			this->lbEmail->Location = System::Drawing::Point(12, 99);
			this->lbEmail->Name = L"lbEmail";
			this->lbEmail->Size = System::Drawing::Size(65, 25);
			this->lbEmail->TabIndex = 3;
			this->lbEmail->Text = L"Email";
			// 
			// txtBphone
			// 
			this->txtBphone->Location = System::Drawing::Point(244, 146);
			this->txtBphone->Name = L"txtBphone";
			this->txtBphone->Size = System::Drawing::Size(312, 31);
			this->txtBphone->TabIndex = 6;
			// 
			// lbPhone
			// 
			this->lbPhone->AutoSize = true;
			this->lbPhone->Location = System::Drawing::Point(12, 149);
			this->lbPhone->Name = L"lbPhone";
			this->lbPhone->Size = System::Drawing::Size(72, 25);
			this->lbPhone->TabIndex = 5;
			this->lbPhone->Text = L"phone";
			// 
			// txtBaddress
			// 
			this->txtBaddress->Location = System::Drawing::Point(244, 198);
			this->txtBaddress->Name = L"txtBaddress";
			this->txtBaddress->Size = System::Drawing::Size(312, 31);
			this->txtBaddress->TabIndex = 8;
			// 
			// lbAddress
			// 
			this->lbAddress->AutoSize = true;
			this->lbAddress->Location = System::Drawing::Point(12, 201);
			this->lbAddress->Name = L"lbAddress";
			this->lbAddress->Size = System::Drawing::Size(91, 25);
			this->lbAddress->TabIndex = 7;
			this->lbAddress->Text = L"Address";
			// 
			// txtBpass
			// 
			this->txtBpass->Location = System::Drawing::Point(244, 250);
			this->txtBpass->Name = L"txtBpass";
			this->txtBpass->PasswordChar = '*';
			this->txtBpass->Size = System::Drawing::Size(312, 31);
			this->txtBpass->TabIndex = 10;
			// 
			// lbPass
			// 
			this->lbPass->AutoSize = true;
			this->lbPass->Location = System::Drawing::Point(12, 253);
			this->lbPass->Name = L"lbPass";
			this->lbPass->Size = System::Drawing::Size(106, 25);
			this->lbPass->TabIndex = 9;
			this->lbPass->Text = L"Password";
			// 
			// txtBconfimp
			// 
			this->txtBconfimp->Location = System::Drawing::Point(244, 305);
			this->txtBconfimp->Name = L"txtBconfimp";
			this->txtBconfimp->PasswordChar = '*';
			this->txtBconfimp->Size = System::Drawing::Size(312, 31);
			this->txtBconfimp->TabIndex = 12;
			this->txtBconfimp->TextChanged += gcnew System::EventHandler(this, &RegisterForm::textBox6_TextChanged);
			// 
			// lbConfirmPass
			// 
			this->lbConfirmPass->AutoSize = true;
			this->lbConfirmPass->Location = System::Drawing::Point(12, 305);
			this->lbConfirmPass->Name = L"lbConfirmPass";
			this->lbConfirmPass->Size = System::Drawing::Size(186, 25);
			this->lbConfirmPass->TabIndex = 11;
			this->lbConfirmPass->Text = L"Confirm Password";
			this->lbConfirmPass->Click += gcnew System::EventHandler(this, &RegisterForm::label7_Click);
			// 
			// btnOK
			// 
			this->btnOK->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnOK->Location = System::Drawing::Point(244, 360);
			this->btnOK->Name = L"btnOK";
			this->btnOK->Size = System::Drawing::Size(98, 27);
			this->btnOK->TabIndex = 13;
			this->btnOK->Text = L"OK";
			this->btnOK->UseVisualStyleBackColor = true;
			this->btnOK->Click += gcnew System::EventHandler(this, &RegisterForm::btnOK_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(463, 360);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(93, 27);
			this->button1->TabIndex = 14;
			this->button1->Text = L"cancel";
			this->button1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &RegisterForm::button1_Click);
			// 
			// llLogin
			// 
			this->llLogin->AutoSize = true;
			this->llLogin->Location = System::Drawing::Point(481, 405);
			this->llLogin->Name = L"llLogin";
			this->llLogin->Size = System::Drawing::Size(65, 25);
			this->llLogin->TabIndex = 15;
			this->llLogin->TabStop = true;
			this->llLogin->Text = L"Login";
			this->llLogin->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &RegisterForm::llLogin_LinkClicked);
			// 
			// RegisterForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(568, 439);
			this->Controls->Add(this->llLogin);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btnOK);
			this->Controls->Add(this->txtBconfimp);
			this->Controls->Add(this->lbConfirmPass);
			this->Controls->Add(this->txtBpass);
			this->Controls->Add(this->lbPass);
			this->Controls->Add(this->txtBaddress);
			this->Controls->Add(this->lbAddress);
			this->Controls->Add(this->txtBphone);
			this->Controls->Add(this->lbPhone);
			this->Controls->Add(this->txtBemail);
			this->Controls->Add(this->lbEmail);
			this->Controls->Add(this->txtBname);
			this->Controls->Add(this->lbName);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"RegisterForm";
			this->Text = L"Register Form";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
	}
		   public:User^ user = nullptr;
private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	//cancel button closes the window
	this->Close();
}
	   public: bool switchToLogin = false;

private: System::Void llLogin_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	// link lable will switch from registration to log in 
	this->switchToLogin = true;
	this->Close();
}
private: System::Void btnOK_Click(System::Object^ sender, System::EventArgs^ e) {
	//read the content of the different text boxes
	String^ fname = txtBname->Text;
	String^ email = txtBemail->Text;
	String^ phone = txtBphone->Text;
	String^ address = txtBaddress->Text;
	String^ password = txtBpass->Text;
	String^ confirmPassword = txtBconfimp->Text;

	//check if any field is empty
	if (fname->Length == 0 || email->Length == 0 || phone->Length == 0 || address->Length == 0 || password->Length == 0) {
		MessageBox::Show("Please enter all fields", "one or more fields are empty", MessageBoxButtons::OK);
		return;
	}
	//checks of phone number has 10 digits
	if (phone->Length != 10) {
		MessageBox::Show("please enter 10 digits ", "phone error", MessageBoxButtons::OK);
		return;
	}
	//check if passwords and confirm passwords match
	if (String::Compare(password,confirmPassword) !=0)
	{
		MessageBox::Show("passwords do no match \n Enter matching passwords", "Password Error", MessageBoxButtons::OK);
		return;
	}

	try
	{
		String^ connString = "server=127.0.0.1;user id=root;database=restaurant";
		SqlConnection sqlCon(connString);
		sqlCon.Open();
		//adding user to database
		String^ sqlQuery = "INSERT INTO users" + "(fname,email,phone,address,password)VALUES" + "(@name,@email,@phone,@address,@password)";

		SqlCommand command(sqlQuery, % sqlCon);
		command.Parameters->AddWithValue("@name", fname);
		command.Parameters->AddWithValue("@email", email);
		command.Parameters->AddWithValue("@phone", phone);
		command.Parameters->AddWithValue("@addess", address);
		command.Parameters->AddWithValue("@password", password);
		
		command.ExecuteNonQuery();
		user = gcnew User;
		user->fname = fname;
		user->email = email;
		user->phone = phone;
		user->address = address;
		user->password = password;

		this->Close();

	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Failed to register new user", "Registration failed", MessageBoxButtons::OK);
	}

}
};
}
