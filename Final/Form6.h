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
	/// Summary for Form6
	/// </summary>
	public ref class Form6 : public System::Windows::Forms::Form
	{
	public:
		Form6(void)
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
		~Form6()
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
			this->RemoveLabel = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->Input = (gcnew System::Windows::Forms::TextBox());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// RemoveLabel
			// 
			this->RemoveLabel->AutoSize = true;
			this->RemoveLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RemoveLabel->Location = System::Drawing::Point(40, 31);
			this->RemoveLabel->Name = L"RemoveLabel";
			this->RemoveLabel->Size = System::Drawing::Size(423, 31);
			this->RemoveLabel->TabIndex = 0;
			this->RemoveLabel->Text = L"Enter Employee ID to Remove: ";
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
			this->Input->TextChanged += gcnew System::EventHandler(this, &Form6::Input_TextChanged);
			// 
			// Form6
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(633, 115);
			this->Controls->Add(this->panel1);
			this->Name = L"Form6";
			this->Text = L"Form6";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	public:
		Employee^ employee = nullptr;
	private: System::Void Input_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		String^ input = this->Input->Text;
		
		if (input->Length == 0 )
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
				MessageBox::Show("Enter a valid user ID");
			}
		}

		catch (Exception^ e)
		{
			MessageBox::Show("Failed to connect to database");
		}
		MessageBox::Show("User Deleted");
	}
	};
}
