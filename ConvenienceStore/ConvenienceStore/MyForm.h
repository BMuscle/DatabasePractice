#pragma once
#include <msclr/marshal_cppstd.h>
#include "Mysql.h"

namespace ConvenienceStore {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MyForm の概要
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: ここにコンストラクター コードを追加します
			//
		}

	protected:
		/// <summary>
		/// 使用中のリソースをすべてクリーンアップします。
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ bt1;
	private: System::Windows::Forms::Label^ titlelb;


	protected:

	protected:

	private: System::Windows::Forms::CheckedListBox^ checkedListBox1;
	private: System::Windows::Forms::Label^ debuglb;

	private: System::Windows::Forms::Button^ linkbutton;

	private:
		/// <summary>
		/// 必要なデザイナー変数です。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// デザイナー サポートに必要なメソッドです。このメソッドの内容を
		/// コード エディターで変更しないでください。
		/// </summary>
		void InitializeComponent(void)
		{
			this->bt1 = (gcnew System::Windows::Forms::Button());
			this->titlelb = (gcnew System::Windows::Forms::Label());
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->debuglb = (gcnew System::Windows::Forms::Label());
			this->linkbutton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// bt1
			// 
			this->bt1->Location = System::Drawing::Point(680, 517);
			this->bt1->Name = L"bt1";
			this->bt1->Size = System::Drawing::Size(266, 115);
			this->bt1->TabIndex = 0;
			this->bt1->Text = L"発注決定";
			this->bt1->UseVisualStyleBackColor = true;
			this->bt1->Click += gcnew System::EventHandler(this, &MyForm::Button1_Click);
			// 
			// titlelb
			// 
			this->titlelb->AutoSize = true;
			this->titlelb->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->titlelb->Location = System::Drawing::Point(31, 31);
			this->titlelb->Name = L"titlelb";
			this->titlelb->Size = System::Drawing::Size(385, 60);
			this->titlelb->TabIndex = 1;
			this->titlelb->Text = L"商品在庫追加";
			this->titlelb->Click += gcnew System::EventHandler(this, &MyForm::Label1_Click);
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Location = System::Drawing::Point(41, 339);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(249, 180);
			this->checkedListBox1->TabIndex = 2;
			// 
			// debuglb
			// 
			this->debuglb->AutoSize = true;
			this->debuglb->Location = System::Drawing::Point(61, 150);
			this->debuglb->Name = L"debuglb";
			this->debuglb->Size = System::Drawing::Size(129, 18);
			this->debuglb->TabIndex = 3;
			this->debuglb->Text = L"デバッグメッセージ";
			// 
			// linkbutton
			// 
			this->linkbutton->Location = System::Drawing::Point(477, 339);
			this->linkbutton->Name = L"linkbutton";
			this->linkbutton->Size = System::Drawing::Size(251, 111);
			this->linkbutton->TabIndex = 4;
			this->linkbutton->Text = L"データベースと同期";
			this->linkbutton->UseVisualStyleBackColor = true;
			this->linkbutton->Click += gcnew System::EventHandler(this, &MyForm::Linkbutton_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1058, 664);
			this->Controls->Add(this->linkbutton);
			this->Controls->Add(this->debuglb);
			this->Controls->Add(this->checkedListBox1);
			this->Controls->Add(this->titlelb);
			this->Controls->Add(this->bt1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Linkbutton_Click(System::Object^ sender, System::EventArgs^ e) {
		//同期ボタンが押された時の処理
	}
};
}
