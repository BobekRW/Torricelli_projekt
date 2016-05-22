#pragma once
#include<cmath>
#include"Funckje.h"

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
				 this->poka¿WykresToolStripMenuItem->Size = System::Drawing::Size(146, 22);
				 this->poka¿WykresToolStripMenuItem->Text = L"Poka¿ Wykres";
				 this->poka¿WykresToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::poka¿WykresToolStripMenuItem_Click);
				 // 
				 // koniecToolStripMenuItem
				 // 
				 this->koniecToolStripMenuItem->Name = L"koniecToolStripMenuItem";
				 this->koniecToolStripMenuItem->Size = System::Drawing::Size(146, 22);
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
				 this->etykietaPredkosc->BackColor = System::Drawing::SystemColors::Control;
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
				 this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
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
		oknoWykresu->Height = 435;
		oknoWykresu->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
		oknoWykresu->Location = Point(600,90);

		//wstawienie pictureBox 'a z wykresem

		PictureBox^ wykres = gcnew PictureBox();
		wykres->Image = Image::FromFile(L"wykres.jpg");
		wykres->Location = System::Drawing::Point(0, 0);
		wykres->Size = System::Drawing::Size(400, 400);
		wykres->TabIndex = 4;
		wykres->TabStop = false;

		//wyœwietlanie kolenych punktów przez wstawienie pictureBox'a z znacznikiem

		PictureBox^ znacznik0 = gcnew PictureBox();
		znacznik0->Image = Image::FromFile(L"znacznik.png");
		znacznik0->Location = System::Drawing::Point(18, 378);
		znacznik0->Size = System::Drawing::Size(4,4);
		znacznik0->TabIndex = 4;
		znacznik0->TabStop = false;

		PictureBox^ znacznik1 = gcnew PictureBox();
		znacznik1->Image = Image::FromFile(L"znacznik.png");
		znacznik1->Location = Point(wspolrzednaX(Ho, 1), wspolrzednaY(v, 1));
		znacznik1->Size = System::Drawing::Size(4, 4);
		znacznik1->TabIndex = 4;
		znacznik1->TabStop = false;
		znacznik1->Visible = true;

		PictureBox^ znacznik2 = gcnew PictureBox();
		znacznik2->Image = Image::FromFile(L"znacznik.png");
		znacznik2->Location = System::Drawing::Point(wspolrzednaX(Ho,2),wspolrzednaY(v,2));
		znacznik2->Size = System::Drawing::Size(4, 4);
		znacznik2->TabIndex = 4;
		znacznik2->TabStop = false;
		znacznik2->Visible = true;

		PictureBox^ znacznik3 = gcnew PictureBox();
		znacznik3->Image = Image::FromFile(L"znacznik.png");
		znacznik3->Location = System::Drawing::Point(wspolrzednaX(Ho, 3), wspolrzednaY(v,3));
		znacznik3->Size = System::Drawing::Size(4, 4);
		znacznik3->TabIndex = 4;
		znacznik3->TabStop = false;
		//znacznik3->Visible = false;

		PictureBox^ znacznik4 = gcnew PictureBox();
		znacznik4->Image = Image::FromFile(L"znacznik.png");
		znacznik4->Location = System::Drawing::Point(wspolrzednaX(Ho, 4), wspolrzednaY(v, 4));
		znacznik4->Size = System::Drawing::Size(4, 4);
		znacznik4->TabIndex = 4;
		znacznik4->TabStop = false;
		//znacznik4->Visible = false;

		PictureBox^ znacznik5 = gcnew PictureBox();
		znacznik5->Image = Image::FromFile(L"znacznik.png");
		znacznik5->Location = System::Drawing::Point(wspolrzednaX(Ho, 5), wspolrzednaY(v, 5));
		znacznik5->Size = System::Drawing::Size(4, 4);
		znacznik5->TabIndex = 4;
		znacznik5->TabStop = false;
		//znacznik5->Visible = false;

		PictureBox^ znacznik6 = gcnew PictureBox();
		znacznik6->Image = Image::FromFile(L"znacznik.png");
		znacznik6->Location = System::Drawing::Point(wspolrzednaX(Ho, 6), wspolrzednaY(v, 6));
		znacznik6->Size = System::Drawing::Size(4, 4);
		znacznik6->TabIndex = 4;
		znacznik6->TabStop = false;
		//znacznik6->Visible = false;

		PictureBox^ znacznik7 = gcnew PictureBox();
		znacznik7->Image = Image::FromFile(L"znacznik.png");
		znacznik7->Location = System::Drawing::Point(wspolrzednaX(Ho, 8), wspolrzednaY(v, 8));
		znacznik7->Size = System::Drawing::Size(4, 4);
		znacznik7->TabIndex = 4;
		znacznik7->TabStop = false;
		//znacznik7->Visible = false;

		PictureBox^ znacznik8 = gcnew PictureBox();
		znacznik8->Image = Image::FromFile(L"znacznik.png");
		znacznik8->Location = System::Drawing::Point(wspolrzednaX(Ho, 2), wspolrzednaY(v, 2));
		znacznik8->Size = System::Drawing::Size(4, 4);
		znacznik8->TabIndex = 4;
		znacznik8->TabStop = false;
		//znacznik8->Visible = false;


		//etykiety wartoœci y

		Label^ label_wartosci0y = gcnew Label();
		label_wartosci0y->AutoSize = true;
		label_wartosci0y->BackColor = System::Drawing::Color::DeepSkyBlue;
		label_wartosci0y->Location = System::Drawing::Point(2, 382); 
		label_wartosci0y->Size = System::Drawing::Size(10, 10);
		label_wartosci0y->TabIndex = 9;
		label_wartosci0y->Text = "(0,0)";

		Label^ label_wartosci1y = gcnew Label();
		label_wartosci1y->AutoSize = true;
		label_wartosci1y->BackColor = System::Drawing::Color::DeepSkyBlue;
		label_wartosci1y->Location = System::Drawing::Point(-3, 332);
		label_wartosci1y->Size = System::Drawing::Size(23, 10);
		label_wartosci1y->TabIndex = 9;
		label_wartosci1y->Text = String::Format("{0:0.0}", v / 8);
		label_wartosci1y->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7));

		Label^ label_wartosci2y = gcnew Label();
		label_wartosci2y->AutoSize = true;
		label_wartosci2y->BackColor = System::Drawing::Color::DeepSkyBlue;
		label_wartosci2y->Location = System::Drawing::Point(-3, 292);
		label_wartosci2y->Size = System::Drawing::Size(10, 10);
		label_wartosci2y->TabIndex = 9;
		label_wartosci2y->Text = String::Format("{0:0.0}", (v / 8) * 2);
		label_wartosci2y->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7));

		Label^ label_wartosci3y = gcnew Label();
		label_wartosci3y->AutoSize = true;
		label_wartosci3y->BackColor = System::Drawing::Color::DeepSkyBlue;
		label_wartosci3y->Location = System::Drawing::Point(-3, 252);
		label_wartosci3y->Size = System::Drawing::Size(10, 10);
		label_wartosci3y->TabIndex = 9;
		label_wartosci3y->Text = String::Format("{0:0.0}", (v / 8)*3);
		label_wartosci3y->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7));

		Label^ label_wartosci4y = gcnew Label();
		label_wartosci4y->AutoSize = true;
		label_wartosci4y->BackColor = System::Drawing::Color::DeepSkyBlue;
		label_wartosci4y->Location = System::Drawing::Point(-3, 212);
		label_wartosci4y->Size = System::Drawing::Size(10, 10);
		label_wartosci4y->TabIndex = 9;
		label_wartosci4y->Text = String::Format("{0:0.0}", (v / 8)*4);
		label_wartosci4y->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7));

		Label^ label_wartosci5y = gcnew Label();
		label_wartosci5y->AutoSize = true;
		label_wartosci5y->BackColor = System::Drawing::Color::DeepSkyBlue;
		label_wartosci5y->Location = System::Drawing::Point(-3,172);
		label_wartosci5y->Size = System::Drawing::Size(10, 10);
		label_wartosci5y->TabIndex = 9;
		label_wartosci5y->Text = String::Format("{0:0.0}", (v / 8)*5);
		label_wartosci5y->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7));

		Label^ label_wartosci6y = gcnew Label();
		label_wartosci6y->AutoSize = true;
		label_wartosci6y->BackColor = System::Drawing::Color::DeepSkyBlue;
		label_wartosci6y->Location = System::Drawing::Point(-3, 132);
		label_wartosci6y->Size = System::Drawing::Size(10, 10);
		label_wartosci6y->TabIndex = 9;
		label_wartosci6y->Text = String::Format("{0:0.0}", (v / 8)*6);
		label_wartosci6y->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7));

		Label^ label_wartosci7y = gcnew Label();
		label_wartosci7y->AutoSize = true;
		label_wartosci7y->BackColor = System::Drawing::Color::DeepSkyBlue;
		label_wartosci7y->Location = System::Drawing::Point(-3, 92);
		label_wartosci7y->Size = System::Drawing::Size(10, 10);
		label_wartosci7y->TabIndex = 9;
		label_wartosci7y->Text = String::Format("{0:0.0}", (v / 8)*7);
		label_wartosci7y->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7));

		Label^ label_wartosci8y = gcnew Label();
		label_wartosci8y->AutoSize = true;
		label_wartosci8y->BackColor = System::Drawing::Color::DeepSkyBlue;
		label_wartosci8y->Location = System::Drawing::Point(-3, 52);
		label_wartosci8y->Size = System::Drawing::Size(10, 10);
		label_wartosci8y->TabIndex = 9;
		label_wartosci8y->Text = String::Format("{0:0.0}", v);
		label_wartosci8y->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7));

		//Etykiety wartoœci x

		Label^ label_wartosci1x = gcnew Label();
		label_wartosci1x->AutoSize = true;
		label_wartosci1x->BackColor = System::Drawing::Color::DeepSkyBlue;
		label_wartosci1x->Location = System::Drawing::Point(42, 382);
		label_wartosci1x->Size = System::Drawing::Size(10, 10);
		label_wartosci1x->TabIndex = 9;
		label_wartosci1x->Text = String::Format("{0:0.00}", (Ho / 8));
		label_wartosci1y->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7));

		Label^ label_wartosci2x = gcnew Label();
		label_wartosci2x->AutoSize = true;
		label_wartosci2x->BackColor = System::Drawing::Color::DeepSkyBlue;
		label_wartosci2x->Location = System::Drawing::Point(82, 382);
		label_wartosci2x->Size = System::Drawing::Size(10, 10);
		label_wartosci2x->TabIndex = 9;
		label_wartosci2x->Text = String::Format("{0:0.00}", (Ho / 8)*2);
		label_wartosci1y->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7));

		Label^ label_wartosci3x = gcnew Label();
		label_wartosci3x->AutoSize = true;
		label_wartosci3x->BackColor = System::Drawing::Color::DeepSkyBlue;
		label_wartosci3x->Location = System::Drawing::Point(122, 382);
		label_wartosci3x->Size = System::Drawing::Size(10, 10);
		label_wartosci3x->TabIndex = 9;
		label_wartosci3x->Text = String::Format("{0:0.00}", (Ho / 8)*3);
		label_wartosci1y->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7));

		Label^ label_wartosci4x = gcnew Label();
		label_wartosci4x->AutoSize = true;
		label_wartosci4x->BackColor = System::Drawing::Color::DeepSkyBlue;
		label_wartosci4x->Location = System::Drawing::Point(162, 382);
		label_wartosci4x->Size = System::Drawing::Size(10, 10);
		label_wartosci4x->TabIndex = 9;
		label_wartosci4x->Text = String::Format("{0:0.00}", (Ho / 8)*4);
		label_wartosci1y->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7));

		Label^ label_wartosci5x = gcnew Label();
		label_wartosci5x->AutoSize = true;
		label_wartosci5x->BackColor = System::Drawing::Color::DeepSkyBlue;
		label_wartosci5x->Location = System::Drawing::Point(202, 382);
		label_wartosci5x->Size = System::Drawing::Size(10, 10);
		label_wartosci5x->TabIndex = 9;
		label_wartosci5x->Text = String::Format("{0:0.00}", (Ho / 8)*5);
		label_wartosci1y->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7));

		Label^ label_wartosci6x = gcnew Label();
		label_wartosci6x->AutoSize = true;
		label_wartosci6x->BackColor = System::Drawing::Color::DeepSkyBlue;
		label_wartosci6x->Location = System::Drawing::Point(242, 382);
		label_wartosci6x->Size = System::Drawing::Size(10, 10);
		label_wartosci6x->TabIndex = 9;
		label_wartosci6x->Text = String::Format("{0:0.00}", (Ho / 8)*6);
		label_wartosci1y->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7));

		Label^ label_wartosci7x = gcnew Label();
		label_wartosci7x->AutoSize = true;
		label_wartosci7x->BackColor = System::Drawing::Color::DeepSkyBlue;
		label_wartosci7x->Location = System::Drawing::Point(282, 382);
		label_wartosci7x->Size = System::Drawing::Size(10, 10);
		label_wartosci7x->TabIndex = 9;
		label_wartosci7x->Text = String::Format("{0:0.00}", (Ho / 8)*7);
		label_wartosci1y->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7));

		Label^ label_wartosci8x = gcnew Label();
		label_wartosci8x->AutoSize = true;
		label_wartosci8x->BackColor = System::Drawing::Color::DeepSkyBlue;
		label_wartosci8x->Location = System::Drawing::Point(322, 382);
		label_wartosci8x->Size = System::Drawing::Size(10, 10);
		label_wartosci8x->TabIndex = 9;
		label_wartosci8x->Text = String::Format("{0:0.00}", Ho);
		label_wartosci1y->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7));

		//etykieta nag³ówkowa wykresu

		Label^ label_naglowek = gcnew Label();
		label_naglowek->AutoSize = true;
		label_naglowek->BackColor = System::Drawing::Color::DeepSkyBlue;
		label_naglowek->Location = System::Drawing::Point(120, 20);
		label_naglowek->Size = System::Drawing::Size(100, 100);
		label_naglowek->TabIndex = 9;
		label_naglowek->Text = "Wykres zale¿noœci";
		label_naglowek->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));

		Label^ label_podpisY = gcnew Label();
		label_podpisY->AutoSize = true;
		label_podpisY->BackColor = System::Drawing::Color::DeepSkyBlue;
		label_podpisY->Location = System::Drawing::Point(2, 20);
		label_podpisY->Size = System::Drawing::Size(10, 10);
		label_podpisY->TabIndex = 9;
		label_podpisY->Text = "v[m/s]";

		Label^ label_podpisX = gcnew Label();
		label_podpisX->AutoSize = true;
		label_podpisX->BackColor = System::Drawing::Color::DeepSkyBlue;
		label_podpisX->Location = System::Drawing::Point(362, 350);
		label_podpisX->Size = System::Drawing::Size(10, 10);
		label_podpisX->TabIndex = 9;
		label_podpisX->Text = "h[m]";


		oknoWykresu->Controls->Add(znacznik0);
		oknoWykresu->Controls->Add(znacznik1);
		oknoWykresu->Controls->Add(znacznik2);
		oknoWykresu->Controls->Add(znacznik3);
		oknoWykresu->Controls->Add(znacznik4);
		oknoWykresu->Controls->Add(znacznik5);
		oknoWykresu->Controls->Add(znacznik6);
		oknoWykresu->Controls->Add(znacznik7);
		oknoWykresu->Controls->Add(znacznik8);
		oknoWykresu->Controls->Add(label_naglowek);
		oknoWykresu->Controls->Add(label_wartosci0y);
		oknoWykresu->Controls->Add(label_wartosci1y);
		oknoWykresu->Controls->Add(label_wartosci2y);
		oknoWykresu->Controls->Add(label_wartosci3y);
		oknoWykresu->Controls->Add(label_wartosci4y);
		oknoWykresu->Controls->Add(label_wartosci5y);
		oknoWykresu->Controls->Add(label_wartosci6y);
		oknoWykresu->Controls->Add(label_wartosci7y);
		oknoWykresu->Controls->Add(label_wartosci8y);
		oknoWykresu->Controls->Add(label_wartosci1x);
		oknoWykresu->Controls->Add(label_wartosci2x);
		oknoWykresu->Controls->Add(label_wartosci3x);
		oknoWykresu->Controls->Add(label_wartosci4x);
		oknoWykresu->Controls->Add(label_wartosci5x);
		oknoWykresu->Controls->Add(label_wartosci6x);
		oknoWykresu->Controls->Add(label_wartosci7x);
		oknoWykresu->Controls->Add(label_wartosci8x);
		oknoWykresu->Controls->Add(label_podpisX);
		oknoWykresu->Controls->Add(label_podpisY);
		oknoWykresu->Controls->Add(wykres);
		

		if (check == true)
		{
			oknoWykresu->Show();

		}
		else
			MessageBox::Show("Podano niepoprawne wartoœci", "B³¹d", MessageBoxButtons::OK, MessageBoxIcon::Information);

	}
};
}

