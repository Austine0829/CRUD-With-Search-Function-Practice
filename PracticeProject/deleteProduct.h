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
	/// Summary for deleteProduct
	/// </summary>
	public ref class deleteProduct : public System::Windows::Forms::Form
	{
	public:
		deleteProduct(void)
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
		~deleteProduct()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ productTableFour;
	protected:

	protected:

	protected:
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::RichTextBox^ rtbProductDescFive;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ imageBoxFive;

	private: System::Windows::Forms::Label^ label3;


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
			this->productTableFour = (gcnew System::Windows::Forms::DataGridView());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->rtbProductDescFive = (gcnew System::Windows::Forms::RichTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->imageBoxFive = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->productTableFour))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imageBoxFive))->BeginInit();
			this->SuspendLayout();
			// 
			// productTableFour
			// 
			this->productTableFour->AllowUserToAddRows = false;
			this->productTableFour->AllowUserToDeleteRows = false;
			this->productTableFour->AllowUserToResizeColumns = false;
			this->productTableFour->AllowUserToResizeRows = false;
			this->productTableFour->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->productTableFour->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedCells;
			this->productTableFour->BackgroundColor = System::Drawing::SystemColors::Control;
			this->productTableFour->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->productTableFour->Location = System::Drawing::Point(180, 12);
			this->productTableFour->MultiSelect = false;
			this->productTableFour->Name = L"productTableFour";
			this->productTableFour->ReadOnly = true;
			this->productTableFour->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->productTableFour->Size = System::Drawing::Size(511, 409);
			this->productTableFour->TabIndex = 0;
			this->productTableFour->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &deleteProduct::productTableFour_CellClick);
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->rtbProductDescFive);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->imageBoxFive);
			this->panel1->Location = System::Drawing::Point(13, 46);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(161, 375);
			this->panel1->TabIndex = 1;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(3, 183);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(119, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Product Description";
			// 
			// rtbProductDescFive
			// 
			this->rtbProductDescFive->Location = System::Drawing::Point(3, 199);
			this->rtbProductDescFive->Name = L"rtbProductDescFive";
			this->rtbProductDescFive->Size = System::Drawing::Size(151, 169);
			this->rtbProductDescFive->TabIndex = 2;
			this->rtbProductDescFive->Text = L"";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(3, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(89, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Product Image";
			// 
			// imageBoxFive
			// 
			this->imageBoxFive->BackColor = System::Drawing::SystemColors::Control;
			this->imageBoxFive->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->imageBoxFive->Location = System::Drawing::Point(4, 31);
			this->imageBoxFive->Name = L"imageBoxFive";
			this->imageBoxFive->Size = System::Drawing::Size(150, 135);
			this->imageBoxFive->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->imageBoxFive->TabIndex = 0;
			this->imageBoxFive->TabStop = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::Control;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(51, 17);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Delete";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &deleteProduct::button1_Click);
			// 
			// deleteProduct
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(703, 433);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->productTableFour);
			this->Name = L"deleteProduct";
			this->Text = L"Delete Product";
			this->Load += gcnew System::EventHandler(this, &deleteProduct::deleteProduct_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->productTableFour))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imageBoxFive))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

String^ connString = "server = localhost; port = 3306; database = dbshop; uid = root; password = root";
MySqlConnection^ conn = gcnew MySqlConnection(connString);

void loadTable() {

	try
	{
		conn->Open();

		MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("SELECT productID FROM products", conn);
		DataTable^ table = gcnew DataTable();
		adapter->Fill(table);
		productTableFour->DataSource = table;

		conn->Close();

	}

	catch (Exception^ e)
	{
		(void)e;
		MessageBox::Show("Failed To Print Data In Database");
	}
}

private: System::Void deleteProduct_Load(System::Object^ sender, System::EventArgs^ e) {

	try
	{
		conn->Open();

		MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("SELECT productID, productName, productStock, productPrice FROM products", conn);
		DataTable^ table = gcnew DataTable();
		adapter->Fill(table);

		productTableFour->DataSource = table;

		conn->Close();

	}
	catch (Exception^ e)
	{
		(void)e;
		MessageBox::Show("Failed To Print Data In Database");
	}
}

private: System::Void productTableFour_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {


	String^ currProductID = productTableFour->Rows[productTableFour->CurrentCell->RowIndex]->Cells[0]->Value->ToString();

	try
	{
		conn->Open();

		imageBoxFive->Image = nullptr;
		rtbProductDescFive->Text = "";

		MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("SELECT productImage, productDescription FROM products WHERE productID = " + currProductID, conn);
		DataTable^ table = gcnew DataTable();
		adapter->Fill(table);

		array<unsigned char>^ productImageTwo = (array<unsigned char>^)table->Rows[0]->ItemArray[0];
		MemoryStream^ memoryStream = gcnew MemoryStream(productImageTwo);
		imageBoxFive->Image = Image::FromStream(memoryStream);

		String^ productDescTwo = table->Rows[0]->ItemArray[1]->ToString();
		rtbProductDescFive->Text = productDescTwo;

		conn->Close();

	}
	catch (Exception^ e)
	{
		(void)e;
		conn->Close();
	}
}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ currProductID = productTableFour->Rows[productTableFour->CurrentCell->RowIndex]->Cells[0]->Value->ToString();

	Windows::Forms::DialogResult dialogResult = MessageBox::Show("Are You Sure Your Want To Delete This Product Data In Database?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Warning);

	if (dialogResult == Windows::Forms::DialogResult::Yes)
	{
		try
		{
			conn->Open();

			MySqlCommand^ cmd = gcnew MySqlCommand("DELETE FROM products WHERE productID =" + currProductID, conn);

			cmd->ExecuteNonQuery();

			MessageBox::Show("Product Data Has Succesfully Deleted\n");

			conn->Close();

			loadTable();
		}
		catch (Exception^ e)
		{   
			(void) e;
			MessageBox::Show("Failed To Delete Product Details In Database\n");
			conn->Close();
		}
	}
}

};

}
