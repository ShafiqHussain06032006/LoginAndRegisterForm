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
	/// Summary for LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tbEmail;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tbPassword;
	private: System::Windows::Forms::Button^ btnOK;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::LinkLabel^ llRegister;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbEmail = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->btnOK = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->llRegister = (gcnew System::Windows::Forms::LinkLabel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 27.9F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label1->Location = System::Drawing::Point(72, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(923, 140);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Login";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.9F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->Location = System::Drawing::Point(386, 159);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(151, 56);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Email";
			// 
			// tbEmail
			// 
			this->tbEmail->Location = System::Drawing::Point(640, 148);
			this->tbEmail->Name = L"tbEmail";
			this->tbEmail->Size = System::Drawing::Size(519, 67);
			this->tbEmail->TabIndex = 2;
			this->tbEmail->TextChanged += gcnew System::EventHandler(this, &LoginForm::tbEmail_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.9F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label3->Location = System::Drawing::Point(386, 254);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(229, 56);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Password";
			this->label3->Click += gcnew System::EventHandler(this, &LoginForm::label3_Click);
			// 
			// tbPassword
			// 
			this->tbPassword->Location = System::Drawing::Point(640, 243);
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->PasswordChar = '*';
			this->tbPassword->Size = System::Drawing::Size(519, 67);
			this->tbPassword->TabIndex = 4;
			// 
			// btnOK
			// 
			this->btnOK->BackColor = System::Drawing::Color::Green;
			this->btnOK->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnOK->ForeColor = System::Drawing::Color::Transparent;
			this->btnOK->Location = System::Drawing::Point(687, 341);
			this->btnOK->Name = L"btnOK";
			this->btnOK->Size = System::Drawing::Size(223, 108);
			this->btnOK->TabIndex = 5;
			this->btnOK->Text = L"OK";
			this->btnOK->UseVisualStyleBackColor = false;
			this->btnOK->Click += gcnew System::EventHandler(this, &LoginForm::btnOK_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->BackColor = System::Drawing::Color::Red;
			this->btnCancel->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCancel->ForeColor = System::Drawing::Color::Transparent;
			this->btnCancel->Location = System::Drawing::Point(937, 341);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(222, 108);
			this->btnCancel->TabIndex = 6;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = false;
			this->btnCancel->Click += gcnew System::EventHandler(this, &LoginForm::button2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(32, 28);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(315, 466);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// llRegister
			// 
			this->llRegister->AutoSize = true;
			this->llRegister->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->llRegister->LinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->llRegister->Location = System::Drawing::Point(970, 496);
			this->llRegister->Name = L"llRegister";
			this->llRegister->Size = System::Drawing::Size(231, 64);
			this->llRegister->TabIndex = 8;
			this->llRegister->TabStop = true;
			this->llRegister->Text = L"Register";
			this->llRegister->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &LoginForm::llRegister_LinkClicked);
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(31, 61);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Purple;
			this->ClientSize = System::Drawing::Size(1203, 603);
			this->Controls->Add(this->llRegister);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnOK);
			this->Controls->Add(this->tbPassword);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->tbEmail);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.9F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"LoginForm";
			this->Text = L"Login Form";
			this->Load += gcnew System::EventHandler(this, &LoginForm::LoginForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	   this->Close();
}
  public: User^ user=nullptr; // public global variable .

private: System::Void btnOK_Click(System::Object^ sender, System::EventArgs^ e) {
	  String^ email = this->tbEmail->Text;
	  String^ password = this->tbPassword->Text;

	  if (email->Length == 0 || password->Length == 0) {
		  MessageBox::Show("Please enter email and password", "Email or Password Empty", MessageBoxButtons ::OK);
		  return;
	  }

	  try {
		  String^ connString = " Data Source=localhost\\sqlexpress;Initial Catalog=myrestaurant;Integrated Security=True;Encrypt=True;TrustServerCertificate=True";
		  SqlConnection sqlConn(connString); // Conection of the Server .
		  sqlConn.Open();
		  String^ sqlQuery = "SELECT * FROM  users WHERE  email=@email AND password= @pwd";
		  SqlCommand command(sqlQuery, %sqlConn);
		  command.Parameters->AddWithValue("@email", email); // here i changed email and passwords.
		  command.Parameters->AddWithValue("@pwd", password);

		  //Executioin
		 SqlDataReader^ reader = command.ExecuteReader();
	


		  if (reader->Read()) {
			  user = gcnew User;
			  user->id = reader->GetInt32(0);
			  user->name = reader->GetString(1);
			  user->email = reader->GetString(2);
			  user->phone = reader->GetString(3);
			  user->address = reader->GetString(4);
			  user->password = reader->GetString(5);



			  this->Close();
		  }
		  else {
			  MessageBox::Show("Email or password is incorrect ", "Email or Password Error ", MessageBoxButtons::OK);
		  }


	  }
	  catch (Exception^ e) {
		  MessageBox::Show("Failed to connect to database ", "Database Connection Error ", MessageBoxButtons::OK);
	  }

}
private: System::Void tbEmail_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void LoginForm_Load(System::Object^ sender, System::EventArgs^ e) {
}

 public:bool switchToRegister = false;

private: System::Void llRegister_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	 this->switchToRegister = true;
	 this->Close();

}
};
}

