#pragma once

namespace PracticeProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for viewProduct
	/// </summary>
	public ref class viewProduct : public System::Windows::Forms::Form
	{
	public:
		viewProduct(void)
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
		~viewProduct()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ productTable;
	protected:

	protected:

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::RichTextBox^ rtbProductDescTwo;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ imageBoxTwo;


	private: System::Windows::Forms::Label^ label1;

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
			this->productTable = (gcnew System::Windows::Forms::DataGridView());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->rtbProductDescTwo = (gcnew System::Windows::Forms::RichTextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->imageBoxTwo = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->productTable))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imageBoxTwo))->BeginInit();
			this->SuspendLayout();
			// 
			// productTable
			// 
			this->productTable->AllowUserToAddRows = false;
			this->productTable->AllowUserToDeleteRows = false;
			this->productTable->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->productTable->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedCells;
			this->productTable->BackgroundColor = System::Drawing::SystemColors::Control;
			this->productTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->productTable->Location = System::Drawing::Point(193, 12);
			this->productTable->MultiSelect = false;
			this->productTable->Name = L"productTable";
			this->productTable->ReadOnly = true;
			this->productTable->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->productTable->Size = System::Drawing::Size(498, 409);
			this->productTable->TabIndex = 0;
			this->productTable->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &viewProduct::productTable_CellClick);
			this->productTable->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &viewProduct::productTable_CellContentClick);
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->rtbProductDescTwo);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->imageBoxTwo);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(13, 13);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(174, 408);
			this->panel1->TabIndex = 1;
			// 
			// rtbProductDescTwo
			// 
			this->rtbProductDescTwo->Location = System::Drawing::Point(7, 199);
			this->rtbProductDescTwo->Name = L"rtbProductDescTwo";
			this->rtbProductDescTwo->Size = System::Drawing::Size(160, 202);
			this->rtbProductDescTwo->TabIndex = 3;
			this->rtbProductDescTwo->Text = L"";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(4, 183);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(119, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Product Description";
			// 
			// imageBoxTwo
			// 
			this->imageBoxTwo->BackColor = System::Drawing::SystemColors::Control;
			this->imageBoxTwo->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->imageBoxTwo->Location = System::Drawing::Point(7, 21);
			this->imageBoxTwo->Name = L"imageBoxTwo";
			this->imageBoxTwo->Size = System::Drawing::Size(160, 146);
			this->imageBoxTwo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->imageBoxTwo->TabIndex = 1;
			this->imageBoxTwo->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(4, 4);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(89, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Product Image";
			// 
			// viewProduct
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(703, 433);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->productTable);
			this->Name = L"viewProduct";
			this->Text = L"viewProduct";
			this->Load += gcnew System::EventHandler(this, &viewProduct::viewProduct_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->productTable))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imageBoxTwo))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

String^ connString = "server = localhost; port = 3306; database = dbshop; uid = root; password = root";
MySqlConnection^ conn = gcnew MySqlConnection(connString);

private: System::Void viewProduct_Load(System::Object^ sender, System::EventArgs^ e) {

	try
	{
		conn->Open();

		MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("SELECT productID, productName, productStock, productPrice FROM products", conn);
		DataTable^ table = gcnew DataTable();
		adapter->Fill(table);
		
		productTable->DataSource = table;

		conn->Close();

	}
	catch (Exception^ e)
	{
		(void) e;
		MessageBox::Show("Failed To Print Data In Database");
	}
}

private: System::Void productTable_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

	String^ currProductID = productTable->Rows[productTable->CurrentCell->RowIndex]->Cells[0]->Value->ToString();

	try
	{
		conn->Open();

		imageBoxTwo->Image = nullptr;
		rtbProductDescTwo->Text = "";

		MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("SELECT productImage, productDescription FROM products WHERE productID = " + currProductID, conn);
		DataTable^ table = gcnew DataTable();
		adapter->Fill(table);

		array<unsigned char>^ productImageTwo = (array<unsigned char>^)table->Rows[0]->ItemArray[0];
		MemoryStream^ memoryStream = gcnew MemoryStream(productImageTwo);
		imageBoxTwo->Image = Image::FromStream(memoryStream);

		String^ productDescTwo = table->Rows[0]->ItemArray[1]->ToString();
		rtbProductDescTwo->Text = productDescTwo;

		conn->Close();

	}
	catch (Exception^ e)
	{
		(void) e;
		conn->Close();
	}
}

private: System::Void productTable_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
};

}
