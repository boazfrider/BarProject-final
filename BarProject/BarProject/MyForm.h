#pragma once
#include "Bar.h"
#include"payWindow.h"
#include"CreateOrderForm.h"
namespace BarProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	Bar bar(10);
	public ref class MyForm : public System::Windows::Forms::Form
	{
		
		
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Splitter^ splitter1;
	private: System::Windows::Forms::Button^ open_btn;
	private: System::Windows::Forms::Button^ create_btn;
	private: System::Windows::Forms::Button^ remove_btn;
	private: System::Windows::Forms::Button^ close_btn;
	private: System::Windows::Forms::Button^ showinfo_btn;
	private: System::Windows::Forms::Button^ closetable_btn;
	protected:
		

		



	private: System::Windows::Forms::Button^ button7;

	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ helpToolStripMenuItem;
	private: System::Windows::Forms::Button^ barBtn;

	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ tableFourBtn;

	private: System::Windows::Forms::Button^ tableOneBtn;
	private: System::Windows::Forms::Button^ tableTwoBtn;
	private: System::Windows::Forms::Button^ tableThreeBtn;
	private: System::Windows::Forms::Button^ tableFiveBtn;
	private: System::Windows::Forms::Button^ TableSixBtn;
	private: System::Windows::Forms::Button^ TableSevenBtn;
	private: System::Windows::Forms::Button^ TableEightBtn;
	private: System::Windows::Forms::Button^ tableNineBtn;
	private: System::Windows::Forms::Button^ TableTenBtn;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ToolTip^ toolTip1;

	private: System::ComponentModel::IContainer^ components;

	private:
		
		/// <summary>
		/// Required designer variable.
		/// </summary>

		
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->splitter1 = (gcnew System::Windows::Forms::Splitter());
			this->open_btn = (gcnew System::Windows::Forms::Button());
			this->create_btn = (gcnew System::Windows::Forms::Button());
			this->remove_btn = (gcnew System::Windows::Forms::Button());
			this->close_btn = (gcnew System::Windows::Forms::Button());
			this->showinfo_btn = (gcnew System::Windows::Forms::Button());
			this->closetable_btn = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->barBtn = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->tableFourBtn = (gcnew System::Windows::Forms::Button());
			this->tableOneBtn = (gcnew System::Windows::Forms::Button());
			this->tableTwoBtn = (gcnew System::Windows::Forms::Button());
			this->tableThreeBtn = (gcnew System::Windows::Forms::Button());
			this->tableFiveBtn = (gcnew System::Windows::Forms::Button());
			this->TableSixBtn = (gcnew System::Windows::Forms::Button());
			this->TableSevenBtn = (gcnew System::Windows::Forms::Button());
			this->TableEightBtn = (gcnew System::Windows::Forms::Button());
			this->tableNineBtn = (gcnew System::Windows::Forms::Button());
			this->TableTenBtn = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// splitter1
			// 
			this->splitter1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			resources->ApplyResources(this->splitter1, L"splitter1");
			this->splitter1->Name = L"splitter1";
			this->splitter1->TabStop = false;
			// 
			// open_btn
			// 
			this->open_btn->BackColor = System::Drawing::Color::Wheat;
			resources->ApplyResources(this->open_btn, L"open_btn");
			this->open_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->open_btn->Name = L"open_btn";
			this->open_btn->UseVisualStyleBackColor = false;
			this->open_btn->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// create_btn
			// 
			this->create_btn->BackColor = System::Drawing::Color::Wheat;
			resources->ApplyResources(this->create_btn, L"create_btn");
			this->create_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->create_btn->Name = L"create_btn";
			this->create_btn->UseVisualStyleBackColor = false;
			this->create_btn->Click += gcnew System::EventHandler(this, &MyForm::create_btn_Click);
			// 
			// remove_btn
			// 
			this->remove_btn->BackColor = System::Drawing::Color::Wheat;
			resources->ApplyResources(this->remove_btn, L"remove_btn");
			this->remove_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->remove_btn->Name = L"remove_btn";
			this->remove_btn->UseVisualStyleBackColor = false;
			this->remove_btn->Click += gcnew System::EventHandler(this, &MyForm::remove_btn_Click);
			// 
			// close_btn
			// 
			this->close_btn->BackColor = System::Drawing::Color::Wheat;
			resources->ApplyResources(this->close_btn, L"close_btn");
			this->close_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->close_btn->Name = L"close_btn";
			this->close_btn->UseVisualStyleBackColor = false;
			this->close_btn->Click += gcnew System::EventHandler(this, &MyForm::close_btn_Click);
			// 
			// showinfo_btn
			// 
			this->showinfo_btn->BackColor = System::Drawing::Color::Wheat;
			resources->ApplyResources(this->showinfo_btn, L"showinfo_btn");
			this->showinfo_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->showinfo_btn->Name = L"showinfo_btn";
			this->toolTip1->SetToolTip(this->showinfo_btn, resources->GetString(L"showinfo_btn.ToolTip"));
			this->showinfo_btn->UseVisualStyleBackColor = false;
			this->showinfo_btn->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// closetable_btn
			// 
			this->closetable_btn->BackColor = System::Drawing::Color::Wheat;
			resources->ApplyResources(this->closetable_btn, L"closetable_btn");
			this->closetable_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->closetable_btn->Name = L"closetable_btn";
			this->closetable_btn->UseVisualStyleBackColor = false;
			this->closetable_btn->Click += gcnew System::EventHandler(this, &MyForm::closetable_btn_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Wheat;
			resources->ApplyResources(this->button7, L"button7");
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->Name = L"button7";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripMenuItem1,
					this->helpToolStripMenuItem
			});
			resources->ApplyResources(this->menuStrip1, L"menuStrip1");
			this->menuStrip1->Name = L"menuStrip1";
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			resources->ApplyResources(this->toolStripMenuItem1, L"toolStripMenuItem1");
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			resources->ApplyResources(this->helpToolStripMenuItem, L"helpToolStripMenuItem");
			// 
			// barBtn
			// 
			this->barBtn->BackColor = System::Drawing::SystemColors::ActiveCaption;
			resources->ApplyResources(this->barBtn, L"barBtn");
			this->barBtn->Name = L"barBtn";
			this->barBtn->UseVisualStyleBackColor = false;
			this->barBtn->Click += gcnew System::EventHandler(this, &MyForm::button8_Click_1);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			resources->ApplyResources(this->button9, L"button9");
			this->button9->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button9->Name = L"button9";
			this->button9->TabStop = false;
			this->button9->UseVisualStyleBackColor = false;
			// 
			// tableFourBtn
			// 
			this->tableFourBtn->BackColor = System::Drawing::Color::LimeGreen;
			resources->ApplyResources(this->tableFourBtn, L"tableFourBtn");
			this->tableFourBtn->Name = L"tableFourBtn";
			this->tableFourBtn->UseVisualStyleBackColor = false;
			this->tableFourBtn->Click += gcnew System::EventHandler(this, &MyForm::tableFourBtn_Click);
			// 
			// tableOneBtn
			// 
			this->tableOneBtn->BackColor = System::Drawing::Color::LimeGreen;
			resources->ApplyResources(this->tableOneBtn, L"tableOneBtn");
			this->tableOneBtn->Name = L"tableOneBtn";
			this->tableOneBtn->UseVisualStyleBackColor = false;
			this->tableOneBtn->EnabledChanged += gcnew System::EventHandler(this, &MyForm::button1_Click);
			this->tableOneBtn->Click += gcnew System::EventHandler(this, &MyForm::tableOneBtn_Click);
			this->tableOneBtn->Enter += gcnew System::EventHandler(this, &MyForm::tableOneBtn_Click);
			this->tableOneBtn->Leave += gcnew System::EventHandler(this, &MyForm::tableOneBtn_Click);
			this->tableOneBtn->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::tableOneBtn_MouseClick);
			this->tableOneBtn->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::tableOneBtn_MouseClick);
			// 
			// tableTwoBtn
			// 
			this->tableTwoBtn->BackColor = System::Drawing::Color::LimeGreen;
			resources->ApplyResources(this->tableTwoBtn, L"tableTwoBtn");
			this->tableTwoBtn->Name = L"tableTwoBtn";
			this->tableTwoBtn->UseVisualStyleBackColor = false;
			this->tableTwoBtn->Click += gcnew System::EventHandler(this, &MyForm::tableTwoBtn_Click);
			// 
			// tableThreeBtn
			// 
			this->tableThreeBtn->BackColor = System::Drawing::Color::LimeGreen;
			resources->ApplyResources(this->tableThreeBtn, L"tableThreeBtn");
			this->tableThreeBtn->Name = L"tableThreeBtn";
			this->tableThreeBtn->UseVisualStyleBackColor = false;
			this->tableThreeBtn->Click += gcnew System::EventHandler(this, &MyForm::tableThreeBtn_Click);
			// 
			// tableFiveBtn
			// 
			this->tableFiveBtn->BackColor = System::Drawing::Color::LimeGreen;
			resources->ApplyResources(this->tableFiveBtn, L"tableFiveBtn");
			this->tableFiveBtn->Name = L"tableFiveBtn";
			this->tableFiveBtn->UseVisualStyleBackColor = false;
			this->tableFiveBtn->Click += gcnew System::EventHandler(this, &MyForm::tableFiveBtn_Click);
			// 
			// TableSixBtn
			// 
			this->TableSixBtn->BackColor = System::Drawing::Color::LimeGreen;
			resources->ApplyResources(this->TableSixBtn, L"TableSixBtn");
			this->TableSixBtn->Name = L"TableSixBtn";
			this->TableSixBtn->UseVisualStyleBackColor = false;
			this->TableSixBtn->Click += gcnew System::EventHandler(this, &MyForm::TableSixBtn_Click);
			// 
			// TableSevenBtn
			// 
			this->TableSevenBtn->BackColor = System::Drawing::Color::LimeGreen;
			resources->ApplyResources(this->TableSevenBtn, L"TableSevenBtn");
			this->TableSevenBtn->Name = L"TableSevenBtn";
			this->TableSevenBtn->UseVisualStyleBackColor = false;
			this->TableSevenBtn->Click += gcnew System::EventHandler(this, &MyForm::TableSevenBtn_Click);
			// 
			// TableEightBtn
			// 
			this->TableEightBtn->BackColor = System::Drawing::Color::LimeGreen;
			resources->ApplyResources(this->TableEightBtn, L"TableEightBtn");
			this->TableEightBtn->Name = L"TableEightBtn";
			this->TableEightBtn->UseVisualStyleBackColor = false;
			this->TableEightBtn->Click += gcnew System::EventHandler(this, &MyForm::TableEightBtn_Click);
			// 
			// tableNineBtn
			// 
			this->tableNineBtn->BackColor = System::Drawing::Color::LimeGreen;
			resources->ApplyResources(this->tableNineBtn, L"tableNineBtn");
			this->tableNineBtn->Name = L"tableNineBtn";
			this->tableNineBtn->UseVisualStyleBackColor = false;
			this->tableNineBtn->Click += gcnew System::EventHandler(this, &MyForm::tableNineBtn_Click);
			// 
			// TableTenBtn
			// 
			this->TableTenBtn->BackColor = System::Drawing::Color::LimeGreen;
			resources->ApplyResources(this->TableTenBtn, L"TableTenBtn");
			this->TableTenBtn->Name = L"TableTenBtn";
			this->TableTenBtn->UseVisualStyleBackColor = false;
			this->TableTenBtn->Click += gcnew System::EventHandler(this, &MyForm::TableTenBtn_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Wheat;
			resources->ApplyResources(this->button8, L"button8");
			this->button8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button8->Name = L"button8";
			this->toolTip1->SetToolTip(this->button8, resources->GetString(L"button8.ToolTip"));
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click_2);
			// 
			// textBox1
			// 
			resources->ApplyResources(this->textBox1, L"textBox1");
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Wheat;
			resources->ApplyResources(this->button1, L"button1");
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Name = L"button1";
			this->toolTip1->SetToolTip(this->button1, resources->GetString(L"button1.ToolTip"));
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// toolTip1
			// 
			this->toolTip1->Popup += gcnew System::Windows::Forms::PopupEventHandler(this, &MyForm::toolTip1_Popup);
			// 
			// MyForm
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->TableTenBtn);
			this->Controls->Add(this->tableNineBtn);
			this->Controls->Add(this->TableEightBtn);
			this->Controls->Add(this->TableSevenBtn);
			this->Controls->Add(this->TableSixBtn);
			this->Controls->Add(this->tableFiveBtn);
			this->Controls->Add(this->tableThreeBtn);
			this->Controls->Add(this->tableTwoBtn);
			this->Controls->Add(this->tableOneBtn);
			this->Controls->Add(this->tableFourBtn);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->barBtn);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->closetable_btn);
			this->Controls->Add(this->showinfo_btn);
			this->Controls->Add(this->close_btn);
			this->Controls->Add(this->remove_btn);
			this->Controls->Add(this->create_btn);
			this->Controls->Add(this->open_btn);
			this->Controls->Add(this->splitter1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Button^ last_btn_clicked;
int getNumOfBtn() {
			String^ sam = last_btn_clicked->Text;
			int num = Int32::Parse(sam);
			return num;

}

private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	int num = getNumOfBtn();
	try {
		bar.openNewTable(num);
	}
	catch (...) {
		MessageBox::Show("The table already open");
		return;
	}

	MessageBox::Show("Table " + num + " Is Open");
	//this->tableNineBtn->BackColor = System::Drawing::Color::LimeGreen
	last_btn_clicked->BackColor = System::Drawing::Color::Red;
	disableAll();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "";
	int num = getNumOfBtn();
	std::string s =(bar.showInfoOfTable(num));
	textBox1->Text = gcnew String(s.c_str());
	disableAll();

}
private: System::Void splitter2_SplitterMoved(System::Object^ sender, System::Windows::Forms::SplitterEventArgs^ e) {
}
private: System::Void backgroundWorker1_DoWork(System::Object^ sender, System::ComponentModel::DoWorkEventArgs^ e) {
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
}
	   
private: System::Void button8_Click_1(System::Object^ sender, System::EventArgs^ e) {
	
}
	   
private: System::Void tableOneBtn_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
}
	   void enableAll() {
		   open_btn->Enabled = true;
		   create_btn->Enabled = true;
		   remove_btn->Enabled = true;
		   close_btn->Enabled = true;
		   showinfo_btn->Enabled = true;
		   closetable_btn->Enabled = true;
}
	   void disableAll() {
		   open_btn->Enabled = false;
		   create_btn->Enabled = false;
		   remove_btn->Enabled = false;
		   close_btn->Enabled = false;
		   showinfo_btn->Enabled = false;
		   closetable_btn->Enabled = false;
	   }
	//   System::Object^ temp;
	   
	  
private: System::Void tableOneBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	enableAll();
	//temp = sender;
	last_btn_clicked = (Button^)sender;
	
	

}
private: System::Void tableTwoBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	 enableAll();
	 last_btn_clicked = (Button^)sender;

}
private: System::Void tableThreeBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	 enableAll();
	 last_btn_clicked = (Button^)sender;
}
private: System::Void tableFourBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	enableAll();
	last_btn_clicked = (Button^)sender;
}
private: System::Void tableFiveBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	 enableAll();
	 last_btn_clicked = (Button^)sender;
}
private: System::Void TableSixBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	 enableAll();
	 last_btn_clicked = (Button^)sender;
}
private: System::Void TableSevenBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	 enableAll();
	 last_btn_clicked = (Button^)sender;
}

private: System::Void TableEightBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	 enableAll();
	 last_btn_clicked = (Button^)sender;
}
private: System::Void tableNineBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	 enableAll();
	 last_btn_clicked = (Button^)sender;
}
private: System::Void TableTenBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	 enableAll();
	 last_btn_clicked = (Button^)sender;
}
	  
private: System::Void create_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	int num = getNumOfBtn();
	int arr_of_amount[8] = { 0 };
	for (int i = 0; i < 8; i++)
	{
		std::cout << arr_of_amount[i];
	}
	BarProject::CreateOrderForm form(num, &bar,arr_of_amount,false);
	form.ShowDialog();
	
	disableAll();
}
private: System::Void close_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	int num_of_table = getNumOfBtn();
	BarProject::MyForm1 form1(num_of_table,&bar);
	//Bar bar(10);
	form1.ShowDialog();
	disableAll();

}
private: System::Void closetable_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	int num_of_table = getNumOfBtn();
	try {
		bar.closeTable(num_of_table);
	}
	catch (...) {
		MessageBox::Show("The table need to pay before closing");
		return;
	}
	MessageBox::Show("The table successful close");
	last_btn_clicked->BackColor = System::Drawing::Color::LimeGreen;
	disableAll();

}
private: System::Void button8_Click_2(System::Object^ sender, System::EventArgs^ e) {
	std::string s=bar.daySummery();
	textBox1->Text = "";
	textBox1->Text = gcnew String(s.c_str());
	disableAll();

	
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("You can find the history in file :'history.txt' ");

}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	bar.closeDay();
	MessageBox::Show("The day is close!");
	disableAll();
	tableOneBtn->Enabled = false;
	tableTwoBtn->Enabled = false;
	tableThreeBtn->Enabled = false;
	tableFourBtn->Enabled = false;
	tableFiveBtn->Enabled = false;
	TableSixBtn->Enabled = false;
	TableSevenBtn->Enabled = false;
	TableEightBtn->Enabled = false;
	tableNineBtn->Enabled = false;
	TableTenBtn->Enabled = false;
}
private: System::Void remove_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	int num = getNumOfBtn();
	int arr_of_amount[8] = { 0 };
	for (int i = 0; i < 8; i++)
	{
		std::cout << arr_of_amount[i];
	}
	BarProject::CreateOrderForm form(num, &bar, arr_of_amount, true);
	form.ShowDialog();

	disableAll();
}
private: System::Void toolTip1_Popup(System::Object^ sender, System::Windows::Forms::PopupEventArgs^ e) {
	
}
};
}
