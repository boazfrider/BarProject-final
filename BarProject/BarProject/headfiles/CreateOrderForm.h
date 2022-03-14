#pragma once
#include"Bar.h"
#include<vector>
#include<iostream>
#include<string>
/*
* this form represent the form where we add items to order.
* to know which  table we need to add items, we recive the number of the table, and pointer to the bar.
* in the interface, the user click on btn(=table) and then select 'Create order' so we keep the number of the table.
*/
namespace BarProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CreateOrderForm
	/// </summary>
	public ref class CreateOrderForm : public System::Windows::Forms::Form
	{
	public:
		CreateOrderForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		/* Function createOrderForm - open the form that create the order after the user select table to add items.
		@param num_of_table - the number of the table in the bar.
		@temp - pointer to the bar(= the system.)
		@array_amount - empty array where the indexes represent the code for item (0-goldsatr) and the value is the amount.
		@flag - the flag is use to which mode we want the form - adding items / removing items.
		*/
		CreateOrderForm(int num_of_table, Bar* temp, int* array_amount, bool flag) {
			InitializeComponent();
			numOfTable = num_of_table;
			bar = temp;
			arr_of_amount = array_amount;
			sub_flag = flag;
			if (flag == false)
				SubBtn->Enabled = false;
			else
				addBtn->Enabled = false;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CreateOrderForm()
		{
			if (components)
			{
				delete components;

			}
		}
	private: System::Windows::Forms::Button^ addBtn;
	protected:


	private:
		int numOfTable;
		Bar* bar;
		int* arr_of_amount;
		bool sub_flag; //if true- sub , if false- add
		std::vector<Item>* indexvector;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ SubBtn;
		   /// <summary>
		/// Required designer variable.
		/// </summary>
		   System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// Required method for Designer support - do not modify
		   /// the contents of this method with the code editor.
		   /// </summary>


		   //Initializecomponent - set all the fronted.
		   void InitializeComponent(void)
		   {
			   this->addBtn = (gcnew System::Windows::Forms::Button());
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->button2 = (gcnew System::Windows::Forms::Button());
			   this->button3 = (gcnew System::Windows::Forms::Button());
			   this->button4 = (gcnew System::Windows::Forms::Button());
			   this->button5 = (gcnew System::Windows::Forms::Button());
			   this->button6 = (gcnew System::Windows::Forms::Button());
			   this->button7 = (gcnew System::Windows::Forms::Button());
			   this->button8 = (gcnew System::Windows::Forms::Button());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->label3 = (gcnew System::Windows::Forms::Label());
			   this->label4 = (gcnew System::Windows::Forms::Label());
			   this->label5 = (gcnew System::Windows::Forms::Label());
			   this->label6 = (gcnew System::Windows::Forms::Label());
			   this->label7 = (gcnew System::Windows::Forms::Label());
			   this->label8 = (gcnew System::Windows::Forms::Label());
			   this->button9 = (gcnew System::Windows::Forms::Button());
			   this->SubBtn = (gcnew System::Windows::Forms::Button());
			   this->SuspendLayout();
			   // 
			   // addBtn
			   // 
			   this->addBtn->Location = System::Drawing::Point(342, 376);
			   this->addBtn->Name = L"addBtn";
			   this->addBtn->Size = System::Drawing::Size(214, 63);
			   this->addBtn->TabIndex = 0;
			   this->addBtn->Text = L"ADD";
			   this->addBtn->UseVisualStyleBackColor = true;
			   this->addBtn->Click += gcnew System::EventHandler(this, &CreateOrderForm::addBtn_Click);
			   // 
			   // button1
			   // 
			   {
			   this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->button1->Location = System::Drawing::Point(89, 31);
			   this->button1->Name = L"button1";
			   this->button1->Size = System::Drawing::Size(120, 110);
			   this->button1->TabIndex = 2;
			   this->button1->Text = L"Half Goldstar";
			   this->button1->UseVisualStyleBackColor = true;
			   this->button1->Click += gcnew System::EventHandler(this, &CreateOrderForm::button1_Click);
			   }
			   // 
			   // button2
			   // 
			   {
			   this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->button2->Location = System::Drawing::Point(298, 31);
			   this->button2->Name = L"button2";
			   this->button2->Size = System::Drawing::Size(120, 110);
			   this->button2->TabIndex = 3;
			   this->button2->Text = L"Half Hoegaarden";
			   this->button2->UseVisualStyleBackColor = true;
			   this->button2->Click += gcnew System::EventHandler(this, &CreateOrderForm::button2_Click);
			   }
			   // 
			   // button3
			   // 
			   {
			   this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->button3->Location = System::Drawing::Point(531, 31);
			   this->button3->Name = L"button3";
			   this->button3->Size = System::Drawing::Size(120, 110);
			   this->button3->TabIndex = 4;
			   this->button3->Text = L"Half Corona";
			   this->button3->UseVisualStyleBackColor = true;
			   this->button3->Click += gcnew System::EventHandler(this, &CreateOrderForm::button3_Click);
			   }
			   // 
			   // button4
			   // 
			   {
			   this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->button4->Location = System::Drawing::Point(764, 31);
			   this->button4->Name = L"button4";
			   this->button4->Size = System::Drawing::Size(120, 110);
			   this->button4->TabIndex = 5;
			   this->button4->Text = L"Malabi";
			   this->button4->UseVisualStyleBackColor = true;
			   this->button4->Click += gcnew System::EventHandler(this, &CreateOrderForm::button4_Click);
			   }
			   // 
			   // button5
			   // 
			   {
			   this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->button5->Location = System::Drawing::Point(89, 207);
			   this->button5->Name = L"button5";
			   this->button5->Size = System::Drawing::Size(120, 110);
			   this->button5->TabIndex = 6;
			   this->button5->Text = L"Creme Brulee";
			   this->button5->UseVisualStyleBackColor = true;
			   this->button5->Click += gcnew System::EventHandler(this, &CreateOrderForm::button5_Click);
			   }
			   // 
			   // button6
			   // 
			   {
			   this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->button6->Location = System::Drawing::Point(298, 207);
			   this->button6->Name = L"button6";
			   this->button6->Size = System::Drawing::Size(120, 110);
			   this->button6->TabIndex = 7;
			   this->button6->Text = L"Knafe";
			   this->button6->UseVisualStyleBackColor = true;
			   this->button6->Click += gcnew System::EventHandler(this, &CreateOrderForm::button6_Click);
			   }
			   // 
			   // button7
			   // 
			   {
			   this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->button7->Location = System::Drawing::Point(531, 207);
			   this->button7->Name = L"button7";
			   this->button7->Size = System::Drawing::Size(120, 110);
			   this->button7->TabIndex = 8;
			   this->button7->Text = L"Nachos";
			   this->button7->UseVisualStyleBackColor = true;
			   this->button7->Click += gcnew System::EventHandler(this, &CreateOrderForm::button7_Click);
			   }
			   // 
			   // button8
			   // 
			   {
			   this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->button8->Location = System::Drawing::Point(764, 207);
			   this->button8->Name = L"button8";
			   this->button8->Size = System::Drawing::Size(120, 110);
			   this->button8->TabIndex = 9;
			   this->button8->Text = L"Adamame";
			   this->button8->UseVisualStyleBackColor = true;
			   this->button8->Click += gcnew System::EventHandler(this, &CreateOrderForm::button8_Click);
			   }
			   // 
			   // label1
			   // 
			   {
			   this->label1->AutoSize = true;
			   this->label1->Location = System::Drawing::Point(133, 144);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(13, 13);
			   this->label1->TabIndex = 10;
			   this->label1->Text = L"0";
			   }
			   // 
			   // label2
			   // 
			   {
			   this->label2->AutoSize = true;
			   this->label2->Location = System::Drawing::Point(339, 144);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(13, 13);
			   this->label2->TabIndex = 11;
			   this->label2->Text = L"0";
			   }
			   // 
			   // label3
			   // 
			   {
			   this->label3->AutoSize = true;
			   this->label3->Location = System::Drawing::Point(575, 144);
			   this->label3->Name = L"label3";
			   this->label3->Size = System::Drawing::Size(13, 13);
			   this->label3->TabIndex = 12;
			   this->label3->Text = L"0";
			   }
			   // 
			   // label4
			   // 
			   {
			   this->label4->AutoSize = true;
			   this->label4->Location = System::Drawing::Point(814, 144);
			   this->label4->Name = L"label4";
			   this->label4->Size = System::Drawing::Size(13, 13);
			   this->label4->TabIndex = 13;
			   this->label4->Text = L"0";
			   }
			   // 
			   // label5
			   // 
			   {
			   this->label5->AutoSize = true;
			   this->label5->Location = System::Drawing::Point(133, 320);
			   this->label5->Name = L"label5";
			   this->label5->Size = System::Drawing::Size(13, 13);
			   this->label5->TabIndex = 14;
			   this->label5->Text = L"0";
			   }
			   // 
			   // label6
			   // 
			   {
			   this->label6->AutoSize = true;
			   this->label6->Location = System::Drawing::Point(339, 320);
			   this->label6->Name = L"label6";
			   this->label6->Size = System::Drawing::Size(13, 13);
			   this->label6->TabIndex = 15;
			   this->label6->Text = L"0";
			   }
			   // 
			   // label7
			   // 
			   {
			   this->label7->AutoSize = true;
			   this->label7->Location = System::Drawing::Point(575, 320);
			   this->label7->Name = L"label7";
			   this->label7->Size = System::Drawing::Size(13, 13);
			   this->label7->TabIndex = 16;
			   this->label7->Text = L"0";
			   }
			   // 
			   // label8
			   // 
			   {
			   this->label8->AutoSize = true;
			   this->label8->Location = System::Drawing::Point(814, 320);
			   this->label8->Name = L"label8";
			   this->label8->Size = System::Drawing::Size(13, 13);
			   this->label8->TabIndex = 17;
			   this->label8->Text = L"0";
			   }
			   // 
			   // button9
			   // 
			   {
			   this->button9->Location = System::Drawing::Point(34, 376);
			   this->button9->Name = L"button9";
			   this->button9->Size = System::Drawing::Size(93, 63);
			   this->button9->TabIndex = 18;
			   this->button9->Text = L"Back";
			   this->button9->UseVisualStyleBackColor = true;
			   this->button9->Click += gcnew System::EventHandler(this, &CreateOrderForm::button9_Click);
			   }
			   // 
			   // SubBtn
			   // 
			   {
			   this->SubBtn->Location = System::Drawing::Point(707, 376);
			   this->SubBtn->Name = L"SubBtn";
			   this->SubBtn->Size = System::Drawing::Size(214, 63);
			   this->SubBtn->TabIndex = 19;
			   this->SubBtn->Text = L"SUB";
			   this->SubBtn->UseVisualStyleBackColor = true;
			   this->SubBtn->Click += gcnew System::EventHandler(this, &CreateOrderForm::SubBtn_Click);
			   }
			   // 
			   // CreateOrderForm
			   // 
			   {
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackColor = System::Drawing::Color::MintCream;
			   this->ClientSize = System::Drawing::Size(959, 451);
			   this->Controls->Add(this->SubBtn);
			   this->Controls->Add(this->button9);
			   this->Controls->Add(this->label8);
			   this->Controls->Add(this->label7);
			   this->Controls->Add(this->label6);
			   this->Controls->Add(this->label5);
			   this->Controls->Add(this->label4);
			   this->Controls->Add(this->label3);
			   this->Controls->Add(this->label2);
			   this->Controls->Add(this->label1);
			   this->Controls->Add(this->button8);
			   this->Controls->Add(this->button7);
			   this->Controls->Add(this->button6);
			   this->Controls->Add(this->button5);
			   this->Controls->Add(this->button4);
			   this->Controls->Add(this->button3);
			   this->Controls->Add(this->button2);
			   this->Controls->Add(this->button1);
			   this->Controls->Add(this->addBtn);
			   this->Name = L"CreateOrderForm";
			   this->Text = L"0";
			   this->Load += gcnew System::EventHandler(this, &CreateOrderForm::CreateOrderForm_Load);
			   this->ResumeLayout(false);
			   this->PerformLayout();
			   }

		   }
#pragma endregion


	//addBtn_Click - after the user set the amount of diffrenet items . for each type of item and for all the amounts
	//added to the table.
	private: System::Void addBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		//String^ sam = insertBox->Text;
		//int num = Int32::Parse(sam);
		try {
			for (int i = 0; i < 8; i++) // loop of all the type of items.
			{
				for (int j = 0; j < arr_of_amount[i]; j++) // loop of the amount of each item.
				{
					bar->addItemToTable(numOfTable, i); //add the item to the table.
				}
			}
			MessageBox::Show("The Item added to the table !"); 
			label1->Text = "0";
			label2->Text = "0";
			label3->Text = "0";
			label4->Text = "0";
			label5->Text = "0";
			label6->Text = "0";
			label7->Text = "0";
			label8->Text = "0";
		}

		catch (std::exception& err) {
			std::string s = err.what();
			String^ str = gcnew String(s.c_str());
			MessageBox::Show(str);
			return;
		}
	}

	private: System::Void CreateOrderForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	/*
	* Functions that increase the amount of the item when click on it.
	*addig the new amount to the array of the order
	*/
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ amountstr = label1->Text;
		int num = Int32::Parse(amountstr);
		num++;
		label1->Text = num.ToString();
		arr_of_amount[0] = num;
	
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ amountstr = label4->Text;
		int num = Int32::Parse(amountstr);
		num++;
		arr_of_amount[3] = num;
		label4->Text = num.ToString();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ amountstr = label2->Text;
		int num = Int32::Parse(amountstr);
		num++;
		arr_of_amount[1] = num;
		label2->Text = num.ToString();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ amountstr = label3->Text;
		int num = Int32::Parse(amountstr);
		num++;
		arr_of_amount[2] = num;
		label3->Text = num.ToString();
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ amountstr = label5->Text;
		int num = Int32::Parse(amountstr);
		num++;
		arr_of_amount[4] = num;
		label5->Text = num.ToString();
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ amountstr = label6->Text;
		int num = Int32::Parse(amountstr);
		num++;
		arr_of_amount[5] = num;
		label6->Text = num.ToString();
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ amountstr = label7->Text;
		int num = Int32::Parse(amountstr);
		num++;
		arr_of_amount[6] = num;
		label7->Text = num.ToString();
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ amountstr = label8->Text;
		int num = Int32::Parse(amountstr);
		num++;
		arr_of_amount[7] = num;
		label8->Text = num.ToString();
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	//function for removing items for tables.
	private: System::Void SubBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			for (int i = 0; i < 8; i++)
			{
				for (int j = 0; j < arr_of_amount[i]; j++)
				{
					bar->removeElementFromTable(numOfTable, i);
					//	bar->addItemToTable(numOfTable, i);
				}
			}
			MessageBox::Show("The Item remove from the table !");
			label1->Text = "0";
			label2->Text = "0";
			label3->Text = "0";
			label4->Text = "0";
			label5->Text = "0";
			label6->Text = "0";
			label7->Text = "0";
			label8->Text = "0";
		}

		catch (std::exception& err) {
			std::string s = err.what();
			String^ str = gcnew String(s.c_str());
			MessageBox::Show(str);
			return;
		}
	}
	

	};
}

