#pragma once
#include "Gracz.h"


namespace WindowsFormApplication1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Okno
	/// </summary>
	public ref class Okno : public System::Windows::Forms::Form
	{
	public:
		Okno(void)
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
		~Okno()
		{
			if (components)
			{
				delete components;
			}
		}

	private: Gracz^ okno_gracza1;
	private: Gracz^ okno_gracza2;
	private: String^ imie_gracza1;
	private: String^ imie_gracza2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(116, 80);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Nowa gra";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Okno::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(91, 28);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(91, 54);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(73, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Imie gracza 1:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 57);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(76, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Imie gracza 2: ";
			// 
			// Okno
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(208, 133);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"Okno";
			this->Text = L"Statki";
			this->Load += gcnew System::EventHandler(this, &Okno::Okno_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	

	private: System::Void Okno_Load(System::Object^  sender, System::EventArgs^  e) {

		
		

	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		imie_gracza1 = textBox1->Text;
		imie_gracza2 = textBox2->Text;
		okno_gracza1 = gcnew Gracz(imie_gracza1);
		okno_gracza2 = gcnew Gracz(imie_gracza2);
		okno_gracza1->Dodaj(okno_gracza2);
		okno_gracza2->Dodaj(okno_gracza1);
		okno_gracza1->Show();
		
	}
	};
}

