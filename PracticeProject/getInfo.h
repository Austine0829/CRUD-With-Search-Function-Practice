#pragma once

#include "viewProduct.h"
#include "searchProduct.h"
#include "updateProducth.h"
#include "deleteProduct.h"

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
	/// Summary for getInfo
	/// </summary>
	public ref class getInfo : public System::Windows::Forms::Form
	{
	public:
		getInfo(void)
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
		~getInfo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ btnDelete;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ btnViewProduct;

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::RichTextBox^ rtbProductDesc;

	private: System::Windows::Forms::TextBox^ txtProductName;

	private: System::Windows::Forms::PictureBox^ ImageBox;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnAddProduct;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::NumericUpDown^ nudProductPrice;

	private: System::Windows::Forms::NumericUpDown^ nudProductStock;

	private: System::Windows::Forms::Button^ btnAddImage;



	protected:

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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->btnViewProduct = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->btnAddProduct = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->nudProductPrice = (gcnew System::Windows::Forms::NumericUpDown());
			this->nudProductStock = (gcnew System::Windows::Forms::NumericUpDown());
			this->btnAddImage = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->rtbProductDesc = (gcnew System::Windows::Forms::RichTextBox());
			this->txtProductName = (gcnew System::Windows::Forms::TextBox());
			this->ImageBox = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudProductPrice))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudProductStock))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImageBox))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->btnDelete);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->btnViewProduct);
			this->panel1->Location = System::Drawing::Point(13, 14);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(142, 181);
			this->panel1->TabIndex = 0;
			// 
			// btnDelete
			// 
			this->btnDelete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDelete->Location = System::Drawing::Point(12, 127);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(116, 23);
			this->btnDelete->TabIndex = 3;
			this->btnDelete->Text = L"Delete Product";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &getInfo::btnDelete_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(12, 95);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(116, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Update Product";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &getInfo::button3_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(12, 63);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(116, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Search Product";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &getInfo::button2_Click);
			// 
			// btnViewProduct
			// 
			this->btnViewProduct->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnViewProduct->Location = System::Drawing::Point(12, 30);
			this->btnViewProduct->Name = L"btnViewProduct";
			this->btnViewProduct->Size = System::Drawing::Size(116, 23);
			this->btnViewProduct->TabIndex = 0;
			this->btnViewProduct->Text = L"View Product List";
			this->btnViewProduct->UseVisualStyleBackColor = true;
			this->btnViewProduct->Click += gcnew System::EventHandler(this, &getInfo::btnViewProduct_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel2->Controls->Add(this->btnAddProduct);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->nudProductPrice);
			this->panel2->Controls->Add(this->nudProductStock);
			this->panel2->Controls->Add(this->btnAddImage);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->rtbProductDesc);
			this->panel2->Controls->Add(this->txtProductName);
			this->panel2->Controls->Add(this->ImageBox);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Location = System::Drawing::Point(162, 13);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(346, 308);
			this->panel2->TabIndex = 1;
			// 
			// btnAddProduct
			// 
			this->btnAddProduct->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAddProduct->Location = System::Drawing::Point(7, 210);
			this->btnAddProduct->Name = L"btnAddProduct";
			this->btnAddProduct->Size = System::Drawing::Size(113, 70);
			this->btnAddProduct->TabIndex = 11;
			this->btnAddProduct->Text = L"Add Product";
			this->btnAddProduct->UseVisualStyleBackColor = true;
			this->btnAddProduct->Click += gcnew System::EventHandler(this, &getInfo::btnAddProduct_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(127, 244);
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
			this->label4->Location = System::Drawing::Point(123, 194);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(88, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Product Stock";
			// 
			// nudProductPrice
			// 
			this->nudProductPrice->DecimalPlaces = 2;
			this->nudProductPrice->Location = System::Drawing::Point(126, 260);
			this->nudProductPrice->Name = L"nudProductPrice";
			this->nudProductPrice->Size = System::Drawing::Size(211, 20);
			this->nudProductPrice->TabIndex = 8;
			// 
			// nudProductStock
			// 
			this->nudProductStock->Location = System::Drawing::Point(126, 210);
			this->nudProductStock->Name = L"nudProductStock";
			this->nudProductStock->Size = System::Drawing::Size(211, 20);
			this->nudProductStock->TabIndex = 7;
			// 
			// btnAddImage
			// 
			this->btnAddImage->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAddImage->Location = System::Drawing::Point(7, 155);
			this->btnAddImage->Name = L"btnAddImage";
			this->btnAddImage->Size = System::Drawing::Size(114, 23);
			this->btnAddImage->TabIndex = 6;
			this->btnAddImage->Text = L"Add Image";
			this->btnAddImage->UseVisualStyleBackColor = true;
			this->btnAddImage->Click += gcnew System::EventHandler(this, &getInfo::btnAddImage_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(127, 59);
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
			this->label2->Location = System::Drawing::Point(127, 5);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(87, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Product Name";
			// 
			// rtbProductDesc
			// 
			this->rtbProductDesc->Location = System::Drawing::Point(126, 75);
			this->rtbProductDesc->Name = L"rtbProductDesc";
			this->rtbProductDesc->Size = System::Drawing::Size(211, 75);
			this->rtbProductDesc->TabIndex = 3;
			this->rtbProductDesc->Text = L"";
			// 
			// txtProductName
			// 
			this->txtProductName->Location = System::Drawing::Point(126, 21);
			this->txtProductName->Name = L"txtProductName";
			this->txtProductName->Size = System::Drawing::Size(211, 20);
			this->txtProductName->TabIndex = 2;
			// 
			// ImageBox
			// 
			this->ImageBox->BackColor = System::Drawing::SystemColors::Control;
			this->ImageBox->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->ImageBox->Location = System::Drawing::Point(7, 21);
			this->ImageBox->Name = L"ImageBox";
			this->ImageBox->Size = System::Drawing::Size(114, 129);
			this->ImageBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->ImageBox->TabIndex = 1;
			this->ImageBox->TabStop = false;
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
			// getInfo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(521, 336);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"getInfo";
			this->Text = L"Product Management Basic System";
			this->Load += gcnew System::EventHandler(this, &getInfo::getInfo_Load);
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudProductPrice))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudProductStock))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImageBox))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

//variables for database
String^ connString = "Server = localhost; Port = 3306; Database = dbshop; UID = root; Password = root";
MySqlConnection^ conn = gcnew MySqlConnection(connString);

//to delete the input after adding the product details in database
void clearForm() {

	txtProductName->Text = "";
	rtbProductDesc->Text = "";
	nudProductStock->Value = 0;
	nudProductPrice->Value = 0;
}

private: System::Void getInfo_Load(System::Object^ sender, System::EventArgs^ e) {

	try //checking if the program succesfully connected to database
	{
		conn->Open();

		MessageBox::Show("Succesfully Connected To Database");

		conn->Close();
	}
	catch (Exception^ e)
	{
		(void) e;
		MessageBox::Show("Failed To Connect In Database");
	}
	
}

private: System::Void btnAddProduct_Click(System::Object^ sender, System::EventArgs^ e) {
	
	//variables for user inputs
	array<unsigned char>^ productImage;
	String^ productName = txtProductName->Text;
	String^ productDesc = rtbProductDesc->Text;
	int productStock = Convert::ToInt16(nudProductStock->Value);
	double productPrice = Convert::ToDouble(nudProductPrice->Value);
	bool isValid = true;


	try //catching error when user doesn't put image when adding product in database
	{   
		//to input the image in productImage variable
		String^ fileLocation = ImageBox->ImageLocation;
		FileStream^ fileStream = gcnew FileStream(fileLocation, FileMode::Open, FileAccess::Read);
		BinaryReader^ binaryReader = gcnew BinaryReader(fileStream);
		productImage = binaryReader->ReadBytes(fileStream->Length);
	}

	catch (Exception^ e)
	{
		(void) e;
	}

	if (txtProductName->Text->Trim()->Length <= 2) //check if user puts a product name textbox
	{
		isValid = false;
	}
	
	if (nudProductPrice->Value <= 0) //check if user put a price in the product
	{
		isValid = false;
	}

	if (isValid == true) //executes if user fill the required inputs in the form
	{
		try
		{
			conn->Open(); //open database

			//inserting the inputs in database
			String^ commandString = "INSERT INTO products (productName, productDescription, productStock, productPrice, productImage) VALUES(@productName, @productDescription, @productStock, @productPrice, @productImage)";
			MySqlCommand^ command = gcnew MySqlCommand(commandString, conn);

			command->Parameters->AddWithValue("@productName", productName);
			command->Parameters->AddWithValue("@productDescription", productDesc);
			command->Parameters->AddWithValue("@productStock", productStock);
			command->Parameters->AddWithValue("@productPrice", productPrice);
			command->Parameters->AddWithValue("@productImage", productImage);

			command->ExecuteNonQuery();
			MessageBox::Show("Product Details Has Been Recorded In Database");
			conn->Close();
			clearForm();
		}

		catch (Exception^ e)
		{   
			(void) e;
			MessageBox::Show("Failed To Insert Prodcut Details In Database");
			conn->Close();
		}
	}

	else //if user didnt meet the required inputs this thing shows in users screen
	{
		MessageBox::Show("Please Fill Out Product Name & Product Price Before Adding It in Database");
	}
}

private: System::Void btnAddImage_Click(System::Object^ sender, System::EventArgs^ e) {
	
	//To open files to file explorer
	OpenFileDialog^ openFile = gcnew OpenFileDialog();
	openFile->Filter = "ALL Files *.* | *.*";

	if (openFile->ShowDialog() == Windows::Forms::DialogResult::OK)//check if user put an image
	{   

		ImageBox->ImageLocation = openFile->FileName; // executes if user put an image and send it to PictureBox
	}
}

private: System::Void btnViewProduct_Click(System::Object^ sender, System::EventArgs^ e) {

	//to open the form for View Product List button
	viewProduct^ view = gcnew viewProduct();
	view->Show();
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	searchProduct^ search = gcnew searchProduct();
	search->Show();
}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	updateProducth^ update = gcnew updateProducth();
	update->Show();
}

private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {

	deleteProduct^ deleteItem = gcnew deleteProduct();
	deleteItem->Show();
}

};

}
