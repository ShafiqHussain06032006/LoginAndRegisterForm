#pragma once
#include "User.h"

namespace MyResturantProduct {

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
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tbName;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tbEmail;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ tbPhone;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ tbAddress;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ tbPassword;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ tbConformPassword;
	private: System::Windows::Forms::Button^ btnOk;

	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::LinkLabel^ llLogin;



	protected:

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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbName = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbEmail = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tbPhone = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tbAddress = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->tbConformPassword = (gcnew System::Windows::Forms::TextBox());
			this->btnOk = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->llLogin = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 27.9F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(73, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(983, 126);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Register";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.9F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(19, 126);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(152, 56);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Name";
			this->label2->Click += gcnew System::EventHandler(this, &RegisterForm::label2_Click);
			// 
			// tbName
			// 
			this->tbName->Location = System::Drawing::Point(552, 138);
			this->tbName->Multiline = true;
			this->tbName->Name = L"tbName";
			this->tbName->Size = System::Drawing::Size(651, 44);
			this->tbName->TabIndex = 2;
			this->tbName->TextChanged += gcnew System::EventHandler(this, &RegisterForm::textBox1_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.9F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(19, 177);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(152, 56);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Email";
			this->label3->Click += gcnew System::EventHandler(this, &RegisterForm::label2_Click);
			// 
			// tbEmail
			// 
			this->tbEmail->Location = System::Drawing::Point(552, 188);
			this->tbEmail->Multiline = true;
			this->tbEmail->Name = L"tbEmail";
			this->tbEmail->Size = System::Drawing::Size(651, 45);
			this->tbEmail->TabIndex = 2;
			this->tbEmail->TextChanged += gcnew System::EventHandler(this, &RegisterForm::textBox1_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.9F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(19, 225);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(159, 56);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Phone";
			this->label4->Click += gcnew System::EventHandler(this, &RegisterForm::label2_Click);
			// 
			// tbPhone
			// 
			this->tbPhone->Location = System::Drawing::Point(552, 239);
			this->tbPhone->Multiline = true;
			this->tbPhone->Name = L"tbPhone";
			this->tbPhone->Size = System::Drawing::Size(651, 42);
			this->tbPhone->TabIndex = 2;
			this->tbPhone->TextChanged += gcnew System::EventHandler(this, &RegisterForm::textBox1_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.9F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(19, 279);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(201, 56);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Address";
			this->label5->Click += gcnew System::EventHandler(this, &RegisterForm::label2_Click);
			// 
			// tbAddress
			// 
			this->tbAddress->Location = System::Drawing::Point(552, 287);
			this->tbAddress->Multiline = true;
			this->tbAddress->Name = L"tbAddress";
			this->tbAddress->Size = System::Drawing::Size(651, 48);
			this->tbAddress->TabIndex = 2;
			this->tbAddress->TextChanged += gcnew System::EventHandler(this, &RegisterForm::textBox1_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.9F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(19, 335);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(231, 56);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Password";
			this->label6->Click += gcnew System::EventHandler(this, &RegisterForm::label2_Click);
			// 
			// tbPassword
			// 
			this->tbPassword->Location = System::Drawing::Point(552, 342);
			this->tbPassword->Multiline = true;
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->PasswordChar = '*';
			this->tbPassword->Size = System::Drawing::Size(651, 49);
			this->tbPassword->TabIndex = 2;
			this->tbPassword->TextChanged += gcnew System::EventHandler(this, &RegisterForm::textBox1_TextChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.9F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(19, 389);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(427, 56);
			this->label7->TabIndex = 1;
			this->label7->Text = L"Confirm Password";
			this->label7->Click += gcnew System::EventHandler(this, &RegisterForm::label2_Click);
			// 
			// tbConformPassword
			// 
			this->tbConformPassword->Location = System::Drawing::Point(552, 397);
			this->tbConformPassword->Multiline = true;
			this->tbConformPassword->Name = L"tbConformPassword";
			this->tbConformPassword->PasswordChar = '*';
			this->tbConformPassword->Size = System::Drawing::Size(651, 48);
			this->tbConformPassword->TabIndex = 2;
			this->tbConformPassword->TextChanged += gcnew System::EventHandler(this, &RegisterForm::textBox1_TextChanged);
			// 
			// btnOk
			// 
			this->btnOk->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnOk->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.1F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnOk->ForeColor = System::Drawing::Color::White;
			this->btnOk->Location = System::Drawing::Point(718, 470);
			this->btnOk->Name = L"btnOk";
			this->btnOk->Size = System::Drawing::Size(230, 104);
			this->btnOk->TabIndex = 3;
			this->btnOk->Text = L"OK";
			this->btnOk->UseVisualStyleBackColor = false;
			this->btnOk->Click += gcnew System::EventHandler(this, &RegisterForm::btnOk_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->BackColor = System::Drawing::Color::Red;
			this->btnCancel->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.1F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCancel->ForeColor = System::Drawing::Color::White;
			this->btnCancel->Location = System::Drawing::Point(973, 470);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(230, 104);
			this->btnCancel->TabIndex = 3;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = false;
			this->btnCancel->Click += gcnew System::EventHandler(this, &RegisterForm::button2_Click);
			// 
			// llLogin
			// 
			this->llLogin->AutoSize = true;
			this->llLogin->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.9F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->llLogin->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->llLogin->Location = System::Drawing::Point(1045, 603);
			this->llLogin->Name = L"llLogin";
			this->llLogin->Size = System::Drawing::Size(158, 58);
			this->llLogin->TabIndex = 4;
			this->llLogin->TabStop = true;
			this->llLogin->Text = L"Login";
			this->llLogin->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &RegisterForm::llLogin_LinkClicked);
			// 
			// RegisterForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->ClientSize = System::Drawing::Size(1262, 931);
			this->Controls->Add(this->llLogin);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnOk);
			this->Controls->Add(this->tbConformPassword);
			this->Controls->Add(this->tbPassword);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->tbAddress);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->tbPhone);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->tbEmail);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->tbName);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"RegisterForm";
			this->Text = L"Email";
			this->Load += gcnew System::EventHandler(this, &RegisterForm::RegisterForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	 public: bool switchToLogin = false;
   private: System::Void llLogin_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	   this->switchToLogin = true;
	   this->Close();

}
	 public: User^ user = nullptr;

private: System::Void btnOk_Click(System::Object^ sender, System::EventArgs^ e) {
	 // Reading the context of different books.
	 String^ name = tbName->Text;
	 String^ email = tbEmail->Text;
	 String^ phone = tbPhone->Text;
	 String^ address = tbAddress->Text;
	 String^ password = tbPassword->Text;
	 String^ confirmPassword = tbConformPassword->Text;
	 if (name->Length == 0 || email->Length == 0 || phone->Length == 0 ||
		 address->Length == 0 || password->Length == 0) {
		 MessageBox::Show("Please enter all the fields",
			 "On or more empty fields", MessageBoxButtons::OK);
		 return;
	 }

	 if (String::Compare(password, confirmPassword) != 0) {
		 MessageBox::Show("Password and Confirm  Password  do not match",
			 "password Error", MessageBoxButtons::OK);
		 return;
	 }
	 try {
		 String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=myrestaurant;Integrated Security=True;Encrypt=True;TrustServerCertificate=True";
		 SqlConnection sqlConn(connString);
		 sqlConn.Open();
		 //add below variables into the users table .
		 String^ sqlQuery = " INSERT INTO users " +
			 "(name,email, phone,address,password) VALUES " +
			 "(@name, @email, @phone, @address , @password);";

		 SqlCommand command(sqlQuery, % sqlConn);
		 command.Parameters->AddWithValue("@name", name);
		 command.Parameters->AddWithValue("@email", email);
		 command.Parameters->AddWithValue("@phone", phone);
		 command.Parameters->AddWithValue("@address", address);
		 command.Parameters->AddWithValue("@password", password);

		 command.ExecuteNonQuery();
		 user = gcnew User;
		 user->name = name;
		 user->email = email;
		 user->phone = phone;
		 user->address = address;
		 user->password = password;
		 this->Close();
		 
	  }
	 catch (Exception^ ex) {
		 MessageBox::Show("Failed to register new  user ",
			 "Register Failure", MessageBoxButtons::OK);
	 }
}
private: System::Void RegisterForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
