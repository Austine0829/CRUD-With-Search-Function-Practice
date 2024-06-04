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
	/// Summary for updateProducth
	/// </summary>
	public ref class updateProducth : public System::Windows::Forms::Form
	{
	public:
		updateProducth(void)
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
		~updateProducth()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ productTableTwo;
	protected:

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::RichTextBox^ rtbProductDescThree;



	private: System::Windows::Forms::TextBox^ txtProductNameTwo;

	private: System::Windows::Forms::PictureBox^ imageBoxThree;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btnChangeImage;

	private: System::Windows::Forms::NumericUpDown^ nudProductStockTwo;
	private: System::Windows::Forms::Button^ btnUpdate;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::NumericUpDown^ nudProductPriceTwo;

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
			this->productTableTwo = (gcnew System::Windows::Forms::DataGridView());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->nudProductPriceTwo = (gcnew System::Windows::Forms::NumericUpDown());
			this->btnChangeImage = (gcnew System::Windows::Forms::Button());
			this->nudProductStockTwo = (gcnew System::Windows::Forms::NumericUpDown());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->rtbProductDescThree = (gcnew System::Windows::Forms::RichTextBox());
			this->txtProductNameTwo = (gcnew System::Windows::Forms::TextBox());
			this->imageBoxThree = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->productTableTwo))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudProductPriceTwo))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudProductStockTwo))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imageBoxThree))->BeginInit();
			this->SuspendLayout();
			// 
			// productTableTwo
			// 
			this->productTableTwo->AllowUserToAddRows = false;
			this->productTableTwo->AllowUserToDeleteRows = false;
			this->productTableTwo->AllowUserToResizeColumns = false;
			this->productTableTwo->AllowUserToResizeRows = false;
			this->productTableTwo->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->productTableTwo->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedCells;
			this->productTableTwo->BackgroundColor = System::Drawing::SystemColors::Control;
			this->productTableTwo->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->productTableTwo->Location = System::Drawing::Point(360, 12);
			this->productTableTwo->MultiSelect = false;
			this->productTableTwo->Name = L"productTableTwo";
			this->productTableTwo->ReadOnly = true;
			this->productTableTwo->Size = System::Drawing::Size(162, 328);
			this->productTableTwo->TabIndex = 0;
			this->productTableTwo->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &updateProducth::productTableTwo_CellClick);
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->btnUpdate);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->nudProductPriceTwo);
			this->panel1->Controls->Add(this->btnChangeImage);
			this->panel1->Controls->Add(this->nudProductStockTwo);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->rtbProductDescThree);
			this->panel1->Controls->Add(this->txtProductNameTwo);
			this->panel1->Controls->Add(this->imageBoxThree);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(13, 13);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(341, 327);
			this->panel1->TabIndex = 1;
			// 
			// btnUpdate
			// 
			this->btnUpdate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnUpdate->Location = System::Drawing::Point(26, 232);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(86, 77);
			this->btnUpdate->TabIndex = 11;
			this->btnUpdate->Text = L"Update";
			this->btnUpdate->UseVisualStyleBackColor = true;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &updateProducth::btnUpdate_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(137, 273);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(84, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Product Price";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(137, 216);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(88, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Product Stock";
			// 
			// nudProductPriceTwo
			// 
			this->nudProductPriceTwo->Location = System::Drawing::Point(140, 289);
			this->nudProductPriceTwo->Name = L"nudProductPriceTwo";
			this->nudProductPriceTwo->Size = System::Drawing::Size(186, 20);
			this->nudProductPriceTwo->TabIndex = 8;
			// 
			// btnChangeImage
			// 
			this->btnChangeImage->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnChangeImage->Location = System::Drawing::Point(17, 176);
			this->btnChangeImage->Name = L"btnChangeImage";
			this->btnChangeImage->Size = System::Drawing::Size(105, 23);
			this->btnChangeImage->TabIndex = 7;
			this->btnChangeImage->Text = L"Change Image";
			this->btnChangeImage->UseVisualStyleBackColor = true;
			this->btnChangeImage->Click += gcnew System::EventHandler(this, &updateProducth::btnChangeImage_Click);
			// 
			// nudProductStockTwo
			// 
			this->nudProductStockTwo->Location = System::Drawing::Point(140, 232);
			this->nudProductStockTwo->Name = L"nudProductStockTwo";
			this->nudProductStockTwo->Size = System::Drawing::Size(186, 20);
			this->nudProductStockTwo->TabIndex = 6;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(137, 54);
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
			this->label2->Location = System::Drawing::Point(137, 5);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(87, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Product Name";
			// 
			// rtbProductDescThree
			// 
			this->rtbProductDescThree->Location = System::Drawing::Point(140, 70);
			this->rtbProductDescThree->Name = L"rtbProductDescThree";
			this->rtbProductDescThree->Size = System::Drawing::Size(186, 96);
			this->rtbProductDescThree->TabIndex = 3;
			this->rtbProductDescThree->Text = L"";
			// 
			// txtProductNameTwo
			// 
			this->txtProductNameTwo->Location = System::Drawing::Point(140, 21);
			this->txtProductNameTwo->Name = L"txtProductNameTwo";
			this->txtProductNameTwo->Size = System::Drawing::Size(186, 20);
			this->txtProductNameTwo->TabIndex = 2;
			// 
			// imageBoxThree
			// 
			this->imageBoxThree->BackColor = System::Drawing::SystemColors::Control;
			this->imageBoxThree->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->imageBoxThree->Location = System::Drawing::Point(7, 21);
			this->imageBoxThree->Name = L"imageBoxThree";
			this->imageBoxThree->Size = System::Drawing::Size(124, 145);
			this->imageBoxThree->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->imageBoxThree->TabIndex = 1;
			this->imageBoxThree->TabStop = false;
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
			// updateProducth
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(534, 352);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->productTableTwo);
			this->Name = L"updateProducth";
			this->Text = L"updateProducth";
			this->Load += gcnew System::EventHandler(this, &updateProducth::updateProducth_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->productTableTwo))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudProductPriceTwo))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudProductStockTwo))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imageBoxThree))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

String^ connString = "Server = localhost; Port = 3306; Database = dbshop; UID = root; Password = root";
MySqlConnection^ conn = gcnew MySqlConnection(connString);

void loadTable() {
	
	try
	{
		conn->Open();

		MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("SELECT productID FROM products", conn);
		DataTable^ table = gcnew DataTable();
		adapter->Fill(table);
		productTableTwo->DataSource = table;

		conn->Close();

	}
	catch (Exception^ e)
	{
		(void)e;
		MessageBox::Show("Failed To Print Data In Database");
	}
}

private: System::Void updateProducth_Load(System::Object^ sender, System::EventArgs^ e) {

	loadTable();
}

private: System::Void productTableTwo_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

	String^ currProductID = productTableTwo->Rows[productTableTwo->CurrentCell->RowIndex]->Cells[0]->Value->ToString();

	try
	{
		conn->Open();

		txtProductNameTwo->Text = "";
		rtbProductDescThree->Text = "";

		MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("SELECT productName, productDescription, productStock, productPrice, productImage FROM products WHERE productID = " + currProductID, conn);
		DataTable^ table = gcnew DataTable();
		adapter->Fill(table);

		txtProductNameTwo->Text = table->Rows[0]->ItemArray[0]->ToString();
		rtbProductDescThree->Text = table->Rows[0]->ItemArray[1]->ToString();
		nudProductStockTwo->Value = Convert::ToInt32(table->Rows[0]->ItemArray[2]->ToString());
		nudProductPriceTwo->Value = Convert::ToInt32(table->Rows[0]->ItemArray[3]->ToString());
		
		array<unsigned char>^ productImage = (array<unsigned char>^)table->Rows[0]->ItemArray[4];
		MemoryStream^ memoryStream = gcnew MemoryStream(productImage);
		imageBoxThree->Image = Image::FromStream(memoryStream);

		conn->Close();

	}
	catch (Exception^ e)
	{
		(void)e;
	}
}

private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ currProductID = productTableTwo->Rows[productTableTwo->CurrentCell->RowIndex]->Cells[0]->Value->ToString();

	String^ newProductName = txtProductNameTwo->Text;
	String^ newProductDesc = rtbProductDescThree->Text;
	int newProductStock = Convert::ToInt32(nudProductStockTwo->Value);
	double newProductPrice = Convert::ToDouble(nudProductPriceTwo->Value);
	array<unsigned char>^ newProductImage{};

	try
	{
		MemoryStream^ memoryStreamTwo = gcnew MemoryStream();

		if (imageBoxThree->Image != nullptr)
		{
			imageBoxThree->Image->Save(memoryStreamTwo, System::Drawing::Imaging::ImageFormat::Jpeg);
			newProductImage = memoryStreamTwo->ToArray();
		}
	}
	catch (Exception^ e)
	{
		(void) e;
	}

	try
	{
		conn->Open();

		MySqlCommand^ cmd = gcnew MySqlCommand("UPDATE products SET productName = @productName, productDescription = @productDescription, productStock = @productStock, productPrice = @productPrice, productImage = @productImage WHERE productID =" + currProductID, conn);

		cmd->Parameters->AddWithValue("@productName", newProductName);
		cmd->Parameters->AddWithValue("@productDescription", newProductDesc);
		cmd->Parameters->AddWithValue("@productStock", newProductStock);
		cmd->Parameters->AddWithValue("@productPrice", newProductPrice);
		cmd->Parameters->AddWithValue("@productImage", newProductImage);

		cmd->ExecuteNonQuery();

		MessageBox::Show("Product Data Has Been Succesfully Updated\n");

		conn->Close();

		loadTable();
	}

	catch (Exception^ e)
	{
		(void) e;
		MessageBox::Show("Failed To Update Product Data\n");
	}
}

private: System::Void btnChangeImage_Click(System::Object^ sender, System::EventArgs^ e) {

	OpenFileDialog^ openFile = gcnew OpenFileDialog();
	openFile->Filter = "All Files *.* | *.*";

	if (openFile->ShowDialog() == Windows::Forms::DialogResult::OK)
	{
		imageBoxThree->ImageLocation = openFile->FileName;
	}
}

};

}
