//Form6.h Remove Employee

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

	public ref class Form6 : public System::Windows::Forms::Form
	{
	public:
		//constructor
		Form6(void)
		{
			InitializeComponent();
		}

	protected:
		//destructor
		~Form6()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ RemoveLabel;//Label stating remove employee
	private: System::Windows::Forms::Panel^ panel1;//panel behind label for cosmetic purposes
	private: System::Windows::Forms::TextBox^ Input;//textbox to take input from user
	private: System::Windows::Forms::Button^ removeButton;//button to remove user

	private:
		System::ComponentModel::Container^ components;

		//magic
#pragma region 
		void InitializeComponent(void)
		{
			this->RemoveLabel = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->Input = (gcnew System::Windows::Forms::TextBox());
			this->removeButton = (gcnew System::Windows::Forms::Button());
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
			// removeButton
			// 
			this->removeButton->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->removeButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->removeButton->Location = System::Drawing::Point(142, 121);
			this->removeButton->Name = L"removeButton";
			this->removeButton->Size = System::Drawing::Size(370, 87);
			this->removeButton->TabIndex = 5;
			this->removeButton->Text = L"Remove Employee";
			this->removeButton->UseVisualStyleBackColor = false;
			this->removeButton->Click += gcnew System::EventHandler(this, &Form6::addButton_Click);
			// 
			// Form6
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(633, 220);
			this->Controls->Add(this->removeButton);
			this->Controls->Add(this->panel1);
			this->Name = L"Form6";
			this->Text = L"Form6";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	public:
		Employee^ employee = nullptr;//creates employee
	private: System::Void Input_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		//allows text to be modified by user
	}
		   //button to execute removal of employee
	private: System::Void addButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		String^ input = this->Input->Text;//takes info from user

		if (input->Length == 0)//ensures something is entered
		{
			MessageBox::Show("Please enter a user to remove");//outputs message if no value is entered
			return;
		}
		try
		{//query to remove user
			String^ connection = "Data Source=(localdb)\\localsql;Initial Catalog=customerdb; Integrated Security=True";//open dp
			SqlConnection sqlConn(connection);
			sqlConn.Open();
			String^ sqlQuery = "DELETE * FROM employees WHERE id=@input AND DELETE * FROM Schedule WHERE id=@input;";//query to remoe from employee db
			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@user", input);
			SqlDataReader^ reader = command.ExecuteReader();
			if (reader->Read())
			{
				this->Close();
			}
			else
			{
				MessageBox::Show("Enter a valid user ID");
			}
			sqlConn.Close();
			sqlConn.Open();
			String^ sqlQuery = "DELETE * FROM schedule WHERE id=@input AND DELETE * FROM Schedule WHERE id=@input;";//query to remove from schedule db
			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@user", input);
			sqlConn.Close();

		}

		catch (Exception^ e)
		{
			MessageBox::Show("Failed to connect to database");
		}
		MessageBox::Show("User Deleted");
	}
	};
}
