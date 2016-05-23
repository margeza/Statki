#pragma once

namespace WindowsFormApplication1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Gracz
	/// </summary>
	public ref class Gracz : public System::Windows::Forms::Form
	{
	public:
		Gracz(String^ nazwa)
		{
			InitializeComponent();
			Text = nazwa;
			panel1->Enabled = false;
			
			//
			//TODO: Add the constructor code here
			//

			plansza->Add("_A1", false);
			plansza->Add("_A2", false);
			plansza->Add("_A3", false);
			plansza->Add("_A4", false);
			plansza->Add("_A5", false);
			plansza->Add("_A6", false);
			plansza->Add("_A7", false);
			plansza->Add("_A8", false);
			plansza->Add("_A9", false);
			plansza->Add("_A10", false);

			plansza->Add("_B1", false);
			plansza->Add("_B2", false);
			plansza->Add("_B3", false);
			plansza->Add("_B4", false);
			plansza->Add("_B5", false);
			plansza->Add("_B6", false);
			plansza->Add("_B7", false);
			plansza->Add("_B8", false);
			plansza->Add("_B9", false);
			plansza->Add("_B10", false);

			plansza->Add("_C1", false);
			plansza->Add("_C2", false);
			plansza->Add("_C3", false);
			plansza->Add("_C4", false);
			plansza->Add("_C5", false);
			plansza->Add("_C6", false);
			plansza->Add("_C7", false);
			plansza->Add("_C8", false);
			plansza->Add("_C9", false);
			plansza->Add("_C10", false);

			plansza->Add("_D1", false);
			plansza->Add("_D2", false);
			plansza->Add("_D3", false);
			plansza->Add("_D4", false);
			plansza->Add("_D5", false);
			plansza->Add("_D6", false);
			plansza->Add("_D7", false);
			plansza->Add("_D8", false);
			plansza->Add("_D9", false);
			plansza->Add("_D10", false);

			plansza->Add("_E1", false);
			plansza->Add("_E2", false);
			plansza->Add("_E3", false);
			plansza->Add("_E4", false);
			plansza->Add("_E5", false);
			plansza->Add("_E6", false);
			plansza->Add("_E7", false);
			plansza->Add("_E8", false);
			plansza->Add("_E9", false);
			plansza->Add("_E10", false);

			plansza->Add("_F1", false);
			plansza->Add("_F2", false);
			plansza->Add("_F3", false);
			plansza->Add("_F4", false);
			plansza->Add("_F5", false);
			plansza->Add("_F6", false);
			plansza->Add("_F7", false);
			plansza->Add("_F8", false);
			plansza->Add("_F9", false);
			plansza->Add("_F10", false);

			plansza->Add("_G1", false);
			plansza->Add("_G2", false);
			plansza->Add("_G3", false);
			plansza->Add("_G4", false);
			plansza->Add("_G5", false);
			plansza->Add("_G6", false);
			plansza->Add("_G7", false);
			plansza->Add("_G8", false);
			plansza->Add("_G9", false);
			plansza->Add("_G10", false);

			plansza->Add("_H1", false);
			plansza->Add("_H2", false);
			plansza->Add("_H3", false);
			plansza->Add("_H4", false);
			plansza->Add("_H5", false);
			plansza->Add("_H6", false);
			plansza->Add("_H7", false);
			plansza->Add("_H8", false);
			plansza->Add("_H9", false);
			plansza->Add("_H10", false);

			plansza->Add("_I1", false);
			plansza->Add("_I2", false);
			plansza->Add("_I3", false);
			plansza->Add("_I4", false);
			plansza->Add("_I5", false);
			plansza->Add("_I6", false);
			plansza->Add("_I7", false);
			plansza->Add("_I8", false);
			plansza->Add("_I9", false);
			plansza->Add("_I10", false);

			plansza->Add("_J1", false);
			plansza->Add("_J2", false);
			plansza->Add("_J3", false);
			plansza->Add("_J4", false);
			plansza->Add("_J5", false);
			plansza->Add("_J6", false);
			plansza->Add("_J7", false);
			plansza->Add("_J8", false);
			plansza->Add("_J9", false);
			plansza->Add("_J10", false);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Gracz()
		{
			if (components)
			{
				delete components;
			}
		}

	private: Gracz^ okno_drugiego_gracza;
	private: int licznik = 0;
	private: Generic::Dictionary<String^, Boolean>^ plansza = gcnew Generic::Dictionary<String^, Boolean>;
	

	private: System::Windows::Forms::Panel^  panel2;
	protected:
	private: System::Windows::Forms::Button^  _D1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  _A1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  _B1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  _C1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  _E1;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  _F1;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  _G1;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Button^  _H1;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Button^  _I1;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Button^  _J1;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Button^  _A2;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Button^  _B2;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Button^  _C2;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Button^  _D2;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Button^  _E2;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Button^  _F2;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Button^  _G2;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Button^  _H2;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Button^  _I2;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Button^  _J2;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Button^  _A3;
	private: System::Windows::Forms::Button^  _J10;
	private: System::Windows::Forms::Button^  _B3;
	private: System::Windows::Forms::Button^  _I10;
	private: System::Windows::Forms::Button^  _C3;
	private: System::Windows::Forms::Button^  _H10;
	private: System::Windows::Forms::Button^  _D3;
	private: System::Windows::Forms::Button^  _G10;
	private: System::Windows::Forms::Button^  _E3;
	private: System::Windows::Forms::Button^  _F10;
	private: System::Windows::Forms::Button^  _F3;
	private: System::Windows::Forms::Button^  _E10;
	private: System::Windows::Forms::Button^  _G3;
	private: System::Windows::Forms::Button^  _D10;
	private: System::Windows::Forms::Button^  _H3;
	private: System::Windows::Forms::Button^  _C10;
	private: System::Windows::Forms::Button^  _I3;
	private: System::Windows::Forms::Button^  _B10;
	private: System::Windows::Forms::Button^  _J3;
	private: System::Windows::Forms::Button^  _A10;
	private: System::Windows::Forms::Button^  _A4;
	private: System::Windows::Forms::Button^  _J9;
	private: System::Windows::Forms::Button^  _B4;
	private: System::Windows::Forms::Button^  _I9;
	private: System::Windows::Forms::Button^  _C4;
	private: System::Windows::Forms::Button^  _H9;
	private: System::Windows::Forms::Button^  _D4;
	private: System::Windows::Forms::Button^  _G9;
	private: System::Windows::Forms::Button^  _E4;
	private: System::Windows::Forms::Button^  _F9;
	private: System::Windows::Forms::Button^  _F4;
	private: System::Windows::Forms::Button^  _E9;
	private: System::Windows::Forms::Button^  _G4;
	private: System::Windows::Forms::Button^  _D9;
	private: System::Windows::Forms::Button^  _H4;
	private: System::Windows::Forms::Button^  _C9;
	private: System::Windows::Forms::Button^  _I4;
	private: System::Windows::Forms::Button^  _B9;
	private: System::Windows::Forms::Button^  _J4;
	private: System::Windows::Forms::Button^  _A9;
	private: System::Windows::Forms::Button^  _A5;
	private: System::Windows::Forms::Button^  _J8;
	private: System::Windows::Forms::Button^  _B5;
	private: System::Windows::Forms::Button^  _I8;
	private: System::Windows::Forms::Button^  _C5;
	private: System::Windows::Forms::Button^  _H8;
	private: System::Windows::Forms::Button^  _D5;
	private: System::Windows::Forms::Button^  _G8;
	private: System::Windows::Forms::Button^  _E5;
	private: System::Windows::Forms::Button^  _F8;
	private: System::Windows::Forms::Button^  _F5;
	private: System::Windows::Forms::Button^  _E8;
	private: System::Windows::Forms::Button^  _G5;
	private: System::Windows::Forms::Button^  _D8;
	private: System::Windows::Forms::Button^  _H5;
	private: System::Windows::Forms::Button^  _C8;
	private: System::Windows::Forms::Button^  _I5;
	private: System::Windows::Forms::Button^  _B8;
	private: System::Windows::Forms::Button^  _J5;
	private: System::Windows::Forms::Button^  _A8;
	private: System::Windows::Forms::Button^  _A6;
	private: System::Windows::Forms::Button^  _J7;
	private: System::Windows::Forms::Button^  _B6;
	private: System::Windows::Forms::Button^  _I7;
	private: System::Windows::Forms::Button^  _C6;
	private: System::Windows::Forms::Button^  _H7;
	private: System::Windows::Forms::Button^  _D6;
	private: System::Windows::Forms::Button^  _G7;
	private: System::Windows::Forms::Button^  _E6;
	private: System::Windows::Forms::Button^  _F7;
	private: System::Windows::Forms::Button^  _F6;
	private: System::Windows::Forms::Button^  _E7;
	private: System::Windows::Forms::Button^  _G6;
	private: System::Windows::Forms::Button^  _D7;
	private: System::Windows::Forms::Button^  _H6;
	private: System::Windows::Forms::Button^  _C7;
	private: System::Windows::Forms::Button^  _I6;
	private: System::Windows::Forms::Button^  _B7;
	private: System::Windows::Forms::Button^  _J6;
	private: System::Windows::Forms::Button^  _A7;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  D1;
	private: System::Windows::Forms::Label^  wiersz_10;
	private: System::Windows::Forms::Button^  A1;
	private: System::Windows::Forms::Label^  wiersz_9;
	private: System::Windows::Forms::Button^  B1;
	private: System::Windows::Forms::Label^  wiersz_8;
	private: System::Windows::Forms::Button^  C1;
	private: System::Windows::Forms::Label^  wiersz_7;
	private: System::Windows::Forms::Button^  E1;
	private: System::Windows::Forms::Label^  wiersz_6;
	private: System::Windows::Forms::Button^  F1;
	private: System::Windows::Forms::Label^  wiersz_5;
	private: System::Windows::Forms::Button^  G1;
	private: System::Windows::Forms::Label^  wiersz_4;
	private: System::Windows::Forms::Button^  H1;
	private: System::Windows::Forms::Label^  wiersz_3;
	private: System::Windows::Forms::Button^  I1;
	private: System::Windows::Forms::Label^  wiersz_2;
	private: System::Windows::Forms::Button^  J1;
	private: System::Windows::Forms::Label^  wiersz_1;
	private: System::Windows::Forms::Button^  A2;
	private: System::Windows::Forms::Label^  kolumna_J;
	private: System::Windows::Forms::Button^  B2;
	private: System::Windows::Forms::Label^  kolumna_I;
	private: System::Windows::Forms::Button^  C2;
	private: System::Windows::Forms::Label^  kolumna_H;
	private: System::Windows::Forms::Button^  D2;
	private: System::Windows::Forms::Label^  kolumna_G;
	private: System::Windows::Forms::Button^  E2;
	private: System::Windows::Forms::Label^  kolumna_F;
	private: System::Windows::Forms::Button^  F2;
	private: System::Windows::Forms::Label^  kolumna_E;
	private: System::Windows::Forms::Button^  G2;
	private: System::Windows::Forms::Label^  kolumna_D;
	private: System::Windows::Forms::Button^  H2;
	private: System::Windows::Forms::Label^  kolumna_C;
	private: System::Windows::Forms::Button^  I2;
	private: System::Windows::Forms::Label^  kolumna_B;
	private: System::Windows::Forms::Button^  J2;
	private: System::Windows::Forms::Label^  kolumna_A;
	private: System::Windows::Forms::Button^  A3;
	private: System::Windows::Forms::Button^  J10;
	private: System::Windows::Forms::Button^  B3;
	private: System::Windows::Forms::Button^  I10;
	private: System::Windows::Forms::Button^  C3;
	private: System::Windows::Forms::Button^  H10;
	private: System::Windows::Forms::Button^  D3;
	private: System::Windows::Forms::Button^  G10;
	private: System::Windows::Forms::Button^  E3;
	private: System::Windows::Forms::Button^  F10;
	private: System::Windows::Forms::Button^  F3;
	private: System::Windows::Forms::Button^  E10;
	private: System::Windows::Forms::Button^  G3;
	private: System::Windows::Forms::Button^  D10;
	private: System::Windows::Forms::Button^  H3;
	private: System::Windows::Forms::Button^  C10;
	private: System::Windows::Forms::Button^  I3;
	private: System::Windows::Forms::Button^  B10;
	private: System::Windows::Forms::Button^  J3;
	private: System::Windows::Forms::Button^  A10;
	private: System::Windows::Forms::Button^  A4;
	private: System::Windows::Forms::Button^  J9;
	private: System::Windows::Forms::Button^  B4;
	private: System::Windows::Forms::Button^  I9;
	private: System::Windows::Forms::Button^  C4;
	private: System::Windows::Forms::Button^  H9;
	private: System::Windows::Forms::Button^  D4;
	private: System::Windows::Forms::Button^  G9;
	private: System::Windows::Forms::Button^  E4;
	private: System::Windows::Forms::Button^  F9;
	private: System::Windows::Forms::Button^  F4;
	private: System::Windows::Forms::Button^  E9;
	private: System::Windows::Forms::Button^  G4;
	private: System::Windows::Forms::Button^  D9;
	private: System::Windows::Forms::Button^  H4;
	private: System::Windows::Forms::Button^  C9;
	private: System::Windows::Forms::Button^  I4;
	private: System::Windows::Forms::Button^  B9;
	private: System::Windows::Forms::Button^  J4;
	private: System::Windows::Forms::Button^  A9;
	private: System::Windows::Forms::Button^  A5;
	private: System::Windows::Forms::Button^  J8;
	private: System::Windows::Forms::Button^  B5;
	private: System::Windows::Forms::Button^  I8;
	private: System::Windows::Forms::Button^  C5;
	private: System::Windows::Forms::Button^  H8;
	private: System::Windows::Forms::Button^  D5;
	private: System::Windows::Forms::Button^  G8;
	private: System::Windows::Forms::Button^  E5;
	private: System::Windows::Forms::Button^  F8;
	private: System::Windows::Forms::Button^  F5;
	private: System::Windows::Forms::Button^  E8;
	private: System::Windows::Forms::Button^  G5;
	private: System::Windows::Forms::Button^  D8;
	private: System::Windows::Forms::Button^  H5;
	private: System::Windows::Forms::Button^  C8;
	private: System::Windows::Forms::Button^  I5;
	private: System::Windows::Forms::Button^  B8;
	private: System::Windows::Forms::Button^  J5;
	private: System::Windows::Forms::Button^  A8;
	private: System::Windows::Forms::Button^  A6;
	private: System::Windows::Forms::Button^  J7;
	private: System::Windows::Forms::Button^  B6;
	private: System::Windows::Forms::Button^  I7;
	private: System::Windows::Forms::Button^  C6;
	private: System::Windows::Forms::Button^  H7;
	private: System::Windows::Forms::Button^  D6;
	private: System::Windows::Forms::Button^  G7;
	private: System::Windows::Forms::Button^  E6;
	private: System::Windows::Forms::Button^  F7;
	private: System::Windows::Forms::Button^  F6;
	private: System::Windows::Forms::Button^  E7;
	private: System::Windows::Forms::Button^  G6;
	private: System::Windows::Forms::Button^  D7;
	private: System::Windows::Forms::Button^  H6;
	private: System::Windows::Forms::Button^  C7;
	private: System::Windows::Forms::Button^  I6;
	private: System::Windows::Forms::Button^  B7;
	private: System::Windows::Forms::Button^  J6;
	private: System::Windows::Forms::Button^  A7;

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
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->_D1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->_A1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->_B1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->_C1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->_E1 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->_F1 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->_G1 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->_H1 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->_I1 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->_J1 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->_A2 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->_B2 = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->_C2 = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->_D2 = (gcnew System::Windows::Forms::Button());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->_E2 = (gcnew System::Windows::Forms::Button());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->_F2 = (gcnew System::Windows::Forms::Button());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->_G2 = (gcnew System::Windows::Forms::Button());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->_H2 = (gcnew System::Windows::Forms::Button());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->_I2 = (gcnew System::Windows::Forms::Button());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->_J2 = (gcnew System::Windows::Forms::Button());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->_A3 = (gcnew System::Windows::Forms::Button());
			this->_J10 = (gcnew System::Windows::Forms::Button());
			this->_B3 = (gcnew System::Windows::Forms::Button());
			this->_I10 = (gcnew System::Windows::Forms::Button());
			this->_C3 = (gcnew System::Windows::Forms::Button());
			this->_H10 = (gcnew System::Windows::Forms::Button());
			this->_D3 = (gcnew System::Windows::Forms::Button());
			this->_G10 = (gcnew System::Windows::Forms::Button());
			this->_E3 = (gcnew System::Windows::Forms::Button());
			this->_F10 = (gcnew System::Windows::Forms::Button());
			this->_F3 = (gcnew System::Windows::Forms::Button());
			this->_E10 = (gcnew System::Windows::Forms::Button());
			this->_G3 = (gcnew System::Windows::Forms::Button());
			this->_D10 = (gcnew System::Windows::Forms::Button());
			this->_H3 = (gcnew System::Windows::Forms::Button());
			this->_C10 = (gcnew System::Windows::Forms::Button());
			this->_I3 = (gcnew System::Windows::Forms::Button());
			this->_B10 = (gcnew System::Windows::Forms::Button());
			this->_J3 = (gcnew System::Windows::Forms::Button());
			this->_A10 = (gcnew System::Windows::Forms::Button());
			this->_A4 = (gcnew System::Windows::Forms::Button());
			this->_J9 = (gcnew System::Windows::Forms::Button());
			this->_B4 = (gcnew System::Windows::Forms::Button());
			this->_I9 = (gcnew System::Windows::Forms::Button());
			this->_C4 = (gcnew System::Windows::Forms::Button());
			this->_H9 = (gcnew System::Windows::Forms::Button());
			this->_D4 = (gcnew System::Windows::Forms::Button());
			this->_G9 = (gcnew System::Windows::Forms::Button());
			this->_E4 = (gcnew System::Windows::Forms::Button());
			this->_F9 = (gcnew System::Windows::Forms::Button());
			this->_F4 = (gcnew System::Windows::Forms::Button());
			this->_E9 = (gcnew System::Windows::Forms::Button());
			this->_G4 = (gcnew System::Windows::Forms::Button());
			this->_D9 = (gcnew System::Windows::Forms::Button());
			this->_H4 = (gcnew System::Windows::Forms::Button());
			this->_C9 = (gcnew System::Windows::Forms::Button());
			this->_I4 = (gcnew System::Windows::Forms::Button());
			this->_B9 = (gcnew System::Windows::Forms::Button());
			this->_J4 = (gcnew System::Windows::Forms::Button());
			this->_A9 = (gcnew System::Windows::Forms::Button());
			this->_A5 = (gcnew System::Windows::Forms::Button());
			this->_J8 = (gcnew System::Windows::Forms::Button());
			this->_B5 = (gcnew System::Windows::Forms::Button());
			this->_I8 = (gcnew System::Windows::Forms::Button());
			this->_C5 = (gcnew System::Windows::Forms::Button());
			this->_H8 = (gcnew System::Windows::Forms::Button());
			this->_D5 = (gcnew System::Windows::Forms::Button());
			this->_G8 = (gcnew System::Windows::Forms::Button());
			this->_E5 = (gcnew System::Windows::Forms::Button());
			this->_F8 = (gcnew System::Windows::Forms::Button());
			this->_F5 = (gcnew System::Windows::Forms::Button());
			this->_E8 = (gcnew System::Windows::Forms::Button());
			this->_G5 = (gcnew System::Windows::Forms::Button());
			this->_D8 = (gcnew System::Windows::Forms::Button());
			this->_H5 = (gcnew System::Windows::Forms::Button());
			this->_C8 = (gcnew System::Windows::Forms::Button());
			this->_I5 = (gcnew System::Windows::Forms::Button());
			this->_B8 = (gcnew System::Windows::Forms::Button());
			this->_J5 = (gcnew System::Windows::Forms::Button());
			this->_A8 = (gcnew System::Windows::Forms::Button());
			this->_A6 = (gcnew System::Windows::Forms::Button());
			this->_J7 = (gcnew System::Windows::Forms::Button());
			this->_B6 = (gcnew System::Windows::Forms::Button());
			this->_I7 = (gcnew System::Windows::Forms::Button());
			this->_C6 = (gcnew System::Windows::Forms::Button());
			this->_H7 = (gcnew System::Windows::Forms::Button());
			this->_D6 = (gcnew System::Windows::Forms::Button());
			this->_G7 = (gcnew System::Windows::Forms::Button());
			this->_E6 = (gcnew System::Windows::Forms::Button());
			this->_F7 = (gcnew System::Windows::Forms::Button());
			this->_F6 = (gcnew System::Windows::Forms::Button());
			this->_E7 = (gcnew System::Windows::Forms::Button());
			this->_G6 = (gcnew System::Windows::Forms::Button());
			this->_D7 = (gcnew System::Windows::Forms::Button());
			this->_H6 = (gcnew System::Windows::Forms::Button());
			this->_C7 = (gcnew System::Windows::Forms::Button());
			this->_I6 = (gcnew System::Windows::Forms::Button());
			this->_B7 = (gcnew System::Windows::Forms::Button());
			this->_J6 = (gcnew System::Windows::Forms::Button());
			this->_A7 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->D1 = (gcnew System::Windows::Forms::Button());
			this->wiersz_10 = (gcnew System::Windows::Forms::Label());
			this->A1 = (gcnew System::Windows::Forms::Button());
			this->wiersz_9 = (gcnew System::Windows::Forms::Label());
			this->B1 = (gcnew System::Windows::Forms::Button());
			this->wiersz_8 = (gcnew System::Windows::Forms::Label());
			this->C1 = (gcnew System::Windows::Forms::Button());
			this->wiersz_7 = (gcnew System::Windows::Forms::Label());
			this->E1 = (gcnew System::Windows::Forms::Button());
			this->wiersz_6 = (gcnew System::Windows::Forms::Label());
			this->F1 = (gcnew System::Windows::Forms::Button());
			this->wiersz_5 = (gcnew System::Windows::Forms::Label());
			this->G1 = (gcnew System::Windows::Forms::Button());
			this->wiersz_4 = (gcnew System::Windows::Forms::Label());
			this->H1 = (gcnew System::Windows::Forms::Button());
			this->wiersz_3 = (gcnew System::Windows::Forms::Label());
			this->I1 = (gcnew System::Windows::Forms::Button());
			this->wiersz_2 = (gcnew System::Windows::Forms::Label());
			this->J1 = (gcnew System::Windows::Forms::Button());
			this->wiersz_1 = (gcnew System::Windows::Forms::Label());
			this->A2 = (gcnew System::Windows::Forms::Button());
			this->kolumna_J = (gcnew System::Windows::Forms::Label());
			this->B2 = (gcnew System::Windows::Forms::Button());
			this->kolumna_I = (gcnew System::Windows::Forms::Label());
			this->C2 = (gcnew System::Windows::Forms::Button());
			this->kolumna_H = (gcnew System::Windows::Forms::Label());
			this->D2 = (gcnew System::Windows::Forms::Button());
			this->kolumna_G = (gcnew System::Windows::Forms::Label());
			this->E2 = (gcnew System::Windows::Forms::Button());
			this->kolumna_F = (gcnew System::Windows::Forms::Label());
			this->F2 = (gcnew System::Windows::Forms::Button());
			this->kolumna_E = (gcnew System::Windows::Forms::Label());
			this->G2 = (gcnew System::Windows::Forms::Button());
			this->kolumna_D = (gcnew System::Windows::Forms::Label());
			this->H2 = (gcnew System::Windows::Forms::Button());
			this->kolumna_C = (gcnew System::Windows::Forms::Label());
			this->I2 = (gcnew System::Windows::Forms::Button());
			this->kolumna_B = (gcnew System::Windows::Forms::Label());
			this->J2 = (gcnew System::Windows::Forms::Button());
			this->kolumna_A = (gcnew System::Windows::Forms::Label());
			this->A3 = (gcnew System::Windows::Forms::Button());
			this->J10 = (gcnew System::Windows::Forms::Button());
			this->B3 = (gcnew System::Windows::Forms::Button());
			this->I10 = (gcnew System::Windows::Forms::Button());
			this->C3 = (gcnew System::Windows::Forms::Button());
			this->H10 = (gcnew System::Windows::Forms::Button());
			this->D3 = (gcnew System::Windows::Forms::Button());
			this->G10 = (gcnew System::Windows::Forms::Button());
			this->E3 = (gcnew System::Windows::Forms::Button());
			this->F10 = (gcnew System::Windows::Forms::Button());
			this->F3 = (gcnew System::Windows::Forms::Button());
			this->E10 = (gcnew System::Windows::Forms::Button());
			this->G3 = (gcnew System::Windows::Forms::Button());
			this->D10 = (gcnew System::Windows::Forms::Button());
			this->H3 = (gcnew System::Windows::Forms::Button());
			this->C10 = (gcnew System::Windows::Forms::Button());
			this->I3 = (gcnew System::Windows::Forms::Button());
			this->B10 = (gcnew System::Windows::Forms::Button());
			this->J3 = (gcnew System::Windows::Forms::Button());
			this->A10 = (gcnew System::Windows::Forms::Button());
			this->A4 = (gcnew System::Windows::Forms::Button());
			this->J9 = (gcnew System::Windows::Forms::Button());
			this->B4 = (gcnew System::Windows::Forms::Button());
			this->I9 = (gcnew System::Windows::Forms::Button());
			this->C4 = (gcnew System::Windows::Forms::Button());
			this->H9 = (gcnew System::Windows::Forms::Button());
			this->D4 = (gcnew System::Windows::Forms::Button());
			this->G9 = (gcnew System::Windows::Forms::Button());
			this->E4 = (gcnew System::Windows::Forms::Button());
			this->F9 = (gcnew System::Windows::Forms::Button());
			this->F4 = (gcnew System::Windows::Forms::Button());
			this->E9 = (gcnew System::Windows::Forms::Button());
			this->G4 = (gcnew System::Windows::Forms::Button());
			this->D9 = (gcnew System::Windows::Forms::Button());
			this->H4 = (gcnew System::Windows::Forms::Button());
			this->C9 = (gcnew System::Windows::Forms::Button());
			this->I4 = (gcnew System::Windows::Forms::Button());
			this->B9 = (gcnew System::Windows::Forms::Button());
			this->J4 = (gcnew System::Windows::Forms::Button());
			this->A9 = (gcnew System::Windows::Forms::Button());
			this->A5 = (gcnew System::Windows::Forms::Button());
			this->J8 = (gcnew System::Windows::Forms::Button());
			this->B5 = (gcnew System::Windows::Forms::Button());
			this->I8 = (gcnew System::Windows::Forms::Button());
			this->C5 = (gcnew System::Windows::Forms::Button());
			this->H8 = (gcnew System::Windows::Forms::Button());
			this->D5 = (gcnew System::Windows::Forms::Button());
			this->G8 = (gcnew System::Windows::Forms::Button());
			this->E5 = (gcnew System::Windows::Forms::Button());
			this->F8 = (gcnew System::Windows::Forms::Button());
			this->F5 = (gcnew System::Windows::Forms::Button());
			this->E8 = (gcnew System::Windows::Forms::Button());
			this->G5 = (gcnew System::Windows::Forms::Button());
			this->D8 = (gcnew System::Windows::Forms::Button());
			this->H5 = (gcnew System::Windows::Forms::Button());
			this->C8 = (gcnew System::Windows::Forms::Button());
			this->I5 = (gcnew System::Windows::Forms::Button());
			this->B8 = (gcnew System::Windows::Forms::Button());
			this->J5 = (gcnew System::Windows::Forms::Button());
			this->A8 = (gcnew System::Windows::Forms::Button());
			this->A6 = (gcnew System::Windows::Forms::Button());
			this->J7 = (gcnew System::Windows::Forms::Button());
			this->B6 = (gcnew System::Windows::Forms::Button());
			this->I7 = (gcnew System::Windows::Forms::Button());
			this->C6 = (gcnew System::Windows::Forms::Button());
			this->H7 = (gcnew System::Windows::Forms::Button());
			this->D6 = (gcnew System::Windows::Forms::Button());
			this->G7 = (gcnew System::Windows::Forms::Button());
			this->E6 = (gcnew System::Windows::Forms::Button());
			this->F7 = (gcnew System::Windows::Forms::Button());
			this->F6 = (gcnew System::Windows::Forms::Button());
			this->E7 = (gcnew System::Windows::Forms::Button());
			this->G6 = (gcnew System::Windows::Forms::Button());
			this->D7 = (gcnew System::Windows::Forms::Button());
			this->H6 = (gcnew System::Windows::Forms::Button());
			this->C7 = (gcnew System::Windows::Forms::Button());
			this->I6 = (gcnew System::Windows::Forms::Button());
			this->B7 = (gcnew System::Windows::Forms::Button());
			this->J6 = (gcnew System::Windows::Forms::Button());
			this->A7 = (gcnew System::Windows::Forms::Button());
			this->panel2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->_D1);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->_A1);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->_B1);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->_C1);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->_E1);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->_F1);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->_G1);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->_H1);
			this->panel2->Controls->Add(this->label8);
			this->panel2->Controls->Add(this->_I1);
			this->panel2->Controls->Add(this->label9);
			this->panel2->Controls->Add(this->_J1);
			this->panel2->Controls->Add(this->label10);
			this->panel2->Controls->Add(this->_A2);
			this->panel2->Controls->Add(this->label11);
			this->panel2->Controls->Add(this->_B2);
			this->panel2->Controls->Add(this->label12);
			this->panel2->Controls->Add(this->_C2);
			this->panel2->Controls->Add(this->label13);
			this->panel2->Controls->Add(this->_D2);
			this->panel2->Controls->Add(this->label14);
			this->panel2->Controls->Add(this->_E2);
			this->panel2->Controls->Add(this->label15);
			this->panel2->Controls->Add(this->_F2);
			this->panel2->Controls->Add(this->label16);
			this->panel2->Controls->Add(this->_G2);
			this->panel2->Controls->Add(this->label17);
			this->panel2->Controls->Add(this->_H2);
			this->panel2->Controls->Add(this->label18);
			this->panel2->Controls->Add(this->_I2);
			this->panel2->Controls->Add(this->label19);
			this->panel2->Controls->Add(this->_J2);
			this->panel2->Controls->Add(this->label20);
			this->panel2->Controls->Add(this->_A3);
			this->panel2->Controls->Add(this->_J10);
			this->panel2->Controls->Add(this->_B3);
			this->panel2->Controls->Add(this->_I10);
			this->panel2->Controls->Add(this->_C3);
			this->panel2->Controls->Add(this->_H10);
			this->panel2->Controls->Add(this->_D3);
			this->panel2->Controls->Add(this->_G10);
			this->panel2->Controls->Add(this->_E3);
			this->panel2->Controls->Add(this->_F10);
			this->panel2->Controls->Add(this->_F3);
			this->panel2->Controls->Add(this->_E10);
			this->panel2->Controls->Add(this->_G3);
			this->panel2->Controls->Add(this->_D10);
			this->panel2->Controls->Add(this->_H3);
			this->panel2->Controls->Add(this->_C10);
			this->panel2->Controls->Add(this->_I3);
			this->panel2->Controls->Add(this->_B10);
			this->panel2->Controls->Add(this->_J3);
			this->panel2->Controls->Add(this->_A10);
			this->panel2->Controls->Add(this->_A4);
			this->panel2->Controls->Add(this->_J9);
			this->panel2->Controls->Add(this->_B4);
			this->panel2->Controls->Add(this->_I9);
			this->panel2->Controls->Add(this->_C4);
			this->panel2->Controls->Add(this->_H9);
			this->panel2->Controls->Add(this->_D4);
			this->panel2->Controls->Add(this->_G9);
			this->panel2->Controls->Add(this->_E4);
			this->panel2->Controls->Add(this->_F9);
			this->panel2->Controls->Add(this->_F4);
			this->panel2->Controls->Add(this->_E9);
			this->panel2->Controls->Add(this->_G4);
			this->panel2->Controls->Add(this->_D9);
			this->panel2->Controls->Add(this->_H4);
			this->panel2->Controls->Add(this->_C9);
			this->panel2->Controls->Add(this->_I4);
			this->panel2->Controls->Add(this->_B9);
			this->panel2->Controls->Add(this->_J4);
			this->panel2->Controls->Add(this->_A9);
			this->panel2->Controls->Add(this->_A5);
			this->panel2->Controls->Add(this->_J8);
			this->panel2->Controls->Add(this->_B5);
			this->panel2->Controls->Add(this->_I8);
			this->panel2->Controls->Add(this->_C5);
			this->panel2->Controls->Add(this->_H8);
			this->panel2->Controls->Add(this->_D5);
			this->panel2->Controls->Add(this->_G8);
			this->panel2->Controls->Add(this->_E5);
			this->panel2->Controls->Add(this->_F8);
			this->panel2->Controls->Add(this->_F5);
			this->panel2->Controls->Add(this->_E8);
			this->panel2->Controls->Add(this->_G5);
			this->panel2->Controls->Add(this->_D8);
			this->panel2->Controls->Add(this->_H5);
			this->panel2->Controls->Add(this->_C8);
			this->panel2->Controls->Add(this->_I5);
			this->panel2->Controls->Add(this->_B8);
			this->panel2->Controls->Add(this->_J5);
			this->panel2->Controls->Add(this->_A8);
			this->panel2->Controls->Add(this->_A6);
			this->panel2->Controls->Add(this->_J7);
			this->panel2->Controls->Add(this->_B6);
			this->panel2->Controls->Add(this->_I7);
			this->panel2->Controls->Add(this->_C6);
			this->panel2->Controls->Add(this->_H7);
			this->panel2->Controls->Add(this->_D6);
			this->panel2->Controls->Add(this->_G7);
			this->panel2->Controls->Add(this->_E6);
			this->panel2->Controls->Add(this->_F7);
			this->panel2->Controls->Add(this->_F6);
			this->panel2->Controls->Add(this->_E7);
			this->panel2->Controls->Add(this->_G6);
			this->panel2->Controls->Add(this->_D7);
			this->panel2->Controls->Add(this->_H6);
			this->panel2->Controls->Add(this->_C7);
			this->panel2->Controls->Add(this->_I6);
			this->panel2->Controls->Add(this->_B7);
			this->panel2->Controls->Add(this->_J6);
			this->panel2->Controls->Add(this->_A7);
			this->panel2->Location = System::Drawing::Point(24, 22);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(361, 350);
			this->panel2->TabIndex = 123;
			// 
			// _D1
			// 
			this->_D1->Location = System::Drawing::Point(127, 38);
			this->_D1->Name = L"_D1";
			this->_D1->Size = System::Drawing::Size(24, 24);
			this->_D1->TabIndex = 3;
			this->_D1->TabStop = false;
			this->_D1->UseVisualStyleBackColor = true;
			this->_D1->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(19, 313);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(19, 13);
			this->label1->TabIndex = 119;
			this->label1->Text = L"10";
			// 
			// _A1
			// 
			this->_A1->Location = System::Drawing::Point(37, 38);
			this->_A1->Name = L"_A1";
			this->_A1->Size = System::Drawing::Size(24, 24);
			this->_A1->TabIndex = 0;
			this->_A1->TabStop = false;
			this->_A1->UseVisualStyleBackColor = true;
			this->_A1->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(25, 283);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(13, 13);
			this->label2->TabIndex = 118;
			this->label2->Text = L"9";
			// 
			// _B1
			// 
			this->_B1->Location = System::Drawing::Point(67, 38);
			this->_B1->Name = L"_B1";
			this->_B1->Size = System::Drawing::Size(24, 24);
			this->_B1->TabIndex = 1;
			this->_B1->TabStop = false;
			this->_B1->UseVisualStyleBackColor = true;
			this->_B1->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(25, 253);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(13, 13);
			this->label3->TabIndex = 117;
			this->label3->Text = L"8";
			// 
			// _C1
			// 
			this->_C1->Location = System::Drawing::Point(97, 38);
			this->_C1->Name = L"_C1";
			this->_C1->Size = System::Drawing::Size(24, 24);
			this->_C1->TabIndex = 2;
			this->_C1->TabStop = false;
			this->_C1->UseVisualStyleBackColor = true;
			this->_C1->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(25, 223);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(13, 13);
			this->label4->TabIndex = 116;
			this->label4->Text = L"7";
			// 
			// _E1
			// 
			this->_E1->Location = System::Drawing::Point(157, 38);
			this->_E1->Name = L"_E1";
			this->_E1->Size = System::Drawing::Size(24, 24);
			this->_E1->TabIndex = 4;
			this->_E1->TabStop = false;
			this->_E1->UseVisualStyleBackColor = true;
			this->_E1->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(25, 193);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(13, 13);
			this->label5->TabIndex = 115;
			this->label5->Text = L"6";
			// 
			// _F1
			// 
			this->_F1->Location = System::Drawing::Point(187, 38);
			this->_F1->Name = L"_F1";
			this->_F1->Size = System::Drawing::Size(24, 24);
			this->_F1->TabIndex = 5;
			this->_F1->TabStop = false;
			this->_F1->UseVisualStyleBackColor = true;
			this->_F1->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(25, 164);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(13, 13);
			this->label6->TabIndex = 114;
			this->label6->Text = L"5";
			// 
			// _G1
			// 
			this->_G1->Location = System::Drawing::Point(217, 38);
			this->_G1->Name = L"_G1";
			this->_G1->Size = System::Drawing::Size(24, 24);
			this->_G1->TabIndex = 6;
			this->_G1->TabStop = false;
			this->_G1->UseVisualStyleBackColor = true;
			this->_G1->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(25, 134);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(13, 13);
			this->label7->TabIndex = 113;
			this->label7->Text = L"4";
			// 
			// _H1
			// 
			this->_H1->Location = System::Drawing::Point(247, 38);
			this->_H1->Name = L"_H1";
			this->_H1->Size = System::Drawing::Size(24, 24);
			this->_H1->TabIndex = 7;
			this->_H1->TabStop = false;
			this->_H1->UseVisualStyleBackColor = true;
			this->_H1->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(25, 104);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(13, 13);
			this->label8->TabIndex = 112;
			this->label8->Text = L"3";
			// 
			// _I1
			// 
			this->_I1->Location = System::Drawing::Point(277, 38);
			this->_I1->Name = L"_I1";
			this->_I1->Size = System::Drawing::Size(24, 24);
			this->_I1->TabIndex = 8;
			this->_I1->TabStop = false;
			this->_I1->UseVisualStyleBackColor = true;
			this->_I1->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(25, 74);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(13, 13);
			this->label9->TabIndex = 111;
			this->label9->Text = L"2";
			// 
			// _J1
			// 
			this->_J1->Location = System::Drawing::Point(307, 38);
			this->_J1->Name = L"_J1";
			this->_J1->Size = System::Drawing::Size(24, 24);
			this->_J1->TabIndex = 9;
			this->_J1->TabStop = false;
			this->_J1->UseVisualStyleBackColor = true;
			this->_J1->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(25, 44);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(13, 13);
			this->label10->TabIndex = 110;
			this->label10->Text = L"1";
			// 
			// _A2
			// 
			this->_A2->Location = System::Drawing::Point(37, 68);
			this->_A2->Name = L"_A2";
			this->_A2->Size = System::Drawing::Size(24, 24);
			this->_A2->TabIndex = 10;
			this->_A2->TabStop = false;
			this->_A2->UseVisualStyleBackColor = true;
			this->_A2->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(319, 22);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(12, 13);
			this->label11->TabIndex = 109;
			this->label11->Text = L"J";
			// 
			// _B2
			// 
			this->_B2->Location = System::Drawing::Point(67, 68);
			this->_B2->Name = L"_B2";
			this->_B2->Size = System::Drawing::Size(24, 24);
			this->_B2->TabIndex = 11;
			this->_B2->TabStop = false;
			this->_B2->UseVisualStyleBackColor = true;
			this->_B2->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(291, 22);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(10, 13);
			this->label12->TabIndex = 108;
			this->label12->Text = L"I";
			// 
			// _C2
			// 
			this->_C2->Location = System::Drawing::Point(97, 68);
			this->_C2->Name = L"_C2";
			this->_C2->Size = System::Drawing::Size(24, 24);
			this->_C2->TabIndex = 12;
			this->_C2->TabStop = false;
			this->_C2->UseVisualStyleBackColor = true;
			this->_C2->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(256, 22);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(15, 13);
			this->label13->TabIndex = 107;
			this->label13->Text = L"H";
			// 
			// _D2
			// 
			this->_D2->Location = System::Drawing::Point(127, 68);
			this->_D2->Name = L"_D2";
			this->_D2->Size = System::Drawing::Size(24, 24);
			this->_D2->TabIndex = 13;
			this->_D2->TabStop = false;
			this->_D2->UseVisualStyleBackColor = true;
			this->_D2->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(226, 22);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(15, 13);
			this->label14->TabIndex = 106;
			this->label14->Text = L"G";
			// 
			// _E2
			// 
			this->_E2->Location = System::Drawing::Point(157, 68);
			this->_E2->Name = L"_E2";
			this->_E2->Size = System::Drawing::Size(24, 24);
			this->_E2->TabIndex = 14;
			this->_E2->TabStop = false;
			this->_E2->UseVisualStyleBackColor = true;
			this->_E2->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(198, 22);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(13, 13);
			this->label15->TabIndex = 105;
			this->label15->Text = L"F";
			// 
			// _F2
			// 
			this->_F2->Location = System::Drawing::Point(187, 68);
			this->_F2->Name = L"_F2";
			this->_F2->Size = System::Drawing::Size(24, 24);
			this->_F2->TabIndex = 15;
			this->_F2->TabStop = false;
			this->_F2->UseVisualStyleBackColor = true;
			this->_F2->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(167, 22);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(14, 13);
			this->label16->TabIndex = 104;
			this->label16->Text = L"E";
			// 
			// _G2
			// 
			this->_G2->Location = System::Drawing::Point(217, 68);
			this->_G2->Name = L"_G2";
			this->_G2->Size = System::Drawing::Size(24, 24);
			this->_G2->TabIndex = 16;
			this->_G2->TabStop = false;
			this->_G2->UseVisualStyleBackColor = true;
			this->_G2->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(136, 22);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(15, 13);
			this->label17->TabIndex = 103;
			this->label17->Text = L"D";
			// 
			// _H2
			// 
			this->_H2->Location = System::Drawing::Point(247, 68);
			this->_H2->Name = L"_H2";
			this->_H2->Size = System::Drawing::Size(24, 24);
			this->_H2->TabIndex = 17;
			this->_H2->TabStop = false;
			this->_H2->UseVisualStyleBackColor = true;
			this->_H2->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(104, 22);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(14, 13);
			this->label18->TabIndex = 102;
			this->label18->Text = L"C";
			// 
			// _I2
			// 
			this->_I2->Location = System::Drawing::Point(277, 68);
			this->_I2->Name = L"_I2";
			this->_I2->Size = System::Drawing::Size(24, 24);
			this->_I2->TabIndex = 18;
			this->_I2->TabStop = false;
			this->_I2->UseVisualStyleBackColor = true;
			this->_I2->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(74, 22);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(14, 13);
			this->label19->TabIndex = 101;
			this->label19->Text = L"B";
			// 
			// _J2
			// 
			this->_J2->Location = System::Drawing::Point(307, 68);
			this->_J2->Name = L"_J2";
			this->_J2->Size = System::Drawing::Size(24, 24);
			this->_J2->TabIndex = 19;
			this->_J2->TabStop = false;
			this->_J2->UseVisualStyleBackColor = true;
			this->_J2->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(47, 22);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(14, 13);
			this->label20->TabIndex = 100;
			this->label20->Text = L"A";
			// 
			// _A3
			// 
			this->_A3->Location = System::Drawing::Point(37, 98);
			this->_A3->Name = L"_A3";
			this->_A3->Size = System::Drawing::Size(24, 24);
			this->_A3->TabIndex = 20;
			this->_A3->TabStop = false;
			this->_A3->UseVisualStyleBackColor = true;
			this->_A3->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// _J10
			// 
			this->_J10->Location = System::Drawing::Point(307, 307);
			this->_J10->Name = L"_J10";
			this->_J10->Size = System::Drawing::Size(24, 24);
			this->_J10->TabIndex = 99;
			this->_J10->TabStop = false;
			this->_J10->UseVisualStyleBackColor = true;
			this->_J10->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// _B3
			// 
			this->_B3->Location = System::Drawing::Point(67, 98);
			this->_B3->Name = L"_B3";
			this->_B3->Size = System::Drawing::Size(24, 24);
			this->_B3->TabIndex = 21;
			this->_B3->TabStop = false;
			this->_B3->UseVisualStyleBackColor = true;
			this->_B3->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// _I10
			// 
			this->_I10->Location = System::Drawing::Point(277, 307);
			this->_I10->Name = L"_I10";
			this->_I10->Size = System::Drawing::Size(24, 24);
			this->_I10->TabIndex = 98;
			this->_I10->TabStop = false;
			this->_I10->UseVisualStyleBackColor = true;
			this->_I10->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// _C3
			// 
			this->_C3->Location = System::Drawing::Point(97, 98);
			this->_C3->Name = L"_C3";
			this->_C3->Size = System::Drawing::Size(24, 24);
			this->_C3->TabIndex = 22;
			this->_C3->TabStop = false;
			this->_C3->UseVisualStyleBackColor = true;
			this->_C3->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// _H10
			// 
			this->_H10->Location = System::Drawing::Point(247, 307);
			this->_H10->Name = L"_H10";
			this->_H10->Size = System::Drawing::Size(24, 24);
			this->_H10->TabIndex = 97;
			this->_H10->TabStop = false;
			this->_H10->UseVisualStyleBackColor = true;
			this->_H10->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// _D3
			// 
			this->_D3->Location = System::Drawing::Point(127, 98);
			this->_D3->Name = L"_D3";
			this->_D3->Size = System::Drawing::Size(24, 24);
			this->_D3->TabIndex = 23;
			this->_D3->TabStop = false;
			this->_D3->UseVisualStyleBackColor = true;
			this->_D3->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// _G10
			// 
			this->_G10->Location = System::Drawing::Point(217, 307);
			this->_G10->Name = L"_G10";
			this->_G10->Size = System::Drawing::Size(24, 24);
			this->_G10->TabIndex = 96;
			this->_G10->TabStop = false;
			this->_G10->UseVisualStyleBackColor = true;
			this->_G10->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// _E3
			// 
			this->_E3->Location = System::Drawing::Point(157, 98);
			this->_E3->Name = L"_E3";
			this->_E3->Size = System::Drawing::Size(24, 24);
			this->_E3->TabIndex = 24;
			this->_E3->TabStop = false;
			this->_E3->UseVisualStyleBackColor = true;
			this->_E3->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// _F10
			// 
			this->_F10->Location = System::Drawing::Point(187, 307);
			this->_F10->Name = L"_F10";
			this->_F10->Size = System::Drawing::Size(24, 24);
			this->_F10->TabIndex = 95;
			this->_F10->TabStop = false;
			this->_F10->UseVisualStyleBackColor = true;
			this->_F10->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// _F3
			// 
			this->_F3->Location = System::Drawing::Point(187, 98);
			this->_F3->Name = L"_F3";
			this->_F3->Size = System::Drawing::Size(24, 24);
			this->_F3->TabIndex = 25;
			this->_F3->TabStop = false;
			this->_F3->UseVisualStyleBackColor = true;
			this->_F3->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// _E10
			// 
			this->_E10->Location = System::Drawing::Point(157, 307);
			this->_E10->Name = L"_E10";
			this->_E10->Size = System::Drawing::Size(24, 24);
			this->_E10->TabIndex = 94;
			this->_E10->TabStop = false;
			this->_E10->UseVisualStyleBackColor = true;
			this->_E10->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// _G3
			// 
			this->_G3->Location = System::Drawing::Point(217, 98);
			this->_G3->Name = L"_G3";
			this->_G3->Size = System::Drawing::Size(24, 24);
			this->_G3->TabIndex = 26;
			this->_G3->TabStop = false;
			this->_G3->UseVisualStyleBackColor = true;
			this->_G3->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// _D10
			// 
			this->_D10->Location = System::Drawing::Point(127, 307);
			this->_D10->Name = L"_D10";
			this->_D10->Size = System::Drawing::Size(24, 24);
			this->_D10->TabIndex = 93;
			this->_D10->TabStop = false;
			this->_D10->UseVisualStyleBackColor = true;
			this->_D10->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// _H3
			// 
			this->_H3->Location = System::Drawing::Point(247, 98);
			this->_H3->Name = L"_H3";
			this->_H3->Size = System::Drawing::Size(24, 24);
			this->_H3->TabIndex = 27;
			this->_H3->TabStop = false;
			this->_H3->UseVisualStyleBackColor = true;
			this->_H3->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// _C10
			// 
			this->_C10->Location = System::Drawing::Point(97, 307);
			this->_C10->Name = L"_C10";
			this->_C10->Size = System::Drawing::Size(24, 24);
			this->_C10->TabIndex = 92;
			this->_C10->TabStop = false;
			this->_C10->UseVisualStyleBackColor = true;
			this->_C10->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// _I3
			// 
			this->_I3->Location = System::Drawing::Point(277, 98);
			this->_I3->Name = L"_I3";
			this->_I3->Size = System::Drawing::Size(24, 24);
			this->_I3->TabIndex = 28;
			this->_I3->TabStop = false;
			this->_I3->UseVisualStyleBackColor = true;
			this->_I3->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// _B10
			// 
			this->_B10->Location = System::Drawing::Point(67, 307);
			this->_B10->Name = L"_B10";
			this->_B10->Size = System::Drawing::Size(24, 24);
			this->_B10->TabIndex = 91;
			this->_B10->TabStop = false;
			this->_B10->UseVisualStyleBackColor = true;
			this->_B10->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// _J3
			// 
			this->_J3->Location = System::Drawing::Point(307, 98);
			this->_J3->Name = L"_J3";
			this->_J3->Size = System::Drawing::Size(24, 24);
			this->_J3->TabIndex = 29;
			this->_J3->TabStop = false;
			this->_J3->UseVisualStyleBackColor = true;
			this->_J3->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// _A10
			// 
			this->_A10->Location = System::Drawing::Point(37, 307);
			this->_A10->Name = L"_A10";
			this->_A10->Size = System::Drawing::Size(24, 24);
			this->_A10->TabIndex = 90;
			this->_A10->TabStop = false;
			this->_A10->UseVisualStyleBackColor = true;
			this->_A10->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// _A4
			// 
			this->_A4->Location = System::Drawing::Point(37, 128);
			this->_A4->Name = L"_A4";
			this->_A4->Size = System::Drawing::Size(24, 24);
			this->_A4->TabIndex = 30;
			this->_A4->TabStop = false;
			this->_A4->UseVisualStyleBackColor = true;
			this->_A4->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// _J9
			// 
			this->_J9->Location = System::Drawing::Point(307, 277);
			this->_J9->Name = L"_J9";
			this->_J9->Size = System::Drawing::Size(24, 24);
			this->_J9->TabIndex = 89;
			this->_J9->TabStop = false;
			this->_J9->UseVisualStyleBackColor = true;
			this->_J9->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// _B4
			// 
			this->_B4->Location = System::Drawing::Point(67, 128);
			this->_B4->Name = L"_B4";
			this->_B4->Size = System::Drawing::Size(24, 24);
			this->_B4->TabIndex = 31;
			this->_B4->TabStop = false;
			this->_B4->UseVisualStyleBackColor = true;
			this->_B4->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// _I9
			// 
			this->_I9->Location = System::Drawing::Point(277, 277);
			this->_I9->Name = L"_I9";
			this->_I9->Size = System::Drawing::Size(24, 24);
			this->_I9->TabIndex = 88;
			this->_I9->TabStop = false;
			this->_I9->UseVisualStyleBackColor = true;
			this->_I9->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// _C4
			// 
			this->_C4->Location = System::Drawing::Point(97, 128);
			this->_C4->Name = L"_C4";
			this->_C4->Size = System::Drawing::Size(24, 24);
			this->_C4->TabIndex = 32;
			this->_C4->TabStop = false;
			this->_C4->UseVisualStyleBackColor = true;
			this->_C4->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// _H9
			// 
			this->_H9->Location = System::Drawing::Point(247, 277);
			this->_H9->Name = L"_H9";
			this->_H9->Size = System::Drawing::Size(24, 24);
			this->_H9->TabIndex = 87;
			this->_H9->TabStop = false;
			this->_H9->UseVisualStyleBackColor = true;
			this->_H9->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// _D4
			// 
			this->_D4->Location = System::Drawing::Point(127, 128);
			this->_D4->Name = L"_D4";
			this->_D4->Size = System::Drawing::Size(24, 24);
			this->_D4->TabIndex = 33;
			this->_D4->TabStop = false;
			this->_D4->UseVisualStyleBackColor = true;
			this->_D4->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// _G9
			// 
			this->_G9->Location = System::Drawing::Point(217, 277);
			this->_G9->Name = L"_G9";
			this->_G9->Size = System::Drawing::Size(24, 24);
			this->_G9->TabIndex = 86;
			this->_G9->TabStop = false;
			this->_G9->UseVisualStyleBackColor = true;
			this->_G9->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// _E4
			// 
			this->_E4->Location = System::Drawing::Point(157, 128);
			this->_E4->Name = L"_E4";
			this->_E4->Size = System::Drawing::Size(24, 24);
			this->_E4->TabIndex = 34;
			this->_E4->TabStop = false;
			this->_E4->UseVisualStyleBackColor = true;
			this->_E4->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// _F9
			// 
			this->_F9->Location = System::Drawing::Point(187, 277);
			this->_F9->Name = L"_F9";
			this->_F9->Size = System::Drawing::Size(24, 24);
			this->_F9->TabIndex = 85;
			this->_F9->TabStop = false;
			this->_F9->UseVisualStyleBackColor = true;
			this->_F9->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// _F4
			// 
			this->_F4->Location = System::Drawing::Point(187, 128);
			this->_F4->Name = L"_F4";
			this->_F4->Size = System::Drawing::Size(24, 24);
			this->_F4->TabIndex = 35;
			this->_F4->TabStop = false;
			this->_F4->UseVisualStyleBackColor = true;
			this->_F4->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// _E9
			// 
			this->_E9->Location = System::Drawing::Point(157, 277);
			this->_E9->Name = L"_E9";
			this->_E9->Size = System::Drawing::Size(24, 24);
			this->_E9->TabIndex = 84;
			this->_E9->TabStop = false;
			this->_E9->UseVisualStyleBackColor = true;
			this->_E9->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// _G4
			// 
			this->_G4->Location = System::Drawing::Point(217, 128);
			this->_G4->Name = L"_G4";
			this->_G4->Size = System::Drawing::Size(24, 24);
			this->_G4->TabIndex = 36;
			this->_G4->TabStop = false;
			this->_G4->UseVisualStyleBackColor = true;
			this->_G4->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// _D9
			// 
			this->_D9->Location = System::Drawing::Point(127, 277);
			this->_D9->Name = L"_D9";
			this->_D9->Size = System::Drawing::Size(24, 24);
			this->_D9->TabIndex = 83;
			this->_D9->TabStop = false;
			this->_D9->UseVisualStyleBackColor = true;
			this->_D9->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// _H4
			// 
			this->_H4->Location = System::Drawing::Point(247, 128);
			this->_H4->Name = L"_H4";
			this->_H4->Size = System::Drawing::Size(24, 24);
			this->_H4->TabIndex = 37;
			this->_H4->TabStop = false;
			this->_H4->UseVisualStyleBackColor = true;
			this->_H4->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// _C9
			// 
			this->_C9->Location = System::Drawing::Point(97, 277);
			this->_C9->Name = L"_C9";
			this->_C9->Size = System::Drawing::Size(24, 24);
			this->_C9->TabIndex = 82;
			this->_C9->TabStop = false;
			this->_C9->UseVisualStyleBackColor = true;
			this->_C9->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// _I4
			// 
			this->_I4->Location = System::Drawing::Point(277, 128);
			this->_I4->Name = L"_I4";
			this->_I4->Size = System::Drawing::Size(24, 24);
			this->_I4->TabIndex = 38;
			this->_I4->TabStop = false;
			this->_I4->UseVisualStyleBackColor = true;
			this->_I4->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// _B9
			// 
			this->_B9->Location = System::Drawing::Point(67, 277);
			this->_B9->Name = L"_B9";
			this->_B9->Size = System::Drawing::Size(24, 24);
			this->_B9->TabIndex = 81;
			this->_B9->TabStop = false;
			this->_B9->UseVisualStyleBackColor = true;
			this->_B9->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// _J4
			// 
			this->_J4->Location = System::Drawing::Point(307, 128);
			this->_J4->Name = L"_J4";
			this->_J4->Size = System::Drawing::Size(24, 24);
			this->_J4->TabIndex = 39;
			this->_J4->TabStop = false;
			this->_J4->UseVisualStyleBackColor = true;
			this->_J4->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// _A9
			// 
			this->_A9->Location = System::Drawing::Point(37, 277);
			this->_A9->Name = L"_A9";
			this->_A9->Size = System::Drawing::Size(24, 24);
			this->_A9->TabIndex = 80;
			this->_A9->TabStop = false;
			this->_A9->UseVisualStyleBackColor = true;
			this->_A9->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// _A5
			// 
			this->_A5->Location = System::Drawing::Point(37, 158);
			this->_A5->Name = L"_A5";
			this->_A5->Size = System::Drawing::Size(24, 24);
			this->_A5->TabIndex = 40;
			this->_A5->TabStop = false;
			this->_A5->UseVisualStyleBackColor = true;
			this->_A5->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// _J8
			// 
			this->_J8->Location = System::Drawing::Point(307, 247);
			this->_J8->Name = L"_J8";
			this->_J8->Size = System::Drawing::Size(24, 24);
			this->_J8->TabIndex = 79;
			this->_J8->TabStop = false;
			this->_J8->UseVisualStyleBackColor = true;
			this->_J8->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// _B5
			// 
			this->_B5->Location = System::Drawing::Point(67, 158);
			this->_B5->Name = L"_B5";
			this->_B5->Size = System::Drawing::Size(24, 24);
			this->_B5->TabIndex = 41;
			this->_B5->TabStop = false;
			this->_B5->UseVisualStyleBackColor = true;
			this->_B5->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// _I8
			// 
			this->_I8->Location = System::Drawing::Point(277, 247);
			this->_I8->Name = L"_I8";
			this->_I8->Size = System::Drawing::Size(24, 24);
			this->_I8->TabIndex = 78;
			this->_I8->TabStop = false;
			this->_I8->UseVisualStyleBackColor = true;
			this->_I8->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// _C5
			// 
			this->_C5->Location = System::Drawing::Point(97, 158);
			this->_C5->Name = L"_C5";
			this->_C5->Size = System::Drawing::Size(24, 24);
			this->_C5->TabIndex = 42;
			this->_C5->TabStop = false;
			this->_C5->UseVisualStyleBackColor = true;
			this->_C5->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// _H8
			// 
			this->_H8->Location = System::Drawing::Point(247, 247);
			this->_H8->Name = L"_H8";
			this->_H8->Size = System::Drawing::Size(24, 24);
			this->_H8->TabIndex = 77;
			this->_H8->TabStop = false;
			this->_H8->UseVisualStyleBackColor = true;
			this->_H8->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// _D5
			// 
			this->_D5->Location = System::Drawing::Point(127, 158);
			this->_D5->Name = L"_D5";
			this->_D5->Size = System::Drawing::Size(24, 24);
			this->_D5->TabIndex = 43;
			this->_D5->TabStop = false;
			this->_D5->UseVisualStyleBackColor = true;
			this->_D5->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// _G8
			// 
			this->_G8->Location = System::Drawing::Point(217, 247);
			this->_G8->Name = L"_G8";
			this->_G8->Size = System::Drawing::Size(24, 24);
			this->_G8->TabIndex = 76;
			this->_G8->TabStop = false;
			this->_G8->UseVisualStyleBackColor = true;
			this->_G8->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// _E5
			// 
			this->_E5->Location = System::Drawing::Point(157, 158);
			this->_E5->Name = L"_E5";
			this->_E5->Size = System::Drawing::Size(24, 24);
			this->_E5->TabIndex = 44;
			this->_E5->TabStop = false;
			this->_E5->UseVisualStyleBackColor = true;
			this->_E5->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// _F8
			// 
			this->_F8->Location = System::Drawing::Point(187, 247);
			this->_F8->Name = L"_F8";
			this->_F8->Size = System::Drawing::Size(24, 24);
			this->_F8->TabIndex = 75;
			this->_F8->TabStop = false;
			this->_F8->UseVisualStyleBackColor = true;
			this->_F8->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// _F5
			// 
			this->_F5->Location = System::Drawing::Point(187, 158);
			this->_F5->Name = L"_F5";
			this->_F5->Size = System::Drawing::Size(24, 24);
			this->_F5->TabIndex = 45;
			this->_F5->TabStop = false;
			this->_F5->UseVisualStyleBackColor = true;
			this->_F5->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// _E8
			// 
			this->_E8->Location = System::Drawing::Point(157, 247);
			this->_E8->Name = L"_E8";
			this->_E8->Size = System::Drawing::Size(24, 24);
			this->_E8->TabIndex = 74;
			this->_E8->TabStop = false;
			this->_E8->UseVisualStyleBackColor = true;
			this->_E8->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// _G5
			// 
			this->_G5->Location = System::Drawing::Point(217, 158);
			this->_G5->Name = L"_G5";
			this->_G5->Size = System::Drawing::Size(24, 24);
			this->_G5->TabIndex = 46;
			this->_G5->TabStop = false;
			this->_G5->UseVisualStyleBackColor = true;
			this->_G5->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// _D8
			// 
			this->_D8->Location = System::Drawing::Point(127, 247);
			this->_D8->Name = L"_D8";
			this->_D8->Size = System::Drawing::Size(24, 24);
			this->_D8->TabIndex = 73;
			this->_D8->TabStop = false;
			this->_D8->UseVisualStyleBackColor = true;
			this->_D8->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// _H5
			// 
			this->_H5->Location = System::Drawing::Point(247, 158);
			this->_H5->Name = L"_H5";
			this->_H5->Size = System::Drawing::Size(24, 24);
			this->_H5->TabIndex = 47;
			this->_H5->TabStop = false;
			this->_H5->UseVisualStyleBackColor = true;
			this->_H5->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// _C8
			// 
			this->_C8->Location = System::Drawing::Point(97, 247);
			this->_C8->Name = L"_C8";
			this->_C8->Size = System::Drawing::Size(24, 24);
			this->_C8->TabIndex = 72;
			this->_C8->TabStop = false;
			this->_C8->UseVisualStyleBackColor = true;
			this->_C8->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// _I5
			// 
			this->_I5->Location = System::Drawing::Point(277, 158);
			this->_I5->Name = L"_I5";
			this->_I5->Size = System::Drawing::Size(24, 24);
			this->_I5->TabIndex = 48;
			this->_I5->TabStop = false;
			this->_I5->UseVisualStyleBackColor = true;
			this->_I5->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// _B8
			// 
			this->_B8->Location = System::Drawing::Point(67, 247);
			this->_B8->Name = L"_B8";
			this->_B8->Size = System::Drawing::Size(24, 24);
			this->_B8->TabIndex = 71;
			this->_B8->TabStop = false;
			this->_B8->UseVisualStyleBackColor = true;
			this->_B8->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// _J5
			// 
			this->_J5->Location = System::Drawing::Point(307, 158);
			this->_J5->Name = L"_J5";
			this->_J5->Size = System::Drawing::Size(24, 24);
			this->_J5->TabIndex = 49;
			this->_J5->TabStop = false;
			this->_J5->UseVisualStyleBackColor = true;
			this->_J5->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// _A8
			// 
			this->_A8->Location = System::Drawing::Point(37, 247);
			this->_A8->Name = L"_A8";
			this->_A8->Size = System::Drawing::Size(24, 24);
			this->_A8->TabIndex = 70;
			this->_A8->TabStop = false;
			this->_A8->UseVisualStyleBackColor = true;
			this->_A8->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// _A6
			// 
			this->_A6->Location = System::Drawing::Point(37, 187);
			this->_A6->Name = L"_A6";
			this->_A6->Size = System::Drawing::Size(24, 24);
			this->_A6->TabIndex = 50;
			this->_A6->TabStop = false;
			this->_A6->UseVisualStyleBackColor = true;
			this->_A6->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// _J7
			// 
			this->_J7->Location = System::Drawing::Point(307, 217);
			this->_J7->Name = L"_J7";
			this->_J7->Size = System::Drawing::Size(24, 24);
			this->_J7->TabIndex = 69;
			this->_J7->TabStop = false;
			this->_J7->UseVisualStyleBackColor = true;
			this->_J7->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// _B6
			// 
			this->_B6->Location = System::Drawing::Point(67, 187);
			this->_B6->Name = L"_B6";
			this->_B6->Size = System::Drawing::Size(24, 24);
			this->_B6->TabIndex = 51;
			this->_B6->TabStop = false;
			this->_B6->UseVisualStyleBackColor = true;
			this->_B6->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// _I7
			// 
			this->_I7->Location = System::Drawing::Point(277, 217);
			this->_I7->Name = L"_I7";
			this->_I7->Size = System::Drawing::Size(24, 24);
			this->_I7->TabIndex = 68;
			this->_I7->TabStop = false;
			this->_I7->UseVisualStyleBackColor = true;
			this->_I7->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// _C6
			// 
			this->_C6->Location = System::Drawing::Point(97, 187);
			this->_C6->Name = L"_C6";
			this->_C6->Size = System::Drawing::Size(24, 24);
			this->_C6->TabIndex = 52;
			this->_C6->TabStop = false;
			this->_C6->UseVisualStyleBackColor = true;
			this->_C6->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// _H7
			// 
			this->_H7->Location = System::Drawing::Point(247, 217);
			this->_H7->Name = L"_H7";
			this->_H7->Size = System::Drawing::Size(24, 24);
			this->_H7->TabIndex = 67;
			this->_H7->TabStop = false;
			this->_H7->UseVisualStyleBackColor = true;
			this->_H7->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// _D6
			// 
			this->_D6->Location = System::Drawing::Point(127, 187);
			this->_D6->Name = L"_D6";
			this->_D6->Size = System::Drawing::Size(24, 24);
			this->_D6->TabIndex = 53;
			this->_D6->TabStop = false;
			this->_D6->UseVisualStyleBackColor = true;
			this->_D6->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// _G7
			// 
			this->_G7->Location = System::Drawing::Point(217, 217);
			this->_G7->Name = L"_G7";
			this->_G7->Size = System::Drawing::Size(24, 24);
			this->_G7->TabIndex = 66;
			this->_G7->TabStop = false;
			this->_G7->UseVisualStyleBackColor = true;
			this->_G7->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// _E6
			// 
			this->_E6->Location = System::Drawing::Point(157, 187);
			this->_E6->Name = L"_E6";
			this->_E6->Size = System::Drawing::Size(24, 24);
			this->_E6->TabIndex = 54;
			this->_E6->TabStop = false;
			this->_E6->UseVisualStyleBackColor = true;
			this->_E6->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// _F7
			// 
			this->_F7->Location = System::Drawing::Point(187, 217);
			this->_F7->Name = L"_F7";
			this->_F7->Size = System::Drawing::Size(24, 24);
			this->_F7->TabIndex = 65;
			this->_F7->TabStop = false;
			this->_F7->UseVisualStyleBackColor = true;
			this->_F7->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// _F6
			// 
			this->_F6->Location = System::Drawing::Point(187, 187);
			this->_F6->Name = L"_F6";
			this->_F6->Size = System::Drawing::Size(24, 24);
			this->_F6->TabIndex = 55;
			this->_F6->TabStop = false;
			this->_F6->UseVisualStyleBackColor = true;
			this->_F6->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// _E7
			// 
			this->_E7->Location = System::Drawing::Point(157, 217);
			this->_E7->Name = L"_E7";
			this->_E7->Size = System::Drawing::Size(24, 24);
			this->_E7->TabIndex = 64;
			this->_E7->TabStop = false;
			this->_E7->UseVisualStyleBackColor = true;
			this->_E7->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// _G6
			// 
			this->_G6->Location = System::Drawing::Point(217, 187);
			this->_G6->Name = L"_G6";
			this->_G6->Size = System::Drawing::Size(24, 24);
			this->_G6->TabIndex = 56;
			this->_G6->TabStop = false;
			this->_G6->UseVisualStyleBackColor = true;
			this->_G6->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// _D7
			// 
			this->_D7->Location = System::Drawing::Point(127, 217);
			this->_D7->Name = L"_D7";
			this->_D7->Size = System::Drawing::Size(24, 24);
			this->_D7->TabIndex = 63;
			this->_D7->TabStop = false;
			this->_D7->UseVisualStyleBackColor = true;
			this->_D7->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// _H6
			// 
			this->_H6->Location = System::Drawing::Point(247, 187);
			this->_H6->Name = L"_H6";
			this->_H6->Size = System::Drawing::Size(24, 24);
			this->_H6->TabIndex = 57;
			this->_H6->TabStop = false;
			this->_H6->UseVisualStyleBackColor = true;
			this->_H6->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// _C7
			// 
			this->_C7->Location = System::Drawing::Point(97, 217);
			this->_C7->Name = L"_C7";
			this->_C7->Size = System::Drawing::Size(24, 24);
			this->_C7->TabIndex = 62;
			this->_C7->TabStop = false;
			this->_C7->UseVisualStyleBackColor = true;
			this->_C7->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// _I6
			// 
			this->_I6->Location = System::Drawing::Point(277, 187);
			this->_I6->Name = L"_I6";
			this->_I6->Size = System::Drawing::Size(24, 24);
			this->_I6->TabIndex = 58;
			this->_I6->TabStop = false;
			this->_I6->UseVisualStyleBackColor = true;
			this->_I6->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// _B7
			// 
			this->_B7->Location = System::Drawing::Point(67, 217);
			this->_B7->Name = L"_B7";
			this->_B7->Size = System::Drawing::Size(24, 24);
			this->_B7->TabIndex = 61;
			this->_B7->TabStop = false;
			this->_B7->UseVisualStyleBackColor = true;
			this->_B7->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// _J6
			// 
			this->_J6->Location = System::Drawing::Point(307, 187);
			this->_J6->Name = L"_J6";
			this->_J6->Size = System::Drawing::Size(24, 24);
			this->_J6->TabIndex = 59;
			this->_J6->TabStop = false;
			this->_J6->UseVisualStyleBackColor = true;
			this->_J6->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// _A7
			// 
			this->_A7->Location = System::Drawing::Point(37, 217);
			this->_A7->Name = L"_A7";
			this->_A7->Size = System::Drawing::Size(24, 24);
			this->_A7->TabIndex = 60;
			this->_A7->TabStop = false;
			this->_A7->UseVisualStyleBackColor = true;
			this->_A7->Click += gcnew System::EventHandler(this, &Gracz::button1_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->D1);
			this->panel1->Controls->Add(this->wiersz_10);
			this->panel1->Controls->Add(this->A1);
			this->panel1->Controls->Add(this->wiersz_9);
			this->panel1->Controls->Add(this->B1);
			this->panel1->Controls->Add(this->wiersz_8);
			this->panel1->Controls->Add(this->C1);
			this->panel1->Controls->Add(this->wiersz_7);
			this->panel1->Controls->Add(this->E1);
			this->panel1->Controls->Add(this->wiersz_6);
			this->panel1->Controls->Add(this->F1);
			this->panel1->Controls->Add(this->wiersz_5);
			this->panel1->Controls->Add(this->G1);
			this->panel1->Controls->Add(this->wiersz_4);
			this->panel1->Controls->Add(this->H1);
			this->panel1->Controls->Add(this->wiersz_3);
			this->panel1->Controls->Add(this->I1);
			this->panel1->Controls->Add(this->wiersz_2);
			this->panel1->Controls->Add(this->J1);
			this->panel1->Controls->Add(this->wiersz_1);
			this->panel1->Controls->Add(this->A2);
			this->panel1->Controls->Add(this->kolumna_J);
			this->panel1->Controls->Add(this->B2);
			this->panel1->Controls->Add(this->kolumna_I);
			this->panel1->Controls->Add(this->C2);
			this->panel1->Controls->Add(this->kolumna_H);
			this->panel1->Controls->Add(this->D2);
			this->panel1->Controls->Add(this->kolumna_G);
			this->panel1->Controls->Add(this->E2);
			this->panel1->Controls->Add(this->kolumna_F);
			this->panel1->Controls->Add(this->F2);
			this->panel1->Controls->Add(this->kolumna_E);
			this->panel1->Controls->Add(this->G2);
			this->panel1->Controls->Add(this->kolumna_D);
			this->panel1->Controls->Add(this->H2);
			this->panel1->Controls->Add(this->kolumna_C);
			this->panel1->Controls->Add(this->I2);
			this->panel1->Controls->Add(this->kolumna_B);
			this->panel1->Controls->Add(this->J2);
			this->panel1->Controls->Add(this->kolumna_A);
			this->panel1->Controls->Add(this->A3);
			this->panel1->Controls->Add(this->J10);
			this->panel1->Controls->Add(this->B3);
			this->panel1->Controls->Add(this->I10);
			this->panel1->Controls->Add(this->C3);
			this->panel1->Controls->Add(this->H10);
			this->panel1->Controls->Add(this->D3);
			this->panel1->Controls->Add(this->G10);
			this->panel1->Controls->Add(this->E3);
			this->panel1->Controls->Add(this->F10);
			this->panel1->Controls->Add(this->F3);
			this->panel1->Controls->Add(this->E10);
			this->panel1->Controls->Add(this->G3);
			this->panel1->Controls->Add(this->D10);
			this->panel1->Controls->Add(this->H3);
			this->panel1->Controls->Add(this->C10);
			this->panel1->Controls->Add(this->I3);
			this->panel1->Controls->Add(this->B10);
			this->panel1->Controls->Add(this->J3);
			this->panel1->Controls->Add(this->A10);
			this->panel1->Controls->Add(this->A4);
			this->panel1->Controls->Add(this->J9);
			this->panel1->Controls->Add(this->B4);
			this->panel1->Controls->Add(this->I9);
			this->panel1->Controls->Add(this->C4);
			this->panel1->Controls->Add(this->H9);
			this->panel1->Controls->Add(this->D4);
			this->panel1->Controls->Add(this->G9);
			this->panel1->Controls->Add(this->E4);
			this->panel1->Controls->Add(this->F9);
			this->panel1->Controls->Add(this->F4);
			this->panel1->Controls->Add(this->E9);
			this->panel1->Controls->Add(this->G4);
			this->panel1->Controls->Add(this->D9);
			this->panel1->Controls->Add(this->H4);
			this->panel1->Controls->Add(this->C9);
			this->panel1->Controls->Add(this->I4);
			this->panel1->Controls->Add(this->B9);
			this->panel1->Controls->Add(this->J4);
			this->panel1->Controls->Add(this->A9);
			this->panel1->Controls->Add(this->A5);
			this->panel1->Controls->Add(this->J8);
			this->panel1->Controls->Add(this->B5);
			this->panel1->Controls->Add(this->I8);
			this->panel1->Controls->Add(this->C5);
			this->panel1->Controls->Add(this->H8);
			this->panel1->Controls->Add(this->D5);
			this->panel1->Controls->Add(this->G8);
			this->panel1->Controls->Add(this->E5);
			this->panel1->Controls->Add(this->F8);
			this->panel1->Controls->Add(this->F5);
			this->panel1->Controls->Add(this->E8);
			this->panel1->Controls->Add(this->G5);
			this->panel1->Controls->Add(this->D8);
			this->panel1->Controls->Add(this->H5);
			this->panel1->Controls->Add(this->C8);
			this->panel1->Controls->Add(this->I5);
			this->panel1->Controls->Add(this->B8);
			this->panel1->Controls->Add(this->J5);
			this->panel1->Controls->Add(this->A8);
			this->panel1->Controls->Add(this->A6);
			this->panel1->Controls->Add(this->J7);
			this->panel1->Controls->Add(this->B6);
			this->panel1->Controls->Add(this->I7);
			this->panel1->Controls->Add(this->C6);
			this->panel1->Controls->Add(this->H7);
			this->panel1->Controls->Add(this->D6);
			this->panel1->Controls->Add(this->G7);
			this->panel1->Controls->Add(this->E6);
			this->panel1->Controls->Add(this->F7);
			this->panel1->Controls->Add(this->F6);
			this->panel1->Controls->Add(this->E7);
			this->panel1->Controls->Add(this->G6);
			this->panel1->Controls->Add(this->D7);
			this->panel1->Controls->Add(this->H6);
			this->panel1->Controls->Add(this->C7);
			this->panel1->Controls->Add(this->I6);
			this->panel1->Controls->Add(this->B7);
			this->panel1->Controls->Add(this->J6);
			this->panel1->Controls->Add(this->A7);
			this->panel1->Location = System::Drawing::Point(403, 22);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(361, 350);
			this->panel1->TabIndex = 122;
			// 
			// D1
			// 
			this->D1->Location = System::Drawing::Point(127, 38);
			this->D1->Name = L"D1";
			this->D1->Size = System::Drawing::Size(24, 24);
			this->D1->TabIndex = 3;
			this->D1->TabStop = false;
			this->D1->UseVisualStyleBackColor = true;
			this->D1->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// wiersz_10
			// 
			this->wiersz_10->AutoSize = true;
			this->wiersz_10->Location = System::Drawing::Point(19, 313);
			this->wiersz_10->Name = L"wiersz_10";
			this->wiersz_10->Size = System::Drawing::Size(19, 13);
			this->wiersz_10->TabIndex = 119;
			this->wiersz_10->Text = L"10";
			// 
			// A1
			// 
			this->A1->Location = System::Drawing::Point(37, 38);
			this->A1->Name = L"A1";
			this->A1->Size = System::Drawing::Size(24, 24);
			this->A1->TabIndex = 0;
			this->A1->TabStop = false;
			this->A1->UseVisualStyleBackColor = true;
			this->A1->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// wiersz_9
			// 
			this->wiersz_9->AutoSize = true;
			this->wiersz_9->Location = System::Drawing::Point(25, 283);
			this->wiersz_9->Name = L"wiersz_9";
			this->wiersz_9->Size = System::Drawing::Size(13, 13);
			this->wiersz_9->TabIndex = 118;
			this->wiersz_9->Text = L"9";
			// 
			// B1
			// 
			this->B1->Location = System::Drawing::Point(67, 38);
			this->B1->Name = L"B1";
			this->B1->Size = System::Drawing::Size(24, 24);
			this->B1->TabIndex = 1;
			this->B1->TabStop = false;
			this->B1->UseVisualStyleBackColor = true;
			this->B1->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// wiersz_8
			// 
			this->wiersz_8->AutoSize = true;
			this->wiersz_8->Location = System::Drawing::Point(25, 253);
			this->wiersz_8->Name = L"wiersz_8";
			this->wiersz_8->Size = System::Drawing::Size(13, 13);
			this->wiersz_8->TabIndex = 117;
			this->wiersz_8->Text = L"8";
			// 
			// C1
			// 
			this->C1->Location = System::Drawing::Point(97, 38);
			this->C1->Name = L"C1";
			this->C1->Size = System::Drawing::Size(24, 24);
			this->C1->TabIndex = 2;
			this->C1->TabStop = false;
			this->C1->UseVisualStyleBackColor = true;
			this->C1->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// wiersz_7
			// 
			this->wiersz_7->AutoSize = true;
			this->wiersz_7->Location = System::Drawing::Point(25, 223);
			this->wiersz_7->Name = L"wiersz_7";
			this->wiersz_7->Size = System::Drawing::Size(13, 13);
			this->wiersz_7->TabIndex = 116;
			this->wiersz_7->Text = L"7";
			// 
			// E1
			// 
			this->E1->Location = System::Drawing::Point(157, 38);
			this->E1->Name = L"E1";
			this->E1->Size = System::Drawing::Size(24, 24);
			this->E1->TabIndex = 4;
			this->E1->TabStop = false;
			this->E1->UseVisualStyleBackColor = true;
			this->E1->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// wiersz_6
			// 
			this->wiersz_6->AutoSize = true;
			this->wiersz_6->Location = System::Drawing::Point(25, 193);
			this->wiersz_6->Name = L"wiersz_6";
			this->wiersz_6->Size = System::Drawing::Size(13, 13);
			this->wiersz_6->TabIndex = 115;
			this->wiersz_6->Text = L"6";
			// 
			// F1
			// 
			this->F1->Location = System::Drawing::Point(187, 38);
			this->F1->Name = L"F1";
			this->F1->Size = System::Drawing::Size(24, 24);
			this->F1->TabIndex = 5;
			this->F1->TabStop = false;
			this->F1->UseVisualStyleBackColor = true;
			this->F1->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// wiersz_5
			// 
			this->wiersz_5->AutoSize = true;
			this->wiersz_5->Location = System::Drawing::Point(25, 164);
			this->wiersz_5->Name = L"wiersz_5";
			this->wiersz_5->Size = System::Drawing::Size(13, 13);
			this->wiersz_5->TabIndex = 114;
			this->wiersz_5->Text = L"5";
			// 
			// G1
			// 
			this->G1->Location = System::Drawing::Point(217, 38);
			this->G1->Name = L"G1";
			this->G1->Size = System::Drawing::Size(24, 24);
			this->G1->TabIndex = 6;
			this->G1->TabStop = false;
			this->G1->UseVisualStyleBackColor = true;
			this->G1->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// wiersz_4
			// 
			this->wiersz_4->AutoSize = true;
			this->wiersz_4->Location = System::Drawing::Point(25, 134);
			this->wiersz_4->Name = L"wiersz_4";
			this->wiersz_4->Size = System::Drawing::Size(13, 13);
			this->wiersz_4->TabIndex = 113;
			this->wiersz_4->Text = L"4";
			// 
			// H1
			// 
			this->H1->Location = System::Drawing::Point(247, 38);
			this->H1->Name = L"H1";
			this->H1->Size = System::Drawing::Size(24, 24);
			this->H1->TabIndex = 7;
			this->H1->TabStop = false;
			this->H1->UseVisualStyleBackColor = true;
			this->H1->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// wiersz_3
			// 
			this->wiersz_3->AutoSize = true;
			this->wiersz_3->Location = System::Drawing::Point(25, 104);
			this->wiersz_3->Name = L"wiersz_3";
			this->wiersz_3->Size = System::Drawing::Size(13, 13);
			this->wiersz_3->TabIndex = 112;
			this->wiersz_3->Text = L"3";
			// 
			// I1
			// 
			this->I1->Location = System::Drawing::Point(277, 38);
			this->I1->Name = L"I1";
			this->I1->Size = System::Drawing::Size(24, 24);
			this->I1->TabIndex = 8;
			this->I1->TabStop = false;
			this->I1->UseVisualStyleBackColor = true;
			this->I1->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// wiersz_2
			// 
			this->wiersz_2->AutoSize = true;
			this->wiersz_2->Location = System::Drawing::Point(25, 74);
			this->wiersz_2->Name = L"wiersz_2";
			this->wiersz_2->Size = System::Drawing::Size(13, 13);
			this->wiersz_2->TabIndex = 111;
			this->wiersz_2->Text = L"2";
			// 
			// J1
			// 
			this->J1->Location = System::Drawing::Point(307, 38);
			this->J1->Name = L"J1";
			this->J1->Size = System::Drawing::Size(24, 24);
			this->J1->TabIndex = 9;
			this->J1->TabStop = false;
			this->J1->UseVisualStyleBackColor = true;
			this->J1->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// wiersz_1
			// 
			this->wiersz_1->AutoSize = true;
			this->wiersz_1->Location = System::Drawing::Point(25, 44);
			this->wiersz_1->Name = L"wiersz_1";
			this->wiersz_1->Size = System::Drawing::Size(13, 13);
			this->wiersz_1->TabIndex = 110;
			this->wiersz_1->Text = L"1";
			// 
			// A2
			// 
			this->A2->Location = System::Drawing::Point(37, 68);
			this->A2->Name = L"A2";
			this->A2->Size = System::Drawing::Size(24, 24);
			this->A2->TabIndex = 10;
			this->A2->TabStop = false;
			this->A2->UseVisualStyleBackColor = true;
			this->A2->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// kolumna_J
			// 
			this->kolumna_J->AutoSize = true;
			this->kolumna_J->Location = System::Drawing::Point(319, 22);
			this->kolumna_J->Name = L"kolumna_J";
			this->kolumna_J->Size = System::Drawing::Size(12, 13);
			this->kolumna_J->TabIndex = 109;
			this->kolumna_J->Text = L"J";
			// 
			// B2
			// 
			this->B2->Location = System::Drawing::Point(67, 68);
			this->B2->Name = L"B2";
			this->B2->Size = System::Drawing::Size(24, 24);
			this->B2->TabIndex = 11;
			this->B2->TabStop = false;
			this->B2->UseVisualStyleBackColor = true;
			this->B2->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// kolumna_I
			// 
			this->kolumna_I->AutoSize = true;
			this->kolumna_I->Location = System::Drawing::Point(291, 22);
			this->kolumna_I->Name = L"kolumna_I";
			this->kolumna_I->Size = System::Drawing::Size(10, 13);
			this->kolumna_I->TabIndex = 108;
			this->kolumna_I->Text = L"I";
			// 
			// C2
			// 
			this->C2->Location = System::Drawing::Point(97, 68);
			this->C2->Name = L"C2";
			this->C2->Size = System::Drawing::Size(24, 24);
			this->C2->TabIndex = 12;
			this->C2->TabStop = false;
			this->C2->UseVisualStyleBackColor = true;
			this->C2->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// kolumna_H
			// 
			this->kolumna_H->AutoSize = true;
			this->kolumna_H->Location = System::Drawing::Point(256, 22);
			this->kolumna_H->Name = L"kolumna_H";
			this->kolumna_H->Size = System::Drawing::Size(15, 13);
			this->kolumna_H->TabIndex = 107;
			this->kolumna_H->Text = L"H";
			// 
			// D2
			// 
			this->D2->Location = System::Drawing::Point(127, 68);
			this->D2->Name = L"D2";
			this->D2->Size = System::Drawing::Size(24, 24);
			this->D2->TabIndex = 13;
			this->D2->TabStop = false;
			this->D2->UseVisualStyleBackColor = true;
			this->D2->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// kolumna_G
			// 
			this->kolumna_G->AutoSize = true;
			this->kolumna_G->Location = System::Drawing::Point(226, 22);
			this->kolumna_G->Name = L"kolumna_G";
			this->kolumna_G->Size = System::Drawing::Size(15, 13);
			this->kolumna_G->TabIndex = 106;
			this->kolumna_G->Text = L"G";
			// 
			// E2
			// 
			this->E2->Location = System::Drawing::Point(157, 68);
			this->E2->Name = L"E2";
			this->E2->Size = System::Drawing::Size(24, 24);
			this->E2->TabIndex = 14;
			this->E2->TabStop = false;
			this->E2->UseVisualStyleBackColor = true;
			this->E2->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// kolumna_F
			// 
			this->kolumna_F->AutoSize = true;
			this->kolumna_F->Location = System::Drawing::Point(198, 22);
			this->kolumna_F->Name = L"kolumna_F";
			this->kolumna_F->Size = System::Drawing::Size(13, 13);
			this->kolumna_F->TabIndex = 105;
			this->kolumna_F->Text = L"F";
			// 
			// F2
			// 
			this->F2->Location = System::Drawing::Point(187, 68);
			this->F2->Name = L"F2";
			this->F2->Size = System::Drawing::Size(24, 24);
			this->F2->TabIndex = 15;
			this->F2->TabStop = false;
			this->F2->UseVisualStyleBackColor = true;
			this->F2->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// kolumna_E
			// 
			this->kolumna_E->AutoSize = true;
			this->kolumna_E->Location = System::Drawing::Point(167, 22);
			this->kolumna_E->Name = L"kolumna_E";
			this->kolumna_E->Size = System::Drawing::Size(14, 13);
			this->kolumna_E->TabIndex = 104;
			this->kolumna_E->Text = L"E";
			// 
			// G2
			// 
			this->G2->Location = System::Drawing::Point(217, 68);
			this->G2->Name = L"G2";
			this->G2->Size = System::Drawing::Size(24, 24);
			this->G2->TabIndex = 16;
			this->G2->TabStop = false;
			this->G2->UseVisualStyleBackColor = true;
			this->G2->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// kolumna_D
			// 
			this->kolumna_D->AutoSize = true;
			this->kolumna_D->Location = System::Drawing::Point(136, 22);
			this->kolumna_D->Name = L"kolumna_D";
			this->kolumna_D->Size = System::Drawing::Size(15, 13);
			this->kolumna_D->TabIndex = 103;
			this->kolumna_D->Text = L"D";
			// 
			// H2
			// 
			this->H2->Location = System::Drawing::Point(247, 68);
			this->H2->Name = L"H2";
			this->H2->Size = System::Drawing::Size(24, 24);
			this->H2->TabIndex = 17;
			this->H2->TabStop = false;
			this->H2->UseVisualStyleBackColor = true;
			this->H2->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// kolumna_C
			// 
			this->kolumna_C->AutoSize = true;
			this->kolumna_C->Location = System::Drawing::Point(104, 22);
			this->kolumna_C->Name = L"kolumna_C";
			this->kolumna_C->Size = System::Drawing::Size(14, 13);
			this->kolumna_C->TabIndex = 102;
			this->kolumna_C->Text = L"C";
			// 
			// I2
			// 
			this->I2->Location = System::Drawing::Point(277, 68);
			this->I2->Name = L"I2";
			this->I2->Size = System::Drawing::Size(24, 24);
			this->I2->TabIndex = 18;
			this->I2->TabStop = false;
			this->I2->UseVisualStyleBackColor = true;
			this->I2->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// kolumna_B
			// 
			this->kolumna_B->AutoSize = true;
			this->kolumna_B->Location = System::Drawing::Point(74, 22);
			this->kolumna_B->Name = L"kolumna_B";
			this->kolumna_B->Size = System::Drawing::Size(14, 13);
			this->kolumna_B->TabIndex = 101;
			this->kolumna_B->Text = L"B";
			// 
			// J2
			// 
			this->J2->Location = System::Drawing::Point(307, 68);
			this->J2->Name = L"J2";
			this->J2->Size = System::Drawing::Size(24, 24);
			this->J2->TabIndex = 19;
			this->J2->TabStop = false;
			this->J2->UseVisualStyleBackColor = true;
			this->J2->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// kolumna_A
			// 
			this->kolumna_A->AutoSize = true;
			this->kolumna_A->Location = System::Drawing::Point(47, 22);
			this->kolumna_A->Name = L"kolumna_A";
			this->kolumna_A->Size = System::Drawing::Size(14, 13);
			this->kolumna_A->TabIndex = 100;
			this->kolumna_A->Text = L"A";
			// 
			// A3
			// 
			this->A3->Location = System::Drawing::Point(37, 98);
			this->A3->Name = L"A3";
			this->A3->Size = System::Drawing::Size(24, 24);
			this->A3->TabIndex = 20;
			this->A3->TabStop = false;
			this->A3->UseVisualStyleBackColor = true;
			this->A3->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// J10
			// 
			this->J10->Location = System::Drawing::Point(307, 307);
			this->J10->Name = L"J10";
			this->J10->Size = System::Drawing::Size(24, 24);
			this->J10->TabIndex = 99;
			this->J10->TabStop = false;
			this->J10->UseVisualStyleBackColor = true;
			this->J10->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// B3
			// 
			this->B3->Location = System::Drawing::Point(67, 98);
			this->B3->Name = L"B3";
			this->B3->Size = System::Drawing::Size(24, 24);
			this->B3->TabIndex = 21;
			this->B3->TabStop = false;
			this->B3->UseVisualStyleBackColor = true;
			this->B3->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// I10
			// 
			this->I10->Location = System::Drawing::Point(277, 307);
			this->I10->Name = L"I10";
			this->I10->Size = System::Drawing::Size(24, 24);
			this->I10->TabIndex = 98;
			this->I10->TabStop = false;
			this->I10->UseVisualStyleBackColor = true;
			this->I10->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// C3
			// 
			this->C3->Location = System::Drawing::Point(97, 98);
			this->C3->Name = L"C3";
			this->C3->Size = System::Drawing::Size(24, 24);
			this->C3->TabIndex = 22;
			this->C3->TabStop = false;
			this->C3->UseVisualStyleBackColor = true;
			this->C3->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// H10
			// 
			this->H10->Location = System::Drawing::Point(247, 307);
			this->H10->Name = L"H10";
			this->H10->Size = System::Drawing::Size(24, 24);
			this->H10->TabIndex = 97;
			this->H10->TabStop = false;
			this->H10->UseVisualStyleBackColor = true;
			this->H10->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// D3
			// 
			this->D3->Location = System::Drawing::Point(127, 98);
			this->D3->Name = L"D3";
			this->D3->Size = System::Drawing::Size(24, 24);
			this->D3->TabIndex = 23;
			this->D3->TabStop = false;
			this->D3->UseVisualStyleBackColor = true;
			this->D3->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// G10
			// 
			this->G10->Location = System::Drawing::Point(217, 307);
			this->G10->Name = L"G10";
			this->G10->Size = System::Drawing::Size(24, 24);
			this->G10->TabIndex = 96;
			this->G10->TabStop = false;
			this->G10->UseVisualStyleBackColor = true;
			this->G10->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// E3
			// 
			this->E3->Location = System::Drawing::Point(157, 98);
			this->E3->Name = L"E3";
			this->E3->Size = System::Drawing::Size(24, 24);
			this->E3->TabIndex = 24;
			this->E3->TabStop = false;
			this->E3->UseVisualStyleBackColor = true;
			this->E3->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// F10
			// 
			this->F10->Location = System::Drawing::Point(187, 307);
			this->F10->Name = L"F10";
			this->F10->Size = System::Drawing::Size(24, 24);
			this->F10->TabIndex = 95;
			this->F10->TabStop = false;
			this->F10->UseVisualStyleBackColor = true;
			this->F10->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// F3
			// 
			this->F3->Location = System::Drawing::Point(187, 98);
			this->F3->Name = L"F3";
			this->F3->Size = System::Drawing::Size(24, 24);
			this->F3->TabIndex = 25;
			this->F3->TabStop = false;
			this->F3->UseVisualStyleBackColor = true;
			this->F3->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// E10
			// 
			this->E10->Location = System::Drawing::Point(157, 307);
			this->E10->Name = L"E10";
			this->E10->Size = System::Drawing::Size(24, 24);
			this->E10->TabIndex = 94;
			this->E10->TabStop = false;
			this->E10->UseVisualStyleBackColor = true;
			this->E10->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// G3
			// 
			this->G3->Location = System::Drawing::Point(217, 98);
			this->G3->Name = L"G3";
			this->G3->Size = System::Drawing::Size(24, 24);
			this->G3->TabIndex = 26;
			this->G3->TabStop = false;
			this->G3->UseVisualStyleBackColor = true;
			this->G3->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// D10
			// 
			this->D10->Location = System::Drawing::Point(127, 307);
			this->D10->Name = L"D10";
			this->D10->Size = System::Drawing::Size(24, 24);
			this->D10->TabIndex = 93;
			this->D10->TabStop = false;
			this->D10->UseVisualStyleBackColor = true;
			this->D10->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// H3
			// 
			this->H3->Location = System::Drawing::Point(247, 98);
			this->H3->Name = L"H3";
			this->H3->Size = System::Drawing::Size(24, 24);
			this->H3->TabIndex = 27;
			this->H3->TabStop = false;
			this->H3->UseVisualStyleBackColor = true;
			this->H3->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// C10
			// 
			this->C10->Location = System::Drawing::Point(97, 307);
			this->C10->Name = L"C10";
			this->C10->Size = System::Drawing::Size(24, 24);
			this->C10->TabIndex = 92;
			this->C10->TabStop = false;
			this->C10->UseVisualStyleBackColor = true;
			this->C10->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// I3
			// 
			this->I3->Location = System::Drawing::Point(277, 98);
			this->I3->Name = L"I3";
			this->I3->Size = System::Drawing::Size(24, 24);
			this->I3->TabIndex = 28;
			this->I3->TabStop = false;
			this->I3->UseVisualStyleBackColor = true;
			this->I3->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// B10
			// 
			this->B10->Location = System::Drawing::Point(67, 307);
			this->B10->Name = L"B10";
			this->B10->Size = System::Drawing::Size(24, 24);
			this->B10->TabIndex = 91;
			this->B10->TabStop = false;
			this->B10->UseVisualStyleBackColor = true;
			this->B10->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// J3
			// 
			this->J3->Location = System::Drawing::Point(307, 98);
			this->J3->Name = L"J3";
			this->J3->Size = System::Drawing::Size(24, 24);
			this->J3->TabIndex = 29;
			this->J3->TabStop = false;
			this->J3->UseVisualStyleBackColor = true;
			this->J3->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// A10
			// 
			this->A10->Location = System::Drawing::Point(37, 307);
			this->A10->Name = L"A10";
			this->A10->Size = System::Drawing::Size(24, 24);
			this->A10->TabIndex = 90;
			this->A10->TabStop = false;
			this->A10->UseVisualStyleBackColor = true;
			this->A10->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// A4
			// 
			this->A4->Location = System::Drawing::Point(37, 128);
			this->A4->Name = L"A4";
			this->A4->Size = System::Drawing::Size(24, 24);
			this->A4->TabIndex = 30;
			this->A4->TabStop = false;
			this->A4->UseVisualStyleBackColor = true;
			this->A4->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// J9
			// 
			this->J9->Location = System::Drawing::Point(307, 277);
			this->J9->Name = L"J9";
			this->J9->Size = System::Drawing::Size(24, 24);
			this->J9->TabIndex = 89;
			this->J9->TabStop = false;
			this->J9->UseVisualStyleBackColor = true;
			this->J9->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// B4
			// 
			this->B4->Location = System::Drawing::Point(67, 128);
			this->B4->Name = L"B4";
			this->B4->Size = System::Drawing::Size(24, 24);
			this->B4->TabIndex = 31;
			this->B4->TabStop = false;
			this->B4->UseVisualStyleBackColor = true;
			this->B4->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// I9
			// 
			this->I9->Location = System::Drawing::Point(277, 277);
			this->I9->Name = L"I9";
			this->I9->Size = System::Drawing::Size(24, 24);
			this->I9->TabIndex = 88;
			this->I9->TabStop = false;
			this->I9->UseVisualStyleBackColor = true;
			this->I9->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// C4
			// 
			this->C4->Location = System::Drawing::Point(97, 128);
			this->C4->Name = L"C4";
			this->C4->Size = System::Drawing::Size(24, 24);
			this->C4->TabIndex = 32;
			this->C4->TabStop = false;
			this->C4->UseVisualStyleBackColor = true;
			this->C4->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// H9
			// 
			this->H9->Location = System::Drawing::Point(247, 277);
			this->H9->Name = L"H9";
			this->H9->Size = System::Drawing::Size(24, 24);
			this->H9->TabIndex = 87;
			this->H9->TabStop = false;
			this->H9->UseVisualStyleBackColor = true;
			this->H9->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// D4
			// 
			this->D4->Location = System::Drawing::Point(127, 128);
			this->D4->Name = L"D4";
			this->D4->Size = System::Drawing::Size(24, 24);
			this->D4->TabIndex = 33;
			this->D4->TabStop = false;
			this->D4->UseVisualStyleBackColor = true;
			this->D4->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// G9
			// 
			this->G9->Location = System::Drawing::Point(217, 277);
			this->G9->Name = L"G9";
			this->G9->Size = System::Drawing::Size(24, 24);
			this->G9->TabIndex = 86;
			this->G9->TabStop = false;
			this->G9->UseVisualStyleBackColor = true;
			this->G9->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// E4
			// 
			this->E4->Location = System::Drawing::Point(157, 128);
			this->E4->Name = L"E4";
			this->E4->Size = System::Drawing::Size(24, 24);
			this->E4->TabIndex = 34;
			this->E4->TabStop = false;
			this->E4->UseVisualStyleBackColor = true;
			this->E4->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// F9
			// 
			this->F9->Location = System::Drawing::Point(187, 277);
			this->F9->Name = L"F9";
			this->F9->Size = System::Drawing::Size(24, 24);
			this->F9->TabIndex = 85;
			this->F9->TabStop = false;
			this->F9->UseVisualStyleBackColor = true;
			this->F9->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// F4
			// 
			this->F4->Location = System::Drawing::Point(187, 128);
			this->F4->Name = L"F4";
			this->F4->Size = System::Drawing::Size(24, 24);
			this->F4->TabIndex = 35;
			this->F4->TabStop = false;
			this->F4->UseVisualStyleBackColor = true;
			this->F4->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// E9
			// 
			this->E9->Location = System::Drawing::Point(157, 277);
			this->E9->Name = L"E9";
			this->E9->Size = System::Drawing::Size(24, 24);
			this->E9->TabIndex = 84;
			this->E9->TabStop = false;
			this->E9->UseVisualStyleBackColor = true;
			this->E9->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// G4
			// 
			this->G4->Location = System::Drawing::Point(217, 128);
			this->G4->Name = L"G4";
			this->G4->Size = System::Drawing::Size(24, 24);
			this->G4->TabIndex = 36;
			this->G4->TabStop = false;
			this->G4->UseVisualStyleBackColor = true;
			this->G4->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// D9
			// 
			this->D9->Location = System::Drawing::Point(127, 277);
			this->D9->Name = L"D9";
			this->D9->Size = System::Drawing::Size(24, 24);
			this->D9->TabIndex = 83;
			this->D9->TabStop = false;
			this->D9->UseVisualStyleBackColor = true;
			this->D9->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// H4
			// 
			this->H4->Location = System::Drawing::Point(247, 128);
			this->H4->Name = L"H4";
			this->H4->Size = System::Drawing::Size(24, 24);
			this->H4->TabIndex = 37;
			this->H4->TabStop = false;
			this->H4->UseVisualStyleBackColor = true;
			this->H4->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// C9
			// 
			this->C9->Location = System::Drawing::Point(97, 277);
			this->C9->Name = L"C9";
			this->C9->Size = System::Drawing::Size(24, 24);
			this->C9->TabIndex = 82;
			this->C9->TabStop = false;
			this->C9->UseVisualStyleBackColor = true;
			this->C9->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// I4
			// 
			this->I4->Location = System::Drawing::Point(277, 128);
			this->I4->Name = L"I4";
			this->I4->Size = System::Drawing::Size(24, 24);
			this->I4->TabIndex = 38;
			this->I4->TabStop = false;
			this->I4->UseVisualStyleBackColor = true;
			this->I4->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// B9
			// 
			this->B9->Location = System::Drawing::Point(67, 277);
			this->B9->Name = L"B9";
			this->B9->Size = System::Drawing::Size(24, 24);
			this->B9->TabIndex = 81;
			this->B9->TabStop = false;
			this->B9->UseVisualStyleBackColor = true;
			this->B9->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// J4
			// 
			this->J4->Location = System::Drawing::Point(307, 128);
			this->J4->Name = L"J4";
			this->J4->Size = System::Drawing::Size(24, 24);
			this->J4->TabIndex = 39;
			this->J4->TabStop = false;
			this->J4->UseVisualStyleBackColor = true;
			this->J4->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// A9
			// 
			this->A9->Location = System::Drawing::Point(37, 277);
			this->A9->Name = L"A9";
			this->A9->Size = System::Drawing::Size(24, 24);
			this->A9->TabIndex = 80;
			this->A9->TabStop = false;
			this->A9->UseVisualStyleBackColor = true;
			this->A9->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// A5
			// 
			this->A5->Location = System::Drawing::Point(37, 158);
			this->A5->Name = L"A5";
			this->A5->Size = System::Drawing::Size(24, 24);
			this->A5->TabIndex = 40;
			this->A5->TabStop = false;
			this->A5->UseVisualStyleBackColor = true;
			this->A5->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// J8
			// 
			this->J8->Location = System::Drawing::Point(307, 247);
			this->J8->Name = L"J8";
			this->J8->Size = System::Drawing::Size(24, 24);
			this->J8->TabIndex = 79;
			this->J8->TabStop = false;
			this->J8->UseVisualStyleBackColor = true;
			this->J8->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// B5
			// 
			this->B5->Location = System::Drawing::Point(67, 158);
			this->B5->Name = L"B5";
			this->B5->Size = System::Drawing::Size(24, 24);
			this->B5->TabIndex = 41;
			this->B5->TabStop = false;
			this->B5->UseVisualStyleBackColor = true;
			this->B5->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// I8
			// 
			this->I8->Location = System::Drawing::Point(277, 247);
			this->I8->Name = L"I8";
			this->I8->Size = System::Drawing::Size(24, 24);
			this->I8->TabIndex = 78;
			this->I8->TabStop = false;
			this->I8->UseVisualStyleBackColor = true;
			this->I8->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// C5
			// 
			this->C5->Location = System::Drawing::Point(97, 158);
			this->C5->Name = L"C5";
			this->C5->Size = System::Drawing::Size(24, 24);
			this->C5->TabIndex = 42;
			this->C5->TabStop = false;
			this->C5->UseVisualStyleBackColor = true;
			this->C5->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// H8
			// 
			this->H8->Location = System::Drawing::Point(247, 247);
			this->H8->Name = L"H8";
			this->H8->Size = System::Drawing::Size(24, 24);
			this->H8->TabIndex = 77;
			this->H8->TabStop = false;
			this->H8->UseVisualStyleBackColor = true;
			this->H8->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// D5
			// 
			this->D5->Location = System::Drawing::Point(127, 158);
			this->D5->Name = L"D5";
			this->D5->Size = System::Drawing::Size(24, 24);
			this->D5->TabIndex = 43;
			this->D5->TabStop = false;
			this->D5->UseVisualStyleBackColor = true;
			this->D5->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// G8
			// 
			this->G8->Location = System::Drawing::Point(217, 247);
			this->G8->Name = L"G8";
			this->G8->Size = System::Drawing::Size(24, 24);
			this->G8->TabIndex = 76;
			this->G8->TabStop = false;
			this->G8->UseVisualStyleBackColor = true;
			this->G8->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// E5
			// 
			this->E5->Location = System::Drawing::Point(157, 158);
			this->E5->Name = L"E5";
			this->E5->Size = System::Drawing::Size(24, 24);
			this->E5->TabIndex = 44;
			this->E5->TabStop = false;
			this->E5->UseVisualStyleBackColor = true;
			this->E5->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// F8
			// 
			this->F8->Location = System::Drawing::Point(187, 247);
			this->F8->Name = L"F8";
			this->F8->Size = System::Drawing::Size(24, 24);
			this->F8->TabIndex = 75;
			this->F8->TabStop = false;
			this->F8->UseVisualStyleBackColor = true;
			this->F8->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// F5
			// 
			this->F5->Location = System::Drawing::Point(187, 158);
			this->F5->Name = L"F5";
			this->F5->Size = System::Drawing::Size(24, 24);
			this->F5->TabIndex = 45;
			this->F5->TabStop = false;
			this->F5->UseVisualStyleBackColor = true;
			this->F5->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// E8
			// 
			this->E8->Location = System::Drawing::Point(157, 247);
			this->E8->Name = L"E8";
			this->E8->Size = System::Drawing::Size(24, 24);
			this->E8->TabIndex = 74;
			this->E8->TabStop = false;
			this->E8->UseVisualStyleBackColor = true;
			this->E8->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// G5
			// 
			this->G5->Location = System::Drawing::Point(217, 158);
			this->G5->Name = L"G5";
			this->G5->Size = System::Drawing::Size(24, 24);
			this->G5->TabIndex = 46;
			this->G5->TabStop = false;
			this->G5->UseVisualStyleBackColor = true;
			this->G5->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// D8
			// 
			this->D8->Location = System::Drawing::Point(127, 247);
			this->D8->Name = L"D8";
			this->D8->Size = System::Drawing::Size(24, 24);
			this->D8->TabIndex = 73;
			this->D8->TabStop = false;
			this->D8->UseVisualStyleBackColor = true;
			this->D8->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// H5
			// 
			this->H5->Location = System::Drawing::Point(247, 158);
			this->H5->Name = L"H5";
			this->H5->Size = System::Drawing::Size(24, 24);
			this->H5->TabIndex = 47;
			this->H5->TabStop = false;
			this->H5->UseVisualStyleBackColor = true;
			this->H5->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// C8
			// 
			this->C8->Location = System::Drawing::Point(97, 247);
			this->C8->Name = L"C8";
			this->C8->Size = System::Drawing::Size(24, 24);
			this->C8->TabIndex = 72;
			this->C8->TabStop = false;
			this->C8->UseVisualStyleBackColor = true;
			this->C8->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// I5
			// 
			this->I5->Location = System::Drawing::Point(277, 158);
			this->I5->Name = L"I5";
			this->I5->Size = System::Drawing::Size(24, 24);
			this->I5->TabIndex = 48;
			this->I5->TabStop = false;
			this->I5->UseVisualStyleBackColor = true;
			this->I5->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// B8
			// 
			this->B8->Location = System::Drawing::Point(67, 247);
			this->B8->Name = L"B8";
			this->B8->Size = System::Drawing::Size(24, 24);
			this->B8->TabIndex = 71;
			this->B8->TabStop = false;
			this->B8->UseVisualStyleBackColor = true;
			this->B8->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// J5
			// 
			this->J5->Location = System::Drawing::Point(307, 158);
			this->J5->Name = L"J5";
			this->J5->Size = System::Drawing::Size(24, 24);
			this->J5->TabIndex = 49;
			this->J5->TabStop = false;
			this->J5->UseVisualStyleBackColor = true;
			this->J5->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// A8
			// 
			this->A8->Location = System::Drawing::Point(37, 247);
			this->A8->Name = L"A8";
			this->A8->Size = System::Drawing::Size(24, 24);
			this->A8->TabIndex = 70;
			this->A8->TabStop = false;
			this->A8->UseVisualStyleBackColor = true;
			this->A8->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// A6
			// 
			this->A6->Location = System::Drawing::Point(37, 187);
			this->A6->Name = L"A6";
			this->A6->Size = System::Drawing::Size(24, 24);
			this->A6->TabIndex = 50;
			this->A6->TabStop = false;
			this->A6->UseVisualStyleBackColor = true;
			this->A6->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// J7
			// 
			this->J7->Location = System::Drawing::Point(307, 217);
			this->J7->Name = L"J7";
			this->J7->Size = System::Drawing::Size(24, 24);
			this->J7->TabIndex = 69;
			this->J7->TabStop = false;
			this->J7->UseVisualStyleBackColor = true;
			this->J7->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// B6
			// 
			this->B6->Location = System::Drawing::Point(67, 187);
			this->B6->Name = L"B6";
			this->B6->Size = System::Drawing::Size(24, 24);
			this->B6->TabIndex = 51;
			this->B6->TabStop = false;
			this->B6->UseVisualStyleBackColor = true;
			this->B6->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// I7
			// 
			this->I7->Location = System::Drawing::Point(277, 217);
			this->I7->Name = L"I7";
			this->I7->Size = System::Drawing::Size(24, 24);
			this->I7->TabIndex = 68;
			this->I7->TabStop = false;
			this->I7->UseVisualStyleBackColor = true;
			this->I7->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// C6
			// 
			this->C6->Location = System::Drawing::Point(97, 187);
			this->C6->Name = L"C6";
			this->C6->Size = System::Drawing::Size(24, 24);
			this->C6->TabIndex = 52;
			this->C6->TabStop = false;
			this->C6->UseVisualStyleBackColor = true;
			this->C6->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// H7
			// 
			this->H7->Location = System::Drawing::Point(247, 217);
			this->H7->Name = L"H7";
			this->H7->Size = System::Drawing::Size(24, 24);
			this->H7->TabIndex = 67;
			this->H7->TabStop = false;
			this->H7->UseVisualStyleBackColor = true;
			this->H7->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// D6
			// 
			this->D6->Location = System::Drawing::Point(127, 187);
			this->D6->Name = L"D6";
			this->D6->Size = System::Drawing::Size(24, 24);
			this->D6->TabIndex = 53;
			this->D6->TabStop = false;
			this->D6->UseVisualStyleBackColor = true;
			this->D6->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// G7
			// 
			this->G7->Location = System::Drawing::Point(217, 217);
			this->G7->Name = L"G7";
			this->G7->Size = System::Drawing::Size(24, 24);
			this->G7->TabIndex = 66;
			this->G7->TabStop = false;
			this->G7->UseVisualStyleBackColor = true;
			this->G7->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// E6
			// 
			this->E6->Location = System::Drawing::Point(157, 187);
			this->E6->Name = L"E6";
			this->E6->Size = System::Drawing::Size(24, 24);
			this->E6->TabIndex = 54;
			this->E6->TabStop = false;
			this->E6->UseVisualStyleBackColor = true;
			this->E6->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// F7
			// 
			this->F7->Location = System::Drawing::Point(187, 217);
			this->F7->Name = L"F7";
			this->F7->Size = System::Drawing::Size(24, 24);
			this->F7->TabIndex = 65;
			this->F7->TabStop = false;
			this->F7->UseVisualStyleBackColor = true;
			this->F7->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// F6
			// 
			this->F6->Location = System::Drawing::Point(187, 187);
			this->F6->Name = L"F6";
			this->F6->Size = System::Drawing::Size(24, 24);
			this->F6->TabIndex = 55;
			this->F6->TabStop = false;
			this->F6->UseVisualStyleBackColor = true;
			this->F6->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// E7
			// 
			this->E7->Location = System::Drawing::Point(157, 217);
			this->E7->Name = L"E7";
			this->E7->Size = System::Drawing::Size(24, 24);
			this->E7->TabIndex = 64;
			this->E7->TabStop = false;
			this->E7->UseVisualStyleBackColor = true;
			this->E7->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// G6
			// 
			this->G6->Location = System::Drawing::Point(217, 187);
			this->G6->Name = L"G6";
			this->G6->Size = System::Drawing::Size(24, 24);
			this->G6->TabIndex = 56;
			this->G6->TabStop = false;
			this->G6->UseVisualStyleBackColor = true;
			this->G6->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// D7
			// 
			this->D7->Location = System::Drawing::Point(127, 217);
			this->D7->Name = L"D7";
			this->D7->Size = System::Drawing::Size(24, 24);
			this->D7->TabIndex = 63;
			this->D7->TabStop = false;
			this->D7->UseVisualStyleBackColor = true;
			this->D7->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// H6
			// 
			this->H6->Location = System::Drawing::Point(247, 187);
			this->H6->Name = L"H6";
			this->H6->Size = System::Drawing::Size(24, 24);
			this->H6->TabIndex = 57;
			this->H6->TabStop = false;
			this->H6->UseVisualStyleBackColor = true;
			this->H6->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// C7
			// 
			this->C7->Location = System::Drawing::Point(97, 217);
			this->C7->Name = L"C7";
			this->C7->Size = System::Drawing::Size(24, 24);
			this->C7->TabIndex = 62;
			this->C7->TabStop = false;
			this->C7->UseVisualStyleBackColor = true;
			this->C7->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// I6
			// 
			this->I6->Location = System::Drawing::Point(277, 187);
			this->I6->Name = L"I6";
			this->I6->Size = System::Drawing::Size(24, 24);
			this->I6->TabIndex = 58;
			this->I6->TabStop = false;
			this->I6->UseVisualStyleBackColor = true;
			this->I6->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// B7
			// 
			this->B7->Location = System::Drawing::Point(67, 217);
			this->B7->Name = L"B7";
			this->B7->Size = System::Drawing::Size(24, 24);
			this->B7->TabIndex = 61;
			this->B7->TabStop = false;
			this->B7->UseVisualStyleBackColor = true;
			this->B7->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// J6
			// 
			this->J6->Location = System::Drawing::Point(307, 187);
			this->J6->Name = L"J6";
			this->J6->Size = System::Drawing::Size(24, 24);
			this->J6->TabIndex = 59;
			this->J6->TabStop = false;
			this->J6->UseVisualStyleBackColor = true;
			this->J6->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// A7
			// 
			this->A7->Location = System::Drawing::Point(37, 217);
			this->A7->Name = L"A7";
			this->A7->Size = System::Drawing::Size(24, 24);
			this->A7->TabIndex = 60;
			this->A7->TabStop = false;
			this->A7->UseVisualStyleBackColor = true;
			this->A7->Click += gcnew System::EventHandler(this, &Gracz::button2_Click);
			// 
			// Gracz
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(786, 393);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"Gracz";
			this->Text = L"Gracz";
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

public: System::Void Dodaj(Gracz^ okno)
		{
			okno_drugiego_gracza = okno;
		}


public: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			Button^ kliknietyPrzycisk = static_cast<Button^>(sender);

			
			if (licznik < 9)
			{
				panel2->Enabled = true;
				panel1->Enabled = false;
				plansza[kliknietyPrzycisk->Name] = true;
				kliknietyPrzycisk->BackColor = Color::Black;
				kliknietyPrzycisk->Enabled = false;
				licznik++;
			}
			else
			{
				plansza[kliknietyPrzycisk->Name] = true;
				kliknietyPrzycisk->BackColor = Color::Black;
				kliknietyPrzycisk->Enabled = false;
				panel2->Enabled = false;
				panel1->Enabled = true;
				Gracz::Visible = false;
				MessageBox::Show("Gracz " + Gracz::Text + " wybra³ 10 statków. \n Graczu " + okno_drugiego_gracza->Text + ", czy jesteœ gotowy do gry?", okno_drugiego_gracza->Text, MessageBoxButtons::OK, MessageBoxIcon::Question);
				okno_drugiego_gracza->Show();
				
			}
		}

		System::Boolean CzyJestStatek(String^ indeks) {
			return plansza["_" + indeks];
}

		System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			Button^ kliknietyPrzycisk = static_cast<Button^>(sender);
			bool statek = okno_drugiego_gracza->CzyJestStatek(kliknietyPrzycisk->Name);
			if (licznik > 0) {
				if (statek) {
					kliknietyPrzycisk->BackColor = Color::Black;
					licznik--;
					kliknietyPrzycisk->Enabled = false;

				}
				else
				{
					kliknietyPrzycisk->BackColor = Color::White;
					kliknietyPrzycisk->Enabled = false;
					Gracz::Visible = false;
					MessageBox::Show("Pudlo!!! Kolej gracza " + okno_drugiego_gracza->Text, Gracz::Text, MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
					okno_drugiego_gracza->Show();
				}	
			}
			else
			{
				okno_drugiego_gracza->Visible = true;
				MessageBox::Show("Brawoooo!!! Trafiony zatopiony! Wygral gracz: " + Gracz::Text, Gracz::Text, MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			}
			
			
			
		}

	};
}
