#pragma once

namespace PracticeProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for searchProduct
	/// </summary>
	public ref class searchProduct : public System::Windows::Forms::Form
	{
	public:
		searchProduct(void)
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
		~searchProduct()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ productTableThree;
	protected:

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ txtSearch;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::RichTextBox^ rtbProductDescFour;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ imageBoxFour;
	private: System::Windows::Forms::Button^ btnSearch;


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
			this->productTableThree = (gcnew System::Windows::Forms::DataGridView());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->rtbProductDescFour = (gcnew System::Windows::Forms::RichTextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->imageBoxFour = (gcnew System::Windows::Forms::PictureBox());
			this->txtSearch = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->productTableThree))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imageBoxFour))->BeginInit();
			this->SuspendLayout();
			// 
			// productTableThree
			// 
			this->productTableThree->AllowUserToAddRows = false;
			this->productTableThree->AllowUserToDeleteRows = false;
			this->productTableThree->AllowUserToResizeColumns = false;
			this->productTableThree->AllowUserToResizeRows = false;
			this->productTableThree->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->productTableThree->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedCells;
			this->productTableThree->BackgroundColor = System::Drawing::SystemColors::Control;
			this->productTableThree->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->productTableThree->Location = System::Drawing::Point(173, 13);
			this->productTableThree->MultiSelect = false;
			this->productTableThree->Name = L"productTableThree";
			this->productTableThree->ReadOnly = true;
			this->productTableThree->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->productTableThree->Size = System::Drawing::Size(518, 408);
			this->productTableThree->TabIndex = 0;
			this->productTableThree->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &searchProduct::productTableThree_CellClick);
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->rtbProductDescFour);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->imageBoxFour);
			this->panel1->Location = System::Drawing::Point(13, 81);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(154, 340);
			this->panel1->TabIndex = 1;
			// 
			// rtbProductDescFour
			// 
			this->rtbProductDescFour->Location = System::Drawing::Point(6, 189);
			this->rtbProductDescFour->Name = L"rtbProductDescFour";
			this->rtbProductDescFour->Size = System::Drawing::Size(141, 144);
			this->rtbProductDescFour->TabIndex = 6;
			this->rtbProductDescFour->Text = L"";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(3, 173);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(119, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Product Description";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(3, 10);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(89, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Product Image";
			// 
			// imageBoxFour
			// 
			this->imageBoxFour->BackColor = System::Drawing::SystemColors::Control;
			this->imageBoxFour->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->imageBoxFour->Location = System::Drawing::Point(6, 26);
			this->imageBoxFour->Name = L"imageBoxFour";
			this->imageBoxFour->Size = System::Drawing::Size(141, 133);
			this->imageBoxFour->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->imageBoxFour->TabIndex = 0;
			this->imageBoxFour->TabStop = false;
			// 
			// txtSearch
			// 
			this->txtSearch->AccessibleName = L"";
			this->txtSearch->ForeColor = System::Drawing::SystemColors::WindowText;
			this->txtSearch->Location = System::Drawing::Point(13, 29);
			this->txtSearch->Name = L"txtSearch";
			this->txtSearch->Size = System::Drawing::Size(154, 20);
			this->txtSearch->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(131, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Search Name Product";
			// 
			// btnSearch
			// 
			this->btnSearch->BackColor = System::Drawing::SystemColors::Control;
			this->btnSearch->Location = System::Drawing::Point(50, 55);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(75, 23);
			this->btnSearch->TabIndex = 4;
			this->btnSearch->Text = L"Search";
			this->btnSearch->UseVisualStyleBackColor = false;
			this->btnSearch->Click += gcnew System::EventHandler(this, &searchProduct::btnSearch_Click);
			// 
			// searchProduct
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(703, 433);
			this->Controls->Add(this->btnSearch);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtSearch);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->productTableThree);
			this->Name = L"searchProduct";
			this->Text = L"searchProduct";
			this->Load += gcnew System::EventHandler(this, &searchProduct::searchProduct_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->productTableThree))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imageBoxFour))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

String^ connString = "server = localhost; port = 3306; database = dbshop; uid = root; password = root";
MySqlConnection^ conn = gcnew MySqlConnection(connString);

private: System::Void searchProduct_Load(System::Object^ sender, System::EventArgs^ e) {

	try
	{
		conn->Open();

		MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("SELECT productID, productName, productStock, productPrice FROM products", conn);
		DataTable^ table = gcnew DataTable();
		adapter->Fill(table);

		productTableThree->DataSource = table;

		conn->Close();

	}
	catch (Exception^ e)
	{
		(void)e;
		MessageBox::Show("Failed To Print Data In Database");
	}

}

private: System::Void productTableThree_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	String^ currProductID = productTableThree->Rows[productTableThree->CurrentCell->RowIndex]->Cells[0]->Value->ToString();

	try
	{
		conn->Open();

		imageBoxFour->Image = nullptr;
		rtbProductDescFour->Text = "";

		MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("SELECT productImage, productDescription FROM products WHERE productID = " + currProductID, conn);
		DataTable^ table = gcnew DataTable();
		adapter->Fill(table);

		array<unsigned char>^ productImageTwo = (array<unsigned char>^)table->Rows[0]->ItemArray[0];
		MemoryStream^ memoryStream = gcnew MemoryStream(productImageTwo);
		imageBoxFour->Image = Image::FromStream(memoryStream);

		String^ productDescTwo = table->Rows[0]->ItemArray[1]->ToString();
		rtbProductDescFour->Text = productDescTwo;

		conn->Close();

	}
	catch (Exception^ e)
	{
		(void)e;
		conn->Close();
	}
}

private: System::Void btnSearch_Click(System::Object^ sender, System::EventArgs^ e) {
	
	String^ searchProduct = txtSearch->Text;

	try
	{
		conn->Open();

		MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("SELECT productID, productName, productStock, productPrice FROM products WHERE productName = '"+ searchProduct +"' ", conn);
		DataTable^ table = gcnew DataTable();
		adapter->Fill(table);

		productTableThree->DataSource = table;

		conn->Close();

	}
	catch (Exception^ e)
	{
		(void)e;
		MessageBox::Show("Failed To Print Data In Database");
	}
}

};

}
