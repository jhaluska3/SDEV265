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
	/// <summary>
	/// Summary for Form7
	/// </summary>
	public ref class Form7 : public System::Windows::Forms::Form
	{
	public:
		Form7(void)
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
		~Form7()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ RemoveLabel;
	protected:
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ Input;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ userInput;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ addButton;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->RemoveLabel = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->Input = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->userInput = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->addButton = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// RemoveLabel
			// 
			this->RemoveLabel->AutoSize = true;
			this->RemoveLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RemoveLabel->Location = System::Drawing::Point(40, 31);
			this->RemoveLabel->Name = L"RemoveLabel";
			this->RemoveLabel->Size = System::Drawing::Size(367, 31);
			this->RemoveLabel->TabIndex = 0;
			this->RemoveLabel->Text = L"Enter Employee ID to Add: ";
			this->RemoveLabel->Click += gcnew System::EventHandler(this, &Form7::RemoveLabel_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ControlDark;
			this->panel1->Controls->Add(this->Input);
			this->panel1->Controls->Add(this->RemoveLabel);
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(613, 93);
			this->panel1->TabIndex = 1;
			// 
			// Input
			// 
			this->Input->BackColor = System::Drawing::SystemColors::ControlDark;
			this->Input->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Input->Location = System::Drawing::Point(460, 31);
			this->Input->Name = L"Input";
			this->Input->Size = System::Drawing::Size(129, 40);
			this->Input->TabIndex = 1;
			this->Input->Text = L"Ex. 1";
			this->Input->TextChanged += gcnew System::EventHandler(this, &Form7::Input_TextChanged);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ControlDark;
			this->panel2->Controls->Add(this->textBox1);
			this->panel2->Controls->Add(this->userInput);
			this->panel2->Location = System::Drawing::Point(12, 131);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(613, 93);
			this->panel2->TabIndex = 2;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::ControlDark;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(460, 31);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(129, 40);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"Ex. abc";
			// 
			// userInput
			// 
			this->userInput->AutoSize = true;
			this->userInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->userInput->Location = System::Drawing::Point(40, 31);
			this->userInput->Name = L"userInput";
			this->userInput->Size = System::Drawing::Size(378, 31);
			this->userInput->TabIndex = 0;
			this->userInput->Text = L"Enter Employee Username: ";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::ControlDark;
			this->panel3->Controls->Add(this->textBox2);
			this->panel3->Controls->Add(this->label2);
			this->panel3->Location = System::Drawing::Point(12, 250);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(613, 93);
			this->panel3->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::ControlDark;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(460, 31);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(129, 40);
			this->textBox2->TabIndex = 1;
			this->textBox2->Text = L"Ex. 123";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(40, 31);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(373, 31);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Enter Employee Password: ";
			// 
			// addButton
			// 
			this->addButton->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->addButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addButton->Location = System::Drawing::Point(143, 369);
			this->addButton->Name = L"addButton";
			this->addButton->Size = System::Drawing::Size(327, 87);
			this->addButton->TabIndex = 4;
			this->addButton->Text = L"Add Employee";
			this->addButton->UseVisualStyleBackColor = false;
			// 
			// Form7
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(633, 481);
			this->Controls->Add(this->addButton);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"Form7";
			this->Text = L"Form7";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	public:
		Employee^ employee = nullptr;
	private: System::Void Input_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		String^ input = this->Input->Text;

		if (input->Length == 0)
		{
			MessageBox::Show("Please enter a user to remove");
			return;
		}
		try
		{
			String^ connection = "Data Source=(localdb)\\localsql;Initial Catalog=customerdb; Integrated Security=True";//////////////////////
			SqlConnection sqlConn(connection);
			sqlConn.Open();
			String^ sqlQuery = "DELETE * FROM employees WHERE id=@input AND DELETE * FROM Schedule WHERE id=@input;";
			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@user", input);

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
				MessageBox::Show("   ");
			}
		}

		catch (Exception^ e)
		{
			MessageBox::Show("Failed to connect to database");
		}
		MessageBox::Show("User Deleted");
	}
	private: System::Void RemoveLabel_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
