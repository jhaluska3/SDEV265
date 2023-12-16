#pragma once
#include "Form2.h"
#include "Form3.h"
#include "Form4.h"
#include "Employee.h"
namespace Final {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	public ref class Form : public System::Windows::Forms::Form
	{
	public:
		Form(void)
		{
			InitializeComponent();
		}

	protected:
		~Form()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ Company;
	private: System::Windows::Forms::Label^ SignIn;
	private: System::Windows::Forms::FlowLayoutPanel^ UsernameField;
	private: System::Windows::Forms::FlowLayoutPanel^ PasswordField;
	private: System::Windows::Forms::Label^ UsernameText;
	private: System::Windows::Forms::Label^ PasswordText;
	private: System::Windows::Forms::TextBox^ UserInput;
	private: System::Windows::Forms::Button^ SignInButton;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::IO::FileSystemWatcher^ fileSystemWatcher1;
	private: System::Windows::Forms::CheckBox^ RobotCheck;
	private: System::Windows::Forms::Button^ RulesButton;
	private: System::Windows::Forms::TextBox^ PassInput;

	protected:


	private:
		System::ComponentModel::Container^ components;

#pragma region

		void InitializeComponent(void)
		{
			this->Company = (gcnew System::Windows::Forms::Label());
			this->SignIn = (gcnew System::Windows::Forms::Label());
			this->UsernameField = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->UsernameText = (gcnew System::Windows::Forms::Label());
			this->UserInput = (gcnew System::Windows::Forms::TextBox());
			this->PasswordField = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->PasswordText = (gcnew System::Windows::Forms::Label());
			this->PassInput = (gcnew System::Windows::Forms::TextBox());
			this->SignInButton = (gcnew System::Windows::Forms::Button());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->fileSystemWatcher1 = (gcnew System::IO::FileSystemWatcher());
			this->RobotCheck = (gcnew System::Windows::Forms::CheckBox());
			this->RulesButton = (gcnew System::Windows::Forms::Button());
			this->UsernameField->SuspendLayout();
			this->PasswordField->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fileSystemWatcher1))->BeginInit();
			this->SuspendLayout();

			// Company

			this->Company->AutoSize = true;
			this->Company->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Company->Location = System::Drawing::Point(329, 111);
			this->Company->Name = L"Company";
			this->Company->Size = System::Drawing::Size(456, 55);
			this->Company->TabIndex = 1;
			this->Company->Text = L"Team 5 Time Clock";
			//	this->Company->Click += gcnew System::EventHandler(this, &Form::Company_Click);

			// SignIn

			this->SignIn->AutoSize = true;
			this->SignIn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SignIn->Location = System::Drawing::Point(456, 200);
			this->SignIn->Name = L"SignIn";
			this->SignIn->Size = System::Drawing::Size(164, 25);
			this->SignIn->TabIndex = 2;
			this->SignIn->Text = L"Please Sign In";
			//this->SignIn->Click += gcnew System::EventHandler(this, &Form::SignIn_Click);

			// UsernameField

			this->UsernameField->BackColor = System::Drawing::SystemColors::Highlight;
			this->UsernameField->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->UsernameField->Controls->Add(this->UsernameText);
			this->UsernameField->Controls->Add(this->UserInput);
			this->UsernameField->Location = System::Drawing::Point(311, 261);
			this->UsernameField->Name = L"UsernameField";
			this->UsernameField->Size = System::Drawing::Size(474, 28);
			this->UsernameField->TabIndex = 3;
			//	this->UsernameField->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form::UsernameField_Paint);

			// UsernameText

			this->UsernameText->AutoSize = true;
			this->UsernameText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->UsernameText->Location = System::Drawing::Point(3, 0);
			this->UsernameText->Name = L"UsernameText";
			this->UsernameText->Size = System::Drawing::Size(132, 25);
			this->UsernameText->TabIndex = 5;
			this->UsernameText->Text = L"Username: ";
			//this->UsernameText->Click += gcnew System::EventHandler(this, &Form::UsernameText_Click);

			// UserInput

			this->UserInput->BackColor = System::Drawing::SystemColors::Highlight;
			this->UserInput->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->UserInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->UserInput->Location = System::Drawing::Point(141, 3);
			this->UserInput->Name = L"UserInput";
			this->UserInput->Size = System::Drawing::Size(327, 24);
			this->UserInput->TabIndex = 6;
			this->UserInput->Text = L"username";
			this->UserInput->TextChanged += gcnew System::EventHandler(this, &Form::UserInput_TextChanged);
			this->UserInput->Click += gcnew System::EventHandler(this, &Form::UserInput_Click);//to clear field when clicked

			// PasswordField

			this->PasswordField->BackColor = System::Drawing::SystemColors::Highlight;
			this->PasswordField->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->PasswordField->Controls->Add(this->PasswordText);
			this->PasswordField->Controls->Add(this->PassInput);
			this->PasswordField->Location = System::Drawing::Point(311, 347);
			this->PasswordField->Name = L"PasswordField";
			this->PasswordField->Size = System::Drawing::Size(474, 28);
			this->PasswordField->TabIndex = 4;
			//	this->PasswordField->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form::PasswordField_Paint);

			// PasswordText

			this->PasswordText->AutoSize = true;
			this->PasswordText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PasswordText->Location = System::Drawing::Point(3, 0);
			this->PasswordText->Name = L"PasswordText";
			this->PasswordText->Size = System::Drawing::Size(121, 25);
			this->PasswordText->TabIndex = 6;
			this->PasswordText->Text = L"Password:";
			//	this->PasswordText->Click += gcnew System::EventHandler(this, &Form::PasswordText_Click);

			// PassInput

			this->PassInput->BackColor = System::Drawing::SystemColors::Highlight;
			this->PassInput->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->PassInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PassInput->Location = System::Drawing::Point(130, 3);
			this->PassInput->Name = L"PassInput";
			this->PassInput->Size = System::Drawing::Size(327, 24);
			this->PassInput->TabIndex = 7;
			this->PassInput->Text = L"password";
			this->PassInput->UseSystemPasswordChar = true;
			this->PassInput->TextChanged += gcnew System::EventHandler(this, &Form::PassInput_TextChanged_1);
			this->PassInput->Click += gcnew System::EventHandler(this, &Form::PassInput_Click);//to clear field when clicked

			// SignInButton

			this->SignInButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->SignInButton->Enabled = false;
			this->SignInButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SignInButton->Location = System::Drawing::Point(311, 417);
			this->SignInButton->Name = L"SignInButton";
			this->SignInButton->Size = System::Drawing::Size(214, 60);
			this->SignInButton->TabIndex = 5;
			this->SignInButton->Text = L"Sign In";
			this->SignInButton->UseVisualStyleBackColor = false;
			this->SignInButton->Click += gcnew System::EventHandler(this, &Form::SignInButton_Click_1);

			// fileSystemWatcher1

			this->fileSystemWatcher1->EnableRaisingEvents = true;
			this->fileSystemWatcher1->SynchronizingObject = this;

			// RobotCheck

			this->RobotCheck->AutoSize = true;
			this->RobotCheck->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RobotCheck->Location = System::Drawing::Point(453, 507);
			this->RobotCheck->Name = L"RobotCheck";
			this->RobotCheck->Size = System::Drawing::Size(188, 24);
			this->RobotCheck->TabIndex = 6;
			this->RobotCheck->Text = L"I AM NOT A ROBOT";
			this->RobotCheck->UseVisualStyleBackColor = true;
			this->RobotCheck->CheckedChanged += gcnew System::EventHandler(this, &Form::RobotCheck_CheckedChanged);

			// RulesButton

			this->RulesButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->RulesButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RulesButton->Location = System::Drawing::Point(571, 417);
			this->RulesButton->Name = L"RulesButton";
			this->RulesButton->Size = System::Drawing::Size(214, 60);
			this->RulesButton->TabIndex = 7;
			this->RulesButton->Text = L"Rules";
			this->RulesButton->UseVisualStyleBackColor = false;
			this->RulesButton->Click += gcnew System::EventHandler(this, &Form::RulesButton_Click);
			// 
			// Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(1188, 552);
			this->Controls->Add(this->RulesButton);
			this->Controls->Add(this->RobotCheck);
			this->Controls->Add(this->SignInButton);
			this->Controls->Add(this->PasswordField);
			this->Controls->Add(this->UsernameField);
			this->Controls->Add(this->SignIn);
			this->Controls->Add(this->Company);
			this->Name = L"Form";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Time Clock";
			this->Load += gcnew System::EventHandler(this, &Form::MyForm_Load);
			this->UsernameField->ResumeLayout(false);
			this->UsernameField->PerformLayout();
			this->PasswordField->ResumeLayout(false);
			this->PasswordField->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fileSystemWatcher1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public: 
		Employee^ employee = nullptr;
		

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
	{

	}
	private: System::Void UserInput_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		/*if (UserInput->Text == "Username")
		{
			UserInput->Text = "";
		}*/
	}
	private: System::Void PassInput_TextChanged_1(System::Object^ sender, System::EventArgs^ e)
	{
		/*if (PassInput->Text == "Password")
		{
			PassInput->Text = "";
		}*/

	}	private: System::Void UserInput_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (UserInput->Text == "username")
		{
			UserInput->Text = "";
		}
	}
	private: System::Void PassInput_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (PassInput->Text == "password")
		{
			PassInput->Text = "";
		}
	}
	private: System::Void RobotCheck_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{

		if (RobotCheck->Checked)
		{
			SignInButton->Enabled = true;
		}
		else
		{
			SignInButton->Enabled = false;
		}
	}

	private: System::Void SignInButton_Click_1(System::Object^ sender, System::EventArgs^ e) {


		if (RobotCheck->Enabled)
		{
			String^ user = this->UserInput->Text;
			String^ pass = this->PassInput->Text;
			bool isAdmin = 0;
			if (user->Length == 0 || pass->Length == 0)
			{
				MessageBox::Show("Please enter a username and password");
				return;
			}
			try
			{
				String^ connection = "Data Source=(localdb)\\localsql;Initial Catalog=customerdb; Integrated Security=True";//////////////////////
				SqlConnection sqlConn(connection);
				sqlConn.Open();
				String^ sqlQuery = "SELECT * FROM employees WHERE username=@user AND password=@pass AND isAdmin=1;";
				SqlCommand command(sqlQuery, % sqlConn);
				command.Parameters->AddWithValue("@user", user);
				command.Parameters->AddWithValue("@pass", pass);
				SqlDataReader^ reader = command.ExecuteReader();
				if (reader->Read())
				{
					employee = gcnew Employee;
					employee->id = reader->GetInt32(0);
					employee->username = reader->GetString(1);
					employee->password = reader->GetString(2);
					employee->isAdmin = true;
					this->Close();
				}
				else
				{

				}
			}

			catch (Exception^ e)
			{
				MessageBox::Show("Failed to connect to database");
			}

			try
			{
				if (!isAdmin) {
					String^ connection = "Data Source=(localdb)\\localsql;Initial Catalog=customerdb; Integrated Security=True";//////////////////////
					SqlConnection sqlConn(connection);
					sqlConn.Open();
					String^ sqlQuery2 = "SELECT * FROM employees WHERE username=@user AND password=@pass AND isAdmin=0;";
					SqlCommand command(sqlQuery2, % sqlConn);
					command.Parameters->AddWithValue("@user", user);
					command.Parameters->AddWithValue("@pass", pass);
					SqlDataReader^ reader = command.ExecuteReader();
					if (reader->Read())
					{
						employee = gcnew Employee;
						employee->id = reader->GetInt32(0);
						employee->username = reader->GetString(1);
						employee->password = reader->GetString(2);
						//Form2^ form2 = gcnew Form2;
						//form2->Show();
						//Final::Form2 form2(employee);
						//Application::Run(% form2);
						this->Close();

					}
					else
					{
						if(!employee->isAdmin)
						MessageBox::Show("Email or Password is incorrect");
					}	
				}
			}
			catch (Exception^ e)
			{
				
				MessageBox::Show("Failed to connect to database");
			}

		}
	}
	private: System::Void RulesButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Form4^ form4 = gcnew Form4;
		form4->Show();
	}
	private: System::Void PasswordText_Click(System::Object^ sender, System::EventArgs^ e)
	{

	}
	private: System::Void PasswordField_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e)
	{

	}
	private: System::Void UsernameField_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e)
	{

	}
	private: System::Void UsernameText_Click(System::Object^ sender, System::EventArgs^ e)
	{

	}
	private: System::Void SignIn_Click(System::Object^ sender, System::EventArgs^ e)
	{

	}
	private: System::Void Company_Click(System::Object^ sender, System::EventArgs^ e)
	{

	}
	};
}