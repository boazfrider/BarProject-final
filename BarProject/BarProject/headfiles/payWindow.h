#pragma once
#include "Bar.h"

/*
*this form represent the pay form. in this form the user enter the amount he want to pay
*and the functions will sub the amount that the table need to pay.
*My function is show up almost in the end of the file. all the rest code was created auto by Visual Studio form.
*/
namespace BarProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for payWindow
	/// </summary>
	public ref class payWindow : public System::Windows::Forms::Form
	{
	public:
		
		payWindow(void)
		{
			InitializeComponent();
			
		}
		payWindow(int num_of_table,Bar* temp)
		{
			InitializeComponent();
			numOfTable = num_of_table;
			bar = temp;
			Table* table = bar->GetTable(numOfTable); // get the table which we want to add.
			int bill = table->getOpenBill(); // get the open bill of the table.

			label1->Text = bill.ToString(); // represent the bill in the label.

		}
		
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~payWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Paybtn;
	private: System::Windows::Forms::TextBox^ insertbox;
	protected:


	protected:

	private:
		int numOfTable;
		Bar* bar;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
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
			this->Paybtn = (gcnew System::Windows::Forms::Button());
			this->insertbox = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// Paybtn
			// 
			this->Paybtn->Location = System::Drawing::Point(62, 127);
			this->Paybtn->Name = L"Paybtn";
			this->Paybtn->Size = System::Drawing::Size(154, 55);
			this->Paybtn->TabIndex = 0;
			this->Paybtn->Text = L"Pay";
			this->Paybtn->UseVisualStyleBackColor = true;
			this->Paybtn->Click += gcnew System::EventHandler(this, &payWindow::Paybtn_Click);
			// 
			// insertbox
			// 
			this->insertbox->Location = System::Drawing::Point(62, 48);
			this->insertbox->Name = L"insertbox";
			this->insertbox->Size = System::Drawing::Size(154, 20);
			this->insertbox->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(62, 201);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(154, 48);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Exit";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &payWindow::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(158, 100);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"label1";
			this->label1->Click += gcnew System::EventHandler(this, &payWindow::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(76, 100);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(23, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Bill:";
			// 
			// payWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->insertbox);
			this->Controls->Add(this->Paybtn);
			this->Name = L"payWindow";
			this->Text = L"Pay window";
			this->Load += gcnew System::EventHandler(this, &payWindow::payWindow_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void payWindow_Load(System::Object^ sender, System::EventArgs^ e) {
	}


	//	  
	private: System::Void Paybtn_Click(System::Object^ sender, System::EventArgs^ e) {
		Table* table = bar->GetTable(numOfTable); // get the table.
		int bill = table->getOpenBill(); // getting the open bill of the table.

		label1->Text = bill.ToString(); // show the bill
		String^ sam = insertbox->Text;
		int num = Int32::Parse(sam);
		try {
			bar->closeBill(numOfTable, num); //calling the function that clost the bill
		} 
		catch(std::exception& err){
			std::string s = err.what();
			String^ str = gcnew String(s.c_str());
			MessageBox::Show(str);
			return;
		}
		//now set the new bill in the label.
		bill = table->getOpenBill();

		label1->Text = bill.ToString();

		
		
		
	}
		  
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
};
}
