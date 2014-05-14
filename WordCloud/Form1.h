#pragma once
#include "Lista.h"
#include <fstream>
#include <iostream>
#include <iomanip>
#include <sstream>
#include "Filtro.h"



using namespace System;
using namespace std;
void MarshalString ( String ^ s, string& os ) { // Esta funcion convierte de String^ a std::string
   using namespace Runtime::InteropServices;
   const char* chars = 
      (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
   os = chars;
   Marshal::FreeHGlobal(IntPtr((void*)chars));
}

namespace WordCloud {

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
	private: System::Windows::Forms::Button^  button1;
	protected: 
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LightGray;
			this->button1->Location = System::Drawing::Point(261, 52);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Cargar";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Maroon;
			this->label1->Location = System::Drawing::Point(211, 130);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 73);
			this->label1->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(385, 284);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 37);
			this->label2->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(319, 218);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 42);
			this->label3->TabIndex = 3;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Navy;
			this->label4->Location = System::Drawing::Point(121, 218);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 31);
			this->label4->TabIndex = 4;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Navy;
			this->label5->Location = System::Drawing::Point(310, 101);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 29);
			this->label5->TabIndex = 5;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label6->Location = System::Drawing::Point(75, 121);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 25);
			this->label6->TabIndex = 6;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(452, 201);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(0, 24);
			this->label7->TabIndex = 7;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Maroon;
			this->label8->Location = System::Drawing::Point(257, 257);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(0, 20);
			this->label8->TabIndex = 8;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(250, 9);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(86, 21);
			this->label9->TabIndex = 9;
			this->label9->Text = L"MyCloud";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Silver;
			this->button2->Location = System::Drawing::Point(12, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(90, 23);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Instrucciones";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Silver;
			this->button3->Location = System::Drawing::Point(108, 12);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(88, 23);
			this->button3->TabIndex = 11;
			this->button3->Text = L"Contacto";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::IndianRed;
			this->label10->Location = System::Drawing::Point(154, 91);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(0, 16);
			this->label10->TabIndex = 12;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label11->Location = System::Drawing::Point(124, 284);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(19, 13);
			this->label11->TabIndex = 13;
			this->label11->Text = L"";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DimGray;
			this->ClientSize = System::Drawing::Size(591, 330);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 using namespace std;
				 using namespace System::IO;

				 ///// Reiniciar labels //
				 label1->Text = "";
				 label2->Text = "";
				 label3->Text = "";
				 label4->Text = "";
				 label5->Text = "";
				 label6->Text = "";
				 label7->Text = "";
				 label8->Text = "";
				 label10->Text = "";
				 label11->Text = "";
				
				 //////////////////////
				 
				 ifstream entrada;
				  Lista lista;

				/////////////////////// Conseguir la direccion del archivo
				 Stream ^ myStream;
				 OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
				 if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
				 {
					 if ( (myStream=openFileDialog1->OpenFile())!= nullptr)
					 {
						 String^ strfilename = openFileDialog1->InitialDirectory + openFileDialog1->FileName; // Direccion del archivo
						
				///////////////////////////////////////////////////////////

						string direccion;
						MarshalString(strfilename,direccion); // Convierte la direccion a std::string

						// proceso de insercion de palabras en la lista ////
						ifstream entrada;
						entrada.open(direccion.c_str());
						string palabra;
						
						
						while (!entrada.eof())
						{
							entrada >> palabra;
							
							
							int n = palabra.length();
						if (n>0) {
							for (int y=0; y<n;  y++)
								palabra[y] = tolower(palabra[y]);

								caracteresInicio(palabra);
								n = palabra.length();
								if (n>0)
									caracteresFinal(palabra);

							if (filtra(palabra))
								lista.AgregaInicio(palabra); }
						}
						
						////////////////////////////////////////////////////
						

						///// proceso de ordenamiento en prioridades//////////
						Lista Orden[500];  // Caso extremo de que una palabra se repita 499 veces
						lista.TablaHash(Orden);
						
						string pal[10]; // este arreglo contendra las palabras mas repetidas
						int cont = 0;
						for (int i=499;i>0;i--)
						 {
							if ((!Orden[i].vacia())&&(cont<10))
								{
									Orden[i].llenaTabla(pal,cont);
								}
						 }
					
						///////////////////////////////////////////////////////

						///// Dar valor a las labels //// 
					
						if /*(pal[0]!="")*/ (pal[0].length()>0)
						{String^ l1 = gcnew String(pal[0].c_str());
						label1->Text = l1;}

						if /*(pal[1]!="")*/ (pal[1].length()>0)
						{String^ l2 = gcnew String(pal[1].c_str());
						label2->Text = l2;}

						if /*(pal[2]!="")*/ (pal[2].length()>0)
						{String^ l3 = gcnew String(pal[2].c_str());
						label3->Text = l3;}

						if /*(pal[3]!="")*/ (pal[3].length()>0)
						{String^ l4 = gcnew String(pal[3].c_str());
						label4->Text = l4;}

						if /*(pal[4]!="")*/ (pal[4].length()>0)
						{String^ l5 = gcnew String(pal[4].c_str());
						label5->Text = l5;}

						if /*(pal[5]!="")*/ (pal[5].length()>0)
						{String^ l6 = gcnew String(pal[5].c_str());
						label6->Text = l6;}

						if /*(pal[6]!="")*/ (pal[6].length()>0)
						{String^ l7 = gcnew String(pal[6].c_str());
						label7->Text = l7;}

						if /*(pal[7]!="")*/ (pal[7].length()>0)
						{String^ l8 = gcnew String(pal[7].c_str());
						label8->Text = l8;}

						if /*(pal[7]!="")*/ (pal[8].length()>0)
						{String^ l8 = gcnew String(pal[8].c_str());
						label10->Text = l8;}

						if /*(pal[7]!="")*/ (pal[9].length()>0)
						{String^ l8 = gcnew String(pal[9].c_str());
						label11->Text = l8;}
						
						

						
						entrada.close(); 
						myStream->Close();
						

					 }
					 
				 }
					
					

			 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

			 MessageBox::Show("Da click en el boton de Cargar y selecciona el archivo de texto (.txt) que quieras convertir en wordCloud");
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show ("César Rubén Alejandro Rodriguez Garza; Ingeniero en tecnologias computacionales; Estructura de datos 2013; Correo: A01036009@itesm.mx");
		 }
};
}

