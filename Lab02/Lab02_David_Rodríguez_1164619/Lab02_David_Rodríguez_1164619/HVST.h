#pragma once
#include <cmath>
#include <ctime>
#include <iostream>
#include <cstdlib>

namespace Lab02DavidRodríguez1164619 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Resumen de HVST
	/// </summary>
	public ref class HVST : public System::Windows::Forms::Form
	{
	public:
		HVST(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~HVST()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnComenzar;
	protected:

	protected:





	private: System::Windows::Forms::Button^ btnSalir;





	private: System::Windows::Forms::Label^ lblH;









	private: System::Windows::Forms::Label^ LBLGanador;

	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Timer^ timer2;








	private: System::ComponentModel::IContainer^ components;


	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(HVST::typeid));
			this->btnComenzar = (gcnew System::Windows::Forms::Button());
			this->btnSalir = (gcnew System::Windows::Forms::Button());
			this->lblH = (gcnew System::Windows::Forms::Label());
			this->LBLGanador = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// btnComenzar
			// 
			this->btnComenzar->Location = System::Drawing::Point(1, 447);
			this->btnComenzar->Name = L"btnComenzar";
			this->btnComenzar->Size = System::Drawing::Size(105, 34);
			this->btnComenzar->TabIndex = 0;
			this->btnComenzar->Text = L"Comenzar";
			this->btnComenzar->UseVisualStyleBackColor = true;
			this->btnComenzar->Click += gcnew System::EventHandler(this, &HVST::btnComenzar_Click);
			// 
			// btnSalir
			// 
			this->btnSalir->Location = System::Drawing::Point(487, 453);
			this->btnSalir->Name = L"btnSalir";
			this->btnSalir->Size = System::Drawing::Size(75, 23);
			this->btnSalir->TabIndex = 4;
			this->btnSalir->Text = L"Salir";
			this->btnSalir->UseVisualStyleBackColor = true;
			this->btnSalir->Click += gcnew System::EventHandler(this, &HVST::btnSalir_Click);
			// 
			// lblH
			// 
			this->lblH->AutoSize = true;
			this->lblH->BackColor = System::Drawing::Color::Transparent;
			this->lblH->ForeColor = System::Drawing::Color::White;
			this->lblH->Location = System::Drawing::Point(173, 254);
			this->lblH->Name = L"lblH";
			this->lblH->Size = System::Drawing::Size(0, 13);
			this->lblH->TabIndex = 8;
			// 
			// LBLGanador
			// 
			this->LBLGanador->AutoSize = true;
			this->LBLGanador->BackColor = System::Drawing::Color::Transparent;
			this->LBLGanador->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LBLGanador->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->LBLGanador->Location = System::Drawing::Point(104, 144);
			this->LBLGanador->Name = L"LBLGanador";
			this->LBLGanador->Size = System::Drawing::Size(0, 32);
			this->LBLGanador->TabIndex = 12;
			this->LBLGanador->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &HVST::timer1_Tick);
			// 
			// timer2
			// 
			this->timer2->Tick += gcnew System::EventHandler(this, &HVST::timer2_Tick);
			// 
			// HVST
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(571, 483);
			this->Controls->Add(this->LBLGanador);
			this->Controls->Add(this->lblH);
			this->Controls->Add(this->btnSalir);
			this->Controls->Add(this->btnComenzar);
			this->Name = L"HVST";
			this->Text = L"HVST";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
		   String^ TMtortuga;
		   String^ TMLiebre;
		   int PH;
		   int PT;
		   int Cont;
		   String^ tr;
		   String^ tr2;
		   String^ Liebre = "T";
		   String^ Tortuga = "H";
		   String^ Ambos = "OUCH";
		   int numaleT;
		   int numaleH;
		   int numaleT2;
		   int numaleH2;
		   int num = 70;
		   int num2 = 70;

		   int P = 1;


	private: System::Void btnComenzar_Click(System::Object^ sender, System::EventArgs^ e) {
		PT = 1;
		PH = 1;
		timer1->Start();
	}





	private: System::Void btnSalir_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}



private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	if ((PT != 70) && (PH != 70))
	{
		lblH->Text = "";
		Cont++;
		if (Cont != 35)
		{
			
			int NUM[70];
			tr = " ";
			for (int num = 70;num >= 0;num--)
			{
				NUM[num] = num;
			}

			srand(time(NULL));
			numaleT = 1 + rand() % (10);
			numaleH = 1 + rand() % (10);
			int T = numaleT;
			int H = numaleH;
			if (T >= 1 && T <= 5)
			{
				PT = PT + 3;

			}
			if (T >= 6 && T <= 7)
			{
				PT = PT - 6;


			}
			if (T >= 8 && T <= 10)
			{
				PT = PT + 1;

			}

			//Liebre
			if (H >= 1 && H <= 2)
			{
				PH = PH + 0;
				
				

			}
			if (H >= 3 && H <= 4)
			{
				PH = PH + 9;
			
				

			}
			if (H == 5)
			{
				PH = PH - 12;
				
				

			}
			if (H >= 6 && H <= 8)
			{
				PH = PH + 1;
				
			

			}
			if (H >= 9 && H <= 10)
			{
				PH = PH - 2;
				
				

			}

			if (PT <= 1)
			{
				PT = 1;
			}
			if (PH <= 1)
			{
				PH = 1;
			}
			if (PT >= 70)
			{
				PT = 70;
			}
			if (PH >= 70)
			{
				PH = 70;
			}

			NUM[PT] = -1;
			NUM[PH] = -2;
			if (PT == PH)
			{
				lblH->Text = "¡OUCH!";
				NUM[PT] = 0;
			}
			
			for (int num = 70;num >= 1;num--)
			{
				if (NUM[num] == -1)
				{
					tr = tr + ":" + Liebre + ": ";
				}
				if (NUM[num] == -2)
				{
					tr = tr + ":" + Tortuga + ": ";
				}
				if (NUM[num] == 0)
				{
					tr = tr + ":" + Ambos + ": ";
				}
				if ((NUM[num] != -2) && (NUM[num] != -1) && (NUM[num] != 0))
				{
					tr = tr + ":" + " " + ": ";
				}



			}
			if ((PT == 70) && (PH != 70))
			{

				LBLGanador->Text = "¡LA TORTUGA GANA!¡BRAVO!";

			}
			if ((PT != 70) && (PH == 70))
			{
				LBLGanador->Text = "La liebre gana. Ni hablar ";


			}
			if ((PT == 70) && (PH == 70))
			{
				LBLGanador->Text = "Es un empate";


			}

			MessageBox::Show(tr);


		}
		else
		{
			timer2->Start();
			timer1->Stop();

		}

	}
	else
	{
		timer1->Stop();
	}
}
private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e) {
	if ((PT != 70) && (PH != 70))
	{
		lblH->Text = "";


		int NUM2[70];
		tr2 = " ";
		for (int num2 = 70;num2 >= 0;num2--)
		{
			NUM2[num2] = num2;
		}

		srand(time(NULL));
		numaleT2 = 1 + rand() % (10);
		numaleH2 = 1 + rand() % (10);
		int T2 = numaleT2;
		int H2 = numaleH2;
		if (T2 >= 1 && T2 <= 5)
		{
			PT = PT + 3;

		}
		if (T2 >= 6 && T2 <= 7)
		{
			PT = PT - 6;


		}
		if (T2 >= 8 && T2 <= 10)
		{
			PT = PT + 1;

		}

		//Liebre
		if (H2 >= 1 && H2 <= 2)
		{
			PH = PH + 0;
			
		

		}
		if (H2 >= 3 && H2 <= 4)
		{
			PH = PH + 9;
			
			


		}
		if (H2 == 5)
		{
			PH = PH - 12;
		

		}
		if (H2 >= 6 && H2 <= 8)
		{
			PH = PH + 1;
		
	

		}
		if (H2 >= 9 && H2 <= 10)
		{
			PH = PH - 2;
		


		}

		if (PT <= 1)
		{
			PT = 1;
		}
		if (PH <= 1)
		{
			PH = 1;
		}
		if (PT >= 70)
		{
			PT = 70;
		}
		if (PH >= 70)
		{
			PH = 70;
		}

		NUM2[PT] = -1;
		NUM2[PH] = -2;
		if (PT == PH)
		{
			lblH->Text = "¡OUCH!";
			NUM2[PT] = 0;
		}

		for (int num2 = 70;num2 >= 1;num2--)
		{
			if (NUM2[num2] == -1)
			{
				tr2 = tr2 + ":" + Liebre + ": ";
			}
			if (NUM2[num2] == -2)
			{
				tr2 = tr2 + ":" + Tortuga + ": ";
			}
			if (NUM2[num2] == 0)
			{
				tr2 = tr2 + ":" + Ambos + ": ";
			}
			if ((NUM2[num2] != -2) && (NUM2[num2] != -1) && (NUM2[num2] != 0))
			{
				tr2 = tr2 + ":" + " " + ": ";
			}



		}
		if ((PT == 70) && (PH != 70))
		{

			LBLGanador->Text = "¡LA TORTUGA GANA!¡BRAVO!";

		}
		if ((PT != 70) && (PH == 70))
		{
			LBLGanador->Text = "La liebre gana. Ni hablar ";


		}
		if ((PT == 70) && (PH == 70))
		{
			LBLGanador->Text = "Es un empate";


		}
		MessageBox::Show(tr2);




	}
	else
	{
		timer2->Stop();
	}
}
};
}
