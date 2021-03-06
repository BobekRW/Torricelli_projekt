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
		bool check = true;
		bool choice = false;

	private: System::Windows::Forms::Label^  etykietaCzasSpadku;
	private: System::Windows::Forms::Label^  wynikCzasu;
	private: System::Windows::Forms::ToolStripMenuItem^  zmie�WykresToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  vhToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  zhToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  poka�WykresToolStripMenuItem;



			



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
				 this->poka�WykresToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->koniecToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->edycjaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->zmie�WykresToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->vhToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->zhToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
					 this->poka�WykresToolStripMenuItem,
						 this->koniecToolStripMenuItem
				 });
				 this->plikToolStripMenuItem->Name = L"plikToolStripMenuItem";
				 this->plikToolStripMenuItem->Size = System::Drawing::Size(38, 20);
				 this->plikToolStripMenuItem->Text = L"Plik";
				 // 
				 // poka�WykresToolStripMenuItem
				 // 
				 this->poka�WykresToolStripMenuItem->Name = L"poka�WykresToolStripMenuItem";
				 this->poka�WykresToolStripMenuItem->Size = System::Drawing::Size(146, 22);
				 this->poka�WykresToolStripMenuItem->Text = L"Poka� Wykres";
				 this->poka�WykresToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::poka�WykresToolStripMenuItem_Click);
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
				 this->edycjaToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->zmie�WykresToolStripMenuItem });
				 this->edycjaToolStripMenuItem->Name = L"edycjaToolStripMenuItem";
				 this->edycjaToolStripMenuItem->Size = System::Drawing::Size(53, 20);
				 this->edycjaToolStripMenuItem->Text = L"Edycja";
				 // 
				 // zmie�WykresToolStripMenuItem
				 // 
				 this->zmie�WykresToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
					 this->vhToolStripMenuItem,
						 this->zhToolStripMenuItem
				 });
				 this->zmie�WykresToolStripMenuItem->Name = L"zmie�WykresToolStripMenuItem";
				 this->zmie�WykresToolStripMenuItem->Size = System::Drawing::Size(152, 22);
				 this->zmie�WykresToolStripMenuItem->Text = L"Zmie� Wykres";
				 // 
				 // vhToolStripMenuItem
				 // 
				 this->vhToolStripMenuItem->Name = L"vhToolStripMenuItem";
				 this->vhToolStripMenuItem->Size = System::Drawing::Size(152, 22);
				 this->vhToolStripMenuItem->Text = L"v(h)";
				 this->vhToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::vhToolStripMenuItem_Click);
				 // 
				 // zhToolStripMenuItem
				 // 
				 this->zhToolStripMenuItem->Name = L"zhToolStripMenuItem";
				 this->zhToolStripMenuItem->Size = System::Drawing::Size(152, 22);
				 this->zhToolStripMenuItem->Text = L"Z(h)";
				 this->zhToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::zhToolStripMenuItem_Click);
				 // 
				 // oProgramieToolStripMenuItem
				 // 
				 this->oProgramieToolStripMenuItem->Name = L"oProgramieToolStripMenuItem";
				 this->oProgramieToolStripMenuItem->Size = System::Drawing::Size(86, 20);
				 this->oProgramieToolStripMenuItem->Text = L"O programie";
				 this->oProgramieToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::oProgramieToolStripMenuItem_Click);
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
				 this->etykietaWysokosciBeczki->Text = L"Wysoko�� wody\nw beczce [m]:";
				 // 
				 // etykietaWysokoscOtworu
				 // 
				 this->etykietaWysokoscOtworu->AutoSize = true;
				 this->etykietaWysokoscOtworu->Location = System::Drawing::Point(9, 119);
				 this->etykietaWysokoscOtworu->Name = L"etykietaWysokoscOtworu";
				 this->etykietaWysokoscOtworu->Size = System::Drawing::Size(88, 26);
				 this->etykietaWysokoscOtworu->TabIndex = 6;
				 this->etykietaWysokoscOtworu->Text = L"Wysoko�� wody\nnad otworem [m]:";
				 // 
				 // etykietaGrawitacja
				 // 
				 this->etykietaGrawitacja->AutoSize = true;
				 this->etykietaGrawitacja->Location = System::Drawing::Point(9, 175);
				 this->etykietaGrawitacja->Name = L"etykietaGrawitacja";
				 this->etykietaGrawitacja->Size = System::Drawing::Size(118, 26);
				 this->etykietaGrawitacja->TabIndex = 7;
				 this->etykietaGrawitacja->Text = L"Warto�� przyspieszenia\nziemskie [m/s^2]:";
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
				 this->etykietaPredkosc->Text = L"Maks. pr�dko�� [m/s]";
				 // 
				 // etykietaZasieg
				 // 
				 this->etykietaZasieg->AutoSize = true;
				 this->etykietaZasieg->Location = System::Drawing::Point(234, 132);
				 this->etykietaZasieg->Name = L"etykietaZasieg";
				 this->etykietaZasieg->Size = System::Drawing::Size(86, 13);
				 this->etykietaZasieg->TabIndex = 10;
				 this->etykietaZasieg->Text = L"Maks. zasi�g [m]";
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
			if (Double::Parse(wysokoscBeczkitextBox->Text) >= 1.0 || String::IsNullOrWhiteSpace(wysokoscBeczkitextBox->Text)!=true || String::IsNullOrEmpty(wysokoscBeczkitextBox->Text)!=true)
				Hb = Double::Parse(wysokoscBeczkitextBox->Text);
			else{
				MessageBox::Show("B��dne dane dla warto�ci wysoko�ci beczki!", "B��d", MessageBoxButtons::OK, MessageBoxIcon::Information);
				check = false;
			}
		}
		catch (Exception ^e)
		{
			MessageBox::Show("B��dne dane dla warto�ci wysoko�ci beczki!", "B��d", MessageBoxButtons::OK, MessageBoxIcon::Information);
			check = false;
		}
		// Ho
		try
		{
			if (Double::Parse(wysokoscOtworutextBox->Text) <= Hb && Double::Parse(wysokoscOtworutextBox->Text) >= 0 || String::IsNullOrWhiteSpace(wysokoscBeczkitextBox->Text) != true || String::IsNullOrEmpty(wysokoscBeczkitextBox->Text) != true)
				Ho = Double::Parse(wysokoscOtworutextBox->Text);
			else{
				MessageBox::Show("B��dne dane dla warto�ci wysoko�ci otworu beczki!", "B��d", MessageBoxButtons::OK, MessageBoxIcon::Information);
				check = false;
			}
		}
		catch (Exception ^e)
		{
			MessageBox::Show("B��dne dane dla warto�ci wysoko�ci otworu beczki!", "B��d", MessageBoxButtons::OK, MessageBoxIcon::Information);
			check = false;
		}
		// g
		try
		{
			if (Double::Parse(GrawitacjatextBox->Text) <= 10.0 && Double::Parse(GrawitacjatextBox->Text) > 9.7 || String::IsNullOrWhiteSpace(wysokoscBeczkitextBox->Text) != true || String::IsNullOrEmpty(wysokoscBeczkitextBox->Text) != true)
				g = Double::Parse(GrawitacjatextBox->Text);
			else
			{
				MessageBox::Show("Podana warto�� przyspieszenia grawitacyjnego jest niepoprawna", "B��d", MessageBoxButtons::OK, MessageBoxIcon::Information);
				check = false;
			}
		}
		catch (Exception ^e)
		{
			MessageBox::Show("B��dne dane dla warto�ci przyspieszenia grawitacyjnego!", "B��d", MessageBoxButtons::OK, MessageBoxIcon::Information);
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
	private: System::Void poka�WykresToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
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

		//wy�wietlanie kolenych punkt�w przez wstawienie pictureBox'a z znacznikiem

		PictureBox^ znacznik0 = gcnew PictureBox();
		znacznik0->Image = Image::FromFile(L"znacznik.png");
		znacznik0->Location = System::Drawing::Point(18, 378);
		znacznik0->Size = System::Drawing::Size(4,4);
		znacznik0->TabIndex = 4;
		znacznik0->TabStop = false;
		znacznik0->Visible = false;

		PictureBox^ znacznik1 = gcnew PictureBox();
		znacznik1->Image = Image::FromFile(L"znacznik.png");
		znacznik1->Size = System::Drawing::Size(4, 4);
		znacznik1->TabIndex = 4;
		znacznik1->TabStop = false;
		znacznik1->Visible = false;

		PictureBox^ znacznik2 = gcnew PictureBox();
		znacznik2->Image = Image::FromFile(L"znacznik.png");
		znacznik2->Size = System::Drawing::Size(4, 4);
		znacznik2->TabIndex = 4;
		znacznik2->TabStop = false;
		znacznik2->Visible = false;

		PictureBox^ znacznik3 = gcnew PictureBox();
		znacznik3->Image = Image::FromFile(L"znacznik.png");
		znacznik3->Size = System::Drawing::Size(4, 4);
		znacznik3->TabIndex = 4;
		znacznik3->TabStop = false;
		znacznik3->Visible = false;

		PictureBox^ znacznik4 = gcnew PictureBox();
		znacznik4->Image = Image::FromFile(L"znacznik.png");
		znacznik4->Size = System::Drawing::Size(4, 4);
		znacznik4->TabIndex = 4;
		znacznik4->TabStop = false;
		znacznik4->Visible = false;

		PictureBox^ znacznik5 = gcnew PictureBox();
		znacznik5->Image = Image::FromFile(L"znacznik.png");
		znacznik5->Size = System::Drawing::Size(4, 4);
		znacznik5->TabIndex = 4;
		znacznik5->TabStop = false;
		znacznik5->Visible = false;

		PictureBox^ znacznik6 = gcnew PictureBox();
		znacznik6->Image = Image::FromFile(L"znacznik.png");
		znacznik6->Size = System::Drawing::Size(4, 4);
		znacznik6->TabIndex = 4;
		znacznik6->TabStop = false;
		znacznik6->Visible = false;

		PictureBox^ znacznik7 = gcnew PictureBox();
		znacznik7->Image = Image::FromFile(L"znacznik.png");
		znacznik7->Size = System::Drawing::Size(4, 4);
		znacznik7->TabIndex = 4;
		znacznik7->TabStop = false;
		znacznik7->Visible = false;

		PictureBox^ znacznik8 = gcnew PictureBox();
		znacznik8->Image = Image::FromFile(L"znacznik.png");
		znacznik8->Size = System::Drawing::Size(4, 4);
		znacznik8->TabIndex = 4;
		znacznik8->TabStop = false;
		znacznik8->Visible = false;

		PictureBox^ znacznik9 = gcnew PictureBox();
		znacznik9->Image = Image::FromFile(L"znacznik.png");
		znacznik9->Size = System::Drawing::Size(4, 4);
		znacznik9->TabIndex = 4;
		znacznik9->TabStop = false;
		znacznik9->Visible = false;

		PictureBox^ znacznik10 = gcnew PictureBox();
		znacznik10->Image = Image::FromFile(L"znacznik.png");
		znacznik10->Size = System::Drawing::Size(4, 4);
		znacznik10->TabIndex = 4;
		znacznik10->TabStop = false;
		znacznik10->Visible = false;

		//etykieta nag��wkowa wykresu

		Label^ label_naglowek = gcnew Label();
		label_naglowek->AutoSize = true;
		label_naglowek->BackColor = System::Drawing::Color::DeepSkyBlue;
		label_naglowek->Location = System::Drawing::Point(50, 20);
		label_naglowek->Size = System::Drawing::Size(100, 100);
		label_naglowek->TabIndex = 9;
		label_naglowek->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));

		Label^ label_podpisY = gcnew Label();
		label_podpisY->AutoSize = true;
		label_podpisY->BackColor = System::Drawing::Color::DeepSkyBlue;
		label_podpisY->Location = System::Drawing::Point(2, 20);
		label_podpisY->Size = System::Drawing::Size(10, 10);
		label_podpisY->TabIndex = 9;
		

		Label^ label_podpisX = gcnew Label();
		label_podpisX->AutoSize = true;
		label_podpisX->BackColor = System::Drawing::Color::DeepSkyBlue;
		label_podpisX->Location = System::Drawing::Point(362, 350);
		label_podpisX->Size = System::Drawing::Size(10, 10);
		label_podpisX->TabIndex = 9;


		if (choice == false)
		{
			label_podpisY->Text = "v[m/s]";
			label_podpisX->Text = "h[m]";
			label_naglowek->Text = "Wykres zale�no�ci predko�ci strugi\nod wysoko�ci wody nad otworem beczki";

			//znaczniki
			znacznik1->Location = Point(wspolrzednaX(Ho, 1), wspolrzednaYv(Hb , g, 1));
			znacznik2->Location = Point(wspolrzednaX(Ho, 2), wspolrzednaYv(Hb, g, 2));
			znacznik3->Location = Point(wspolrzednaX(Ho, 3), wspolrzednaYv(Hb, g, 3));
			znacznik4->Location = Point(wspolrzednaX(Ho, 4), wspolrzednaYv(Hb, g, 4));
			znacznik5->Location = Point(wspolrzednaX(Ho, 5), wspolrzednaYv(Hb, g, 5));
			znacznik6->Location = Point(wspolrzednaX(Ho, 6), wspolrzednaYv(Hb, g, 6));
			znacznik7->Location = Point(wspolrzednaX(Ho, 7), wspolrzednaYv(Hb, g, 7));
			znacznik8->Location = Point(wspolrzednaX(Ho, 8), wspolrzednaYv(Hb, g, 8));
			znacznik9->Location = Point(wspolrzednaX(Ho, 9), wspolrzednaYv(Hb, g, 9));
			znacznik10->Location = Point(wspolrzednaX(Ho, 10), wspolrzednaYv(Hb, g, 10));


		}
		else
		{
			label_podpisY->Text = "Z[m]";
			label_podpisX->Text = "h[m]";
			label_naglowek->Text = "Wykres zale�no�ci zasi�gu strugi\nod wysoko�ci wody nad otworem beczki";

			//znaczniki
			znacznik1->Location = Point(wspolrzednaX(Ho, 1), wspolrzednaYz(Hb, 1));
			znacznik2->Location = Point(wspolrzednaX(Ho, 2), wspolrzednaYz(Hb, 2));
			znacznik3->Location = Point(wspolrzednaX(Ho, 3), wspolrzednaYz(Hb, 3));
			znacznik4->Location = Point(wspolrzednaX(Ho, 4), wspolrzednaYz(Hb, 4));
			znacznik5->Location = Point(wspolrzednaX(Ho, 5), wspolrzednaYz(Hb, 5));
			znacznik6->Location = Point(wspolrzednaX(Ho, 6), wspolrzednaYz(Hb, 6));
			znacznik7->Location = Point(wspolrzednaX(Ho, 7), wspolrzednaYz(Hb, 7));
			znacznik8->Location = Point(wspolrzednaX(Ho, 8), wspolrzednaYz(Hb, 8));
			znacznik9->Location = Point(wspolrzednaX(Ho, 9), wspolrzednaYz(Hb, 9));
			znacznik10->Location = Point(wspolrzednaX(Ho, 10), wspolrzednaYz(Hb, 10));
		}



		oknoWykresu->Controls->Add(znacznik0);
		oknoWykresu->Controls->Add(znacznik1);
		oknoWykresu->Controls->Add(znacznik2);
		oknoWykresu->Controls->Add(znacznik3);
		oknoWykresu->Controls->Add(znacznik4);
		oknoWykresu->Controls->Add(znacznik5);
		oknoWykresu->Controls->Add(znacznik6);
		oknoWykresu->Controls->Add(znacznik7);
		oknoWykresu->Controls->Add(znacznik8);
		oknoWykresu->Controls->Add(znacznik9);
		oknoWykresu->Controls->Add(znacznik10);
		oknoWykresu->Controls->Add(label_naglowek);
		oknoWykresu->Controls->Add(label_podpisX);
		oknoWykresu->Controls->Add(label_podpisY);
		oknoWykresu->Controls->Add(wykres);
		

		if (check == true)
		{
			oknoWykresu->Show();
			if (Ho <= Hb && Ho != 0 && choice == true)
			{
				znacznik0->Visible = true;
				znacznik1->Visible = true;
				znacznik2->Visible = true;
				znacznik3->Visible = true;
				znacznik4->Visible = true;
				znacznik5->Visible = true;
				znacznik6->Visible = true;
				znacznik7->Visible = true;
				znacznik8->Visible = true;
				znacznik9->Visible = true;
				znacznik10->Visible = true;
			}
			else if (Ho <= Hb && Ho != 0 && choice == false)
			{
				znacznik1->Visible = true;
				znacznik2->Visible = true;
				znacznik3->Visible = true;
				znacznik4->Visible = true;
				znacznik5->Visible = true;
				znacznik6->Visible = true;
				znacznik7->Visible = true;
				znacznik8->Visible = true;
				znacznik9->Visible = true;
				znacznik10->Visible = true;
			}

		}
		else
			MessageBox::Show("Podano niepoprawne warto�ci", "B��d", MessageBoxButtons::OK, MessageBoxIcon::Information);

	}
private: System::Void oProgramieToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("             Torricelli version 1.0\n          autor: Robert Wyszecki", "Informacje", MessageBoxButtons::OK, MessageBoxIcon::None);
}
private: System::Void vhToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	choice = false;
}
private: System::Void zhToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	choice = true;
}
};
}

