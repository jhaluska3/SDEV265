//Form7.h to add employees

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

	public ref class Form7 : public System::Windows::Forms::Form
	{
	public:
		//constructor
		Form7(void)
		{
			InitializeComponent();
		}

	protected:
		//destructor
		~Form7()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ userPanel;//cosmetic panel behind username
	private: System::Windows::Forms::TextBox^ userInput;//textbox to take username
	private: System::Windows::Forms::Label^ userLabel;//label next to username
	private: System::Windows::Forms::Panel^ passPanel;//cosmetic panel behind password
	private: System::Windows::Forms::TextBox^ passInput;//textbox to take password
	private: System::Windows::Forms::Label^ passLabel;//label next to password
	private: System::Windows::Forms::Button^ addButton;//button to add employee
	private:

		System::ComponentModel::Container^ components;

		//magic
#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->userPanel = (gcnew System::Windows::Forms::Panel());
			this->userInput = (gcnew System::Windows::Forms::TextBox());
			this->userLabel = (gcnew System::Windows::Forms::Label());
			this->passPanel = (gcnew System::Windows::Forms::Panel());
			this->passInput = (gcnew System::Windows::Forms::TextBox());
			this->passLabel = (gcnew System::Windows::Forms::Label());
			this->addButton = (gcnew System::Windows::Forms::Button());
			this->userPanel->SuspendLayout();
			this->passPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// userPanel
			// 
			this->userPanel->BackColor = System::Drawing::SystemColors::ControlDark;
			this->userPanel->Controls->Add(this->userInput);
			this->userPanel->Controls->Add(this->userLabel);
			this->userPanel->Location = System::Drawing::Point(12, 34);
			this->userPanel->Name = L"userPanel";
			this->userPanel->Size = System::Drawing::Size(613, 93);
			this->userPanel->TabIndex = 2;
			// 
			// userInput
			// 
			this->userInput->BackColor = System::Drawing::SystemColors::ControlDark;
			this->userInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->userInput->Location = System::Drawing::Point(460, 31);
			this->userInput->Name = L"userInput";
			this->userInput->Size = System::Drawing::Size(129, 40);
			this->userInput->TabIndex = 1;
			this->userInput->Text = L"Ex. abc";
			this->userInput->TextChanged += gcnew System::EventHandler(this, &Form7::userInput_TextChanged);
			// 
			// userLabel
			// 
			this->userLabel->AutoSize = true;
			this->userLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->userLabel->Location = System::Drawing::Point(17, 31);
			this->userLabel->Name = L"userLabel";
			this->userLabel->Size = System::Drawing::Size(378, 31);
			this->userLabel->TabIndex = 0;
			this->userLabel->Text = L"Enter Employee Username: ";
			// 
			// passPanel
			// 
			this->passPanel->BackColor = System::Drawing::SystemColors::ControlDark;
			this->passPanel->Controls->Add(this->passInput);
			this->passPanel->Controls->Add(this->passLabel);
			this->passPanel->Location = System::Drawing::Point(12, 156);
			this->passPanel->Name = L"passPanel";
			this->passPanel->Size = System::Drawing::Size(613, 93);
			this->passPanel->TabIndex = 3;
			// 
			// passInput
			// 
			this->passInput->BackColor = System::Drawing::SystemColors::ControlDark;
			this->passInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passInput->Location = System::Drawing::Point(460, 31);
			this->passInput->Name = L"passInput";
			this->passInput->Size = System::Drawing::Size(129, 40);
			this->passInput->TabIndex = 1;
			this->passInput->Text = L"Ex. 123";
			this->passInput->TextChanged += gcnew System::EventHandler(this, &Form7::passInput_TextChanged);
			// 
			// passLabel
			// 
			this->passLabel->AutoSize = true;
			this->passLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passLabel->Location = System::Drawing::Point(40, 31);
			this->passLabel->Name = L"passLabel";
			this->passLabel->Size = System::Drawing::Size(373, 31);
			this->passLabel->TabIndex = 0;
			this->passLabel->Text = L"Enter Employee Password: ";
			// 
			// addButton
			// 
			this->addButton->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->addButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addButton->Location = System::Drawing::Point(152, 280);
			this->addButton->Name = L"addButton";
			this->addButton->Size = System::Drawing::Size(327, 87);
			this->addButton->TabIndex = 4;
			this->addButton->Text = L"Add Employee";
			this->addButton->UseVisualStyleBackColor = false;
			this->addButton->Click += gcnew System::EventHandler(this, &Form7::addButton_Click);
			// 
			// Form7
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(633, 392);
			this->Controls->Add(this->addButton);
			this->Controls->Add(this->passPanel);
			this->Controls->Add(this->userPanel);
			this->Name = L"Form7";
			this->Text = L"Form7";
			this->userPanel->ResumeLayout(false);
			this->userPanel->PerformLayout();
			this->passPanel->ResumeLayout(false);
			this->passPanel->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	public:
		Employee^ employee = nullptr;//create employee

	private: System::Void userInput_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		//allows text to be changed
	}
	private: System::Void passInput_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		//allows text to be changed
	}
		   //button to add user
	private: System::Void addButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		String^ userInput = this->userInput->Text;//username input
		String^ passInput = this->passInput->Text;//password input

		if (userInput->Length == 0 || passInput->Length == 0)//check that values are entered
		{
			MessageBox::Show("Please enter valid credentials");//if not values entered, output message
			return;
		}
		try//try to add the values
		{
			String^ connection = "Data Source=(localdb)\\localsql;Initial Catalog=customerdb; Integrated Security=True";//////////////////////
			SqlConnection sqlConn(connection);
			sqlConn.Open();
			String^ sqlQuery = "INSERT INTO employee (username, password) VALUES (@user, @pass);";
			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@user", userInput);
			command.Parameters->AddWithValue("@pass", passInput);
			SqlDataReader^ reader = command.ExecuteReader();
			if (reader->Read())
			{

			}
			else
			{
				MessageBox::Show("User Not Created");
			}
		}

		catch (Exception^ e)
		{
			MessageBox::Show("Failed to connect to database");
		}
		MessageBox::Show("User Created");
	}
	};
}
