#pragma once
#include "Lib.h"
namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		String ^ not;
		bool check(); 
		Form1(void)
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
		/// 
		
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ rear;
	private: System::Windows::Forms::Label^ front;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ rearC;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ frontC;
	private: System::Windows::Forms::Button^ button5;
	private: System::ComponentModel::IContainer^ components;
	protected:

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->rear = (gcnew System::Windows::Forms::Label());
			this->front = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->rearC = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->frontC = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(258, 19);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Öne Ekle";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(339, 19);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Önden Sil";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(258, 47);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Arkaya Ekle";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(339, 47);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Arkadan Sil";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(175, 20);
			this->textBox1->MaxLength = 200;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(76, 20);
			this->textBox1->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(163, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Sýraya eklemek istediðiniz deðer: ";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Location = System::Drawing::Point(438, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(130, 81);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Sýra Türünü Seçin";
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(32, 48);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(65, 17);
			this->radioButton2->TabIndex = 0;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Karakter";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(32, 25);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(67, 17);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Tam sayý";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton1_CheckedChanged);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->Controls->Add(this->button4);
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Location = System::Drawing::Point(12, 12);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(420, 81);
			this->groupBox2->TabIndex = 7;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Sýra Kontrolleri";
			// 
			// rear
			// 
			this->rear->AutoSize = true;
			this->rear->Location = System::Drawing::Point(89, 32);
			this->rear->Name = L"rear";
			this->rear->Size = System::Drawing::Size(0, 13);
			this->rear->TabIndex = 8;
			// 
			// front
			// 
			this->front->AutoSize = true;
			this->front->Location = System::Drawing::Point(83, 16);
			this->front->Name = L"front";
			this->front->Size = System::Drawing::Size(0, 13);
			this->front->TabIndex = 7;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 32);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(84, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Arkadaki Deðer:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 16);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(76, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Öndeki Deðer:";
			// 
			// label4
			// 
			this->label4->Location = System::Drawing::Point(12, 152);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(556, 20);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Not: Sýralar iki türü ayný anda içermez. Her ikisi de ayrý sýra.";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label2);
			this->groupBox3->Controls->Add(this->rear);
			this->groupBox3->Controls->Add(this->label3);
			this->groupBox3->Controls->Add(this->front);
			this->groupBox3->Location = System::Drawing::Point(12, 93);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(200, 56);
			this->groupBox3->TabIndex = 9;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Tam Sayý Sýra";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->label5);
			this->groupBox4->Controls->Add(this->rearC);
			this->groupBox4->Controls->Add(this->label7);
			this->groupBox4->Controls->Add(this->frontC);
			this->groupBox4->Location = System::Drawing::Point(232, 93);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(200, 56);
			this->groupBox4->TabIndex = 10;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Karakter Sýra";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 16);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(76, 13);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Öndeki Deðer:";
			// 
			// rearC
			// 
			this->rearC->AutoSize = true;
			this->rearC->Location = System::Drawing::Point(90, 32);
			this->rearC->Name = L"rearC";
			this->rearC->Size = System::Drawing::Size(0, 13);
			this->rearC->TabIndex = 8;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(6, 32);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(84, 13);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Arkadaki Deðer:";
			// 
			// frontC
			// 
			this->frontC->AutoSize = true;
			this->frontC->Location = System::Drawing::Point(83, 16);
			this->frontC->Name = L"frontC";
			this->frontC->Size = System::Drawing::Size(0, 13);
			this->frontC->TabIndex = 7;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(467, 126);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 11;
			this->button5->Text = L"Yeni Form";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(580, 181);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: 
		bool printLog(Deque*, int);
		void Form1_Load(Object^, EventArgs^);
		void button1_Click(Object^, EventArgs^);
		void button2_Click(Object^, EventArgs^);
		void button3_Click(System::Object^ sender, System::EventArgs^ e);
		void button4_Click(System::Object^ sender, System::EventArgs^ e);
		int a = 0; 
	private: 
		System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			textBox1->Text = "";
			if (radioButton1->Checked == true) {
				textBox1->MaxLength = 200;
			}
			else {
				textBox1->MaxLength = 1; 
			}
		}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	a++; 
	if (a == 3) {
		label4->Text = not; 
		a = 0; 
		timer1->Stop();
	}
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	Form1^ frm = gcnew Form1();
	frm->Show();
}
};
}
