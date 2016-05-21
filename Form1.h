#pragma once
#include<cmath>

namespace Torricelli {

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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  wysokoscBeczkitextBox;
	protected:

	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  plikToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  koniecToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  edycjaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  oProgramieToolStripMenuItem;
	private: System::Windows::Forms::TextBox^  wysokoscOtworutextBox;

	private: System::Windows::Forms::TextBox^  GrawitacjatextBox;




	private: System::Windows::Forms::Label^  etykietaWysokosciBeczki;
	private: System::Windows::Forms::Label^  etykietaWysokoscOtworu;
	private: System::Windows::Forms::Label^  etykietaGrawitacja;
	private: System::Windows::Forms::Label^  etykietaWyniki;
	private: System::Windows::Forms::Label^  etykietaPredkosc;
	private: System::Windows::Forms::Label^  etykietaZasieg;
	private: System::Windows::Forms::Label^  wynikPredkosci;
	private: System::Windows::Forms::Label^  wynikZasieg;
	private: System::Windows::Forms::Button^  policzButton;


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
		double Hb = 0.0;
		double Ho = 0.0;
		double v = 0.0;
		double g = 0.0;
		double Z = 0.0;
		double t = 0.0;
		int size_x = 0;
		int size_y = 0;

	private: System::Windows::Forms::Label^  etykietaCzasSpadku;
	private: System::Windows::Forms::Label^  wynikCzasu;
	private: System::Windows::Forms::ToolStripMenuItem^  poka¿WykresToolStripMenuItem;
			 bool check = true;



#pragma region Windows Form Designer generated code
			 /// <summary>
			 /// Required method for Designer support - do not modify
			 /// the contents of this method with the code editor.
			 /// </summary>
			 void InitializeComponent(void)
			 {
				 this->wysokoscBeczkitextBox = (gcnew System::Windows::Forms::TextBox());
				 this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
				 this->plikToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->poka¿WykresToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->koniecToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->edycjaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->oProgramieToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->wysokoscOtworutextBox = (gcnew System::Windows::Forms::TextBox());
				 this->GrawitacjatextBox = (gcnew System::Windows::Forms::TextBox());
				 this->etykietaWysokosciBeczki = (gcnew System::Windows::Forms::Label());
				 this->etykietaWysokoscOtworu = (gcnew System::Windows::Forms::Label());
				 this->etykietaGrawitacja = (gcnew System::Windows::Forms::Label());
				 this->etykietaWyniki = (gcnew System::Windows::Forms::Label());
				 this->etykietaPredkosc = (gcnew System::Windows::Forms::Label());
				 this->etykietaZasieg = (gcnew System::Windows::Forms::Label());
				 this->wynikPredkosci = (gcnew System::Windows::Forms::Label());
				 this->wynikZasieg = (gcnew System::Windows::Forms::Label());
				 this->policzButton = (gcnew System::Windows::Forms::Button());
				 this->etykietaCzasSpadku = (gcnew System::Windows::Forms::Label());
				 this->wynikCzasu = (gcnew System::Windows::Forms::Label());
				 this->menuStrip1->SuspendLayout();
				 this->SuspendLayout();
				 // 
				 // wysokoscBeczkitextBox
				 // 
				 this->wysokoscBeczkitextBox->Location = System::Drawing::Point(12, 90);
				 this->wysokoscBeczkitextBox->Name = L"wysokoscBeczkitextBox";
				 this->wysokoscBeczkitextBox->Size = System::Drawing::Size(94, 20);
				 this->wysokoscBeczkitextBox->TabIndex = 0;
				 this->wysokoscBeczkitextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
				 // 
				 // menuStrip1
				 // 
				 this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
					 this->plikToolStripMenuItem,
						 this->edycjaToolStripMenuItem, this->oProgramieToolStripMenuItem
				 });
				 this->menuStrip1->Location = System::Drawing::Point(0, 0);
				 this->menuStrip1->Name = L"menuStrip1";
				 this->menuStrip1->Size = System::Drawing::Size(372, 24);
				 this->menuStrip1->TabIndex = 1;
				 this->menuStrip1->Text = L"menuStrip1";
				 // 
				 // plikToolStripMenuItem
				 // 
				 this->plikToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
					 this->poka¿WykresToolStripMenuItem,
						 this->koniecToolStripMenuItem
				 });
				 this->plikToolStripMenuItem->Name = L"plikToolStripMenuItem";
				 this->plikToolStripMenuItem->Size = System::Drawing::Size(38, 20);
				 this->plikToolStripMenuItem->Text = L"Plik";
				 // 
				 // poka¿WykresToolStripMenuItem
				 // 
				 this->poka¿WykresToolStripMenuItem->Name = L"poka¿WykresToolStripMenuItem";
				 this->poka¿WykresToolStripMenuItem->Size = System::Drawing::Size(152, 22);
				 this->poka¿WykresToolStripMenuItem->Text = L"Poka¿ Wykres";
				 this->poka¿WykresToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::poka¿WykresToolStripMenuItem_Click);
				 // 
				 // koniecToolStripMenuItem
				 // 
				 this->koniecToolStripMenuItem->Name = L"koniecToolStripMenuItem";
				 this->koniecToolStripMenuItem->Size = System::Drawing::Size(152, 22);
				 this->koniecToolStripMenuItem->Text = L"Koniec";
				 this->koniecToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::koniecToolStripMenuItem_Click);
				 // 
				 // edycjaToolStripMenuItem
				 // 
				 this->edycjaToolStripMenuItem->Name = L"edycjaToolStripMenuItem";
				 this->edycjaToolStripMenuItem->Size = System::Drawing::Size(53, 20);
				 this->edycjaToolStripMenuItem->Text = L"Edycja";
				 // 
				 // oProgramieToolStripMenuItem
				 // 
				 this->oProgramieToolStripMenuItem->Name = L"oProgramieToolStripMenuItem";
				 this->oProgramieToolStripMenuItem->Size = System::Drawing::Size(86, 20);
				 this->oProgramieToolStripMenuItem->Text = L"O programie";
				 // 
				 // wysokoscOtworutextBox
				 // 
				 this->wysokoscOtworutextBox->Location = System::Drawing::Point(12, 145);
				 this->wysokoscOtworutextBox->Name = L"wysokoscOtworutextBox";
				 this->wysokoscOtworutextBox->Size = System::Drawing::Size(94, 20);
				 this->wysokoscOtworutextBox->TabIndex = 2;
				 this->wysokoscOtworutextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
				 // 
				 // GrawitacjatextBox
				 // 
				 this->GrawitacjatextBox->Location = System::Drawing::Point(12, 205);
				 this->GrawitacjatextBox->Name = L"GrawitacjatextBox";
				 this->GrawitacjatextBox->Size = System::Drawing::Size(96, 20);
				 this->GrawitacjatextBox->TabIndex = 4;
				 this->GrawitacjatextBox->Text = L"9,8065";
				 this->GrawitacjatextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
				 // 
				 // etykietaWysokosciBeczki
				 // 
				 this->etykietaWysokosciBeczki->AutoSize = true;
				 this->etykietaWysokosciBeczki->Location = System::Drawing::Point(9, 64);
				 this->etykietaWysokosciBeczki->Name = L"etykietaWysokosciBeczki";
				 this->etykietaWysokosciBeczki->Size = System::Drawing::Size(85, 26);
				 this->etykietaWysokosciBeczki->TabIndex = 5;
				 this->etykietaWysokosciBeczki->Text = L"Wysokoœæ wody\nw beczce [m]:";
				 // 
				 // etykietaWysokoscOtworu
				 // 
				 this->etykietaWysokoscOtworu->AutoSize = true;
				 this->etykietaWysokoscOtworu->Location = System::Drawing::Point(9, 119);
				 this->etykietaWysokoscOtworu->Name = L"etykietaWysokoscOtworu";
				 this->etykietaWysokoscOtworu->Size = System::Drawing::Size(88, 26);
				 this->etykietaWysokoscOtworu->TabIndex = 6;
				 this->etykietaWysokoscOtworu->Text = L"Wysokoœæ wody\nnad otworem [m]:";
				 // 
				 // etykietaGrawitacja
				 // 
				 this->etykietaGrawitacja->AutoSize = true;
				 this->etykietaGrawitacja->Location = System::Drawing::Point(9, 175);
				 this->etykietaGrawitacja->Name = L"etykietaGrawitacja";
				 this->etykietaGrawitacja->Size = System::Drawing::Size(118, 26);
				 this->etykietaGrawitacja->TabIndex = 7;
				 this->etykietaGrawitacja->Text = L"Wartoœæ przyspieszenia\nziemskie [m/s^2]:";
				 // 
				 // etykietaWyniki
				 // 
				 this->etykietaWyniki->AutoSize = true;
				 this->etykietaWyniki->Location = System::Drawing::Point(234, 64);
				 this->etykietaWyniki->Name = L"etykietaWyniki";
				 this->etykietaWyniki->Size = System::Drawing::Size(45, 13);
				 this->etykietaWyniki->TabIndex = 8;
				 this->etykietaWyniki->Text = L"Wyniki :";
				 // 
				 // etykietaPredkosc
				 // 
				 this->etykietaPredkosc->AutoSize = true;
				 this->etykietaPredkosc->Location = System::Drawing::Point(234, 90);
				 this->etykietaPredkosc->Name = L"etykietaPredkosc";
				 this->etykietaPredkosc->Size = System::Drawing::Size(110, 13);
				 this->etykietaPredkosc->TabIndex = 9;
				 this->etykietaPredkosc->Text = L"Maks. prêdkoœæ [m/s]";
				 // 
				 // etykietaZasieg
				 // 
				 this->etykietaZasieg->AutoSize = true;
				 this->etykietaZasieg->Location = System::Drawing::Point(234, 132);
				 this->etykietaZasieg->Name = L"etykietaZasieg";
				 this->etykietaZasieg->Size = System::Drawing::Size(86, 13);
				 this->etykietaZasieg->TabIndex = 10;
				 this->etykietaZasieg->Text = L"Maks. zasiêg [m]";
				 // 
				 // wynikPredkosci
				 // 
				 this->wynikPredkosci->AutoSize = true;
				 this->wynikPredkosci->Location = System::Drawing::Point(234, 103);
				 this->wynikPredkosci->Name = L"wynikPredkosci";
				 this->wynikPredkosci->Size = System::Drawing::Size(0, 13);
				 this->wynikPredkosci->TabIndex = 11;
				 // 
				 // wynikZasieg
				 // 
				 this->wynikZasieg->AutoSize = true;
				 this->wynikZasieg->Location = System::Drawing::Point(234, 152);
				 this->wynikZasieg->Name = L"wynikZasieg";
				 this->wynikZasieg->Size = System::Drawing::Size(0, 13);
				 this->wynikZasieg->TabIndex = 12;
				 // 
				 // policzButton
				 // 
				 this->policzButton->Location = System::Drawing::Point(269, 226);
				 this->policzButton->Name = L"policzButton";
				 this->policzButton->Size = System::Drawing::Size(75, 23);
				 this->policzButton->TabIndex = 13;
				 this->policzButton->Text = L"Policz";
				 this->policzButton->UseVisualStyleBackColor = true;
				 this->policzButton->Click += gcnew System::EventHandler(this, &Form1::policzButton_Click);
				 // 
				 // etykietaCzasSpadku
				 // 
				 this->etykietaCzasSpadku->AutoSize = true;
				 this->etykietaCzasSpadku->Location = System::Drawing::Point(234, 175);
				 this->etykietaCzasSpadku->Name = L"etykietaCzasSpadku";
				 this->etykietaCzasSpadku->Size = System::Drawing::Size(132, 13);
				 this->etykietaCzasSpadku->TabIndex = 14;
				 this->etykietaCzasSpadku->Text = L"Czas spadku strumienia [s]";
				 // 
				 // wynikCzasu
				 // 
				 this->wynikCzasu->AutoSize = true;
				 this->wynikCzasu->Location = System::Drawing::Point(234, 188);
				 this->wynikCzasu->Name = L"wynikCzasu";
				 this->wynikCzasu->Size = System::Drawing::Size(0, 13);
				 this->wynikCzasu->TabIndex = 15;
				 // 
				 // Form1
				 // 
				 this->AutoScaleDimensions = System::Drawing::SizeF(size_x, size_y);
				 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				 this->ClientSize = System::Drawing::Size(372, 261);
				 this->Controls->Add(this->wynikCzasu);
				 this->Controls->Add(this->etykietaCzasSpadku);
				 this->Controls->Add(this->policzButton);
				 this->Controls->Add(this->wynikZasieg);
				 this->Controls->Add(this->wynikPredkosci);
				 this->Controls->Add(this->etykietaZasieg);
				 this->Controls->Add(this->etykietaPredkosc);
				 this->Controls->Add(this->etykietaWyniki);
				 this->Controls->Add(this->etykietaGrawitacja);
				 this->Controls->Add(this->etykietaWysokoscOtworu);
				 this->Controls->Add(this->etykietaWysokosciBeczki);
				 this->Controls->Add(this->GrawitacjatextBox);
				 this->Controls->Add(this->wysokoscOtworutextBox);
				 this->Controls->Add(this->wysokoscBeczkitextBox);
				 this->Controls->Add(this->menuStrip1);
				 this->MainMenuStrip = this->menuStrip1;
				 this->Name = L"Form1";
				 this->Text = L"Torricelli v. 1.0";
				 this->menuStrip1->ResumeLayout(false);
				 this->menuStrip1->PerformLayout();
				 this->ResumeLayout(false);
				 this->PerformLayout();

			 }
#pragma endregion
	private: System::Void koniecToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();
	}
	private: System::Void policzButton_Click(System::Object^  sender, System::EventArgs^  e) {
		// Hb
		try
		{
			if (Double::Parse(wysokoscBeczkitextBox->Text) >= 1.0)
				Hb = Double::Parse(wysokoscBeczkitextBox->Text);
			else{
				MessageBox::Show("B³êdne dane dla wartoœci wysokoœci beczki!", "B³¹d", MessageBoxButtons::OK, MessageBoxIcon::Information);
				check = false;
			}
		}
		catch (FormatException^ /*ex*/)
		{
			MessageBox::Show("B³êdne dane dla wartoœci wysokoœci beczki!", "B³¹d", MessageBoxButtons::OK, MessageBoxIcon::Information);
			check = false;
		}
		// Ho
		try
		{
			if (Double::Parse(wysokoscOtworutextBox->Text) <= Hb && Double::Parse(wysokoscOtworutextBox->Text) >= 0)
				Ho = Double::Parse(wysokoscOtworutextBox->Text);
			else{
				MessageBox::Show("B³êdne dane dla wartoœci wysokoœci otworu beczki!", "B³¹d", MessageBoxButtons::OK, MessageBoxIcon::Information);
				wysokoscOtworutextBox->Clear();
				check = false;
			}
		}
		catch (FormatException^ /*ex*/)
		{
			MessageBox::Show("B³êdne dane dla wartoœci wysokoœci otworu beczki!", "B³¹d", MessageBoxButtons::OK, MessageBoxIcon::Information);
			check = false;
		}
		// g
		try
		{
			if (Double::Parse(GrawitacjatextBox->Text) <= 10.0 && Double::Parse(GrawitacjatextBox->Text) > 9.7)
				g = Double::Parse(GrawitacjatextBox->Text);
			else
				MessageBox::Show("Podana wartoœæ przyspieszenia grawitacyjnego jest niepoprawna", "B³¹d", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		catch (FormatException^ /*ex*/)
		{
			MessageBox::Show("B³êdne dane dla wartoœci przyspieszenia grawitacyjnego!", "B³¹d", MessageBoxButtons::OK, MessageBoxIcon::Information);
			check = false;
		}

		if (check == true)
		{
			v = sqrt(2 * g*(Hb - Ho));
			Z = 2 * sqrt(Ho*(Hb - Ho));
			t = sqrt((2 * (Hb - Ho)) / g);
			wynikPredkosci->Text = (v).ToString();
			wynikZasieg->Text = (Z).ToString();
			wynikCzasu->Text = (t).ToString();
		}
	}
	private: System::Void poka¿WykresToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		Form^ oknoWykresu = gcnew Form();
		oknoWykresu->Text = "Wykres";
		oknoWykresu->Width=400;
		oknoWykresu->Height = 400;
		oknoWykresu->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
		oknoWykresu->Location = Point(size_x+600, size_y+90);
		if (check == true)
			oknoWykresu->Show();
		else
			MessageBox::Show("Podano niepoprawne wartoœci", "B³¹d", MessageBoxButtons::OK, MessageBoxIcon::Information);

	}
};
}

