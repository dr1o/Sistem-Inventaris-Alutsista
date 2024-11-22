#pragma once
#include <fstream>
#include <unordered_map>
#include <string>


namespace GAWE {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System;
	using namespace System::IO;

	/// <summary>
	/// Summary for MenuUtama
	/// </summary>
	public ref class MenuUtama : public System::Windows::Forms::Form
	{


		//deklarasi integer
	public:
		int numshell = 0;
		int numfuel = 0;
		int numleopard = 0;
		int numamx = 0;
		int numbradley = 0;
		int numkalashnikov = 0;
		int numcarbine = 0;
		int numsniper = 0;
		int numpeluru = 0;


	private: System::Windows::Forms::Button^ button1;
	public:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
		

		   //fungsi untuk menyimpan jumlah stok ke database
		void SaveDataToFile()
		{
			std::ofstream outFile("database.txt");
			if (outFile.is_open())
			{
				outFile << numleopard << "\n";
				outFile << numamx << "\n";
				outFile << numbradley << "\n";
				outFile << numsniper << "\n";
				outFile << numcarbine << "\n";
				outFile << numkalashnikov << "\n";
				outFile << numpeluru << "\n";
				outFile << numshell << "\n";
				outFile << numfuel << "\n";
				outFile.close();
			}
		}
		//fungsi untuk load data dari database
		void LoadDataFromFile()
		{
			if (File::Exists("database.txt")) // Check if the file exists
			{
				StreamReader^ inFile = gcnew StreamReader("database.txt");
				numleopard = Convert::ToInt32(inFile->ReadLine());
				numamx = Convert::ToInt32(inFile->ReadLine());
				numbradley = Convert::ToInt32(inFile->ReadLine());
				numkalashnikov = Convert::ToInt32(inFile->ReadLine());
				numcarbine = Convert::ToInt32(inFile->ReadLine());
				numsniper = Convert::ToInt32(inFile->ReadLine());
				numshell = Convert::ToInt32(inFile->ReadLine());
				numfuel = Convert::ToInt32(inFile->ReadLine());
				inFile->Close();
			}
		}

	private: System::Windows::Forms::Label^ times;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ stokleopard;
	private: System::Windows::Forms::Label^ stokamx;
	private: System::Windows::Forms::Label^ stokbradley;
	private: System::Windows::Forms::Label^ stoksniper;
	private: System::Windows::Forms::Label^ stokcarbine;
	private: System::Windows::Forms::Label^ stokkalashnikov;
	private: System::Windows::Forms::Label^ stokpeluru;
	private: System::Windows::Forms::Label^ stokshell;
	private: System::Windows::Forms::Label^ stokfuel;

	public:
		MenuUtama(void)
		{
			InitializeComponent();

			LoadDataFromFile();
			UpdateStockLabels();
			//
			//TO
			// 
			// : Add the constructor code here
			//
		}
		//untuk merubah angka di GUI
	private:
		void UpdateStockLabels()
		{
			stokleopard->Text = "Stok: " + numleopard.ToString() + " unit";
			stokamx->Text = "Stok: " + numamx.ToString() + " unit";
			stokbradley->Text = "Stok: " + numbradley.ToString() + " unit";
			stoksniper->Text = "Stok: " + numsniper.ToString() + " pcs";
			stokcarbine->Text = "Stok: " + numcarbine.ToString() + " pcs";
			stokkalashnikov->Text = "Stok: " + numkalashnikov.ToString() + " pcs";
			stokpeluru->Text = "Stok: " + numpeluru.ToString() + " boks";
			stokshell->Text = "Stok: " + numshell.ToString() + " boks";
			stokfuel->Text = "Stok: " + numfuel.ToString() + " barel"; // Misalkan Anda juga memiliki numfuel
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MenuUtama()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ fuel;
	protected:
	private: System::Windows::Forms::Button^ shell;
	private: System::Windows::Forms::Button^ peluru;
	private: System::Windows::Forms::Button^ sniper;
	private: System::Windows::Forms::Button^ carbine;
	private: System::Windows::Forms::Button^ kalashnikov;
	private: System::Windows::Forms::Button^ bradley;
	private: System::Windows::Forms::Button^ amx;
	private: System::Windows::Forms::Button^ leopard;
	private: System::Windows::Forms::Label^ label1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MenuUtama::typeid));
			this->fuel = (gcnew System::Windows::Forms::Button());
			this->shell = (gcnew System::Windows::Forms::Button());
			this->peluru = (gcnew System::Windows::Forms::Button());
			this->sniper = (gcnew System::Windows::Forms::Button());
			this->carbine = (gcnew System::Windows::Forms::Button());
			this->kalashnikov = (gcnew System::Windows::Forms::Button());
			this->bradley = (gcnew System::Windows::Forms::Button());
			this->amx = (gcnew System::Windows::Forms::Button());
			this->leopard = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->times = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->stokleopard = (gcnew System::Windows::Forms::Label());
			this->stokamx = (gcnew System::Windows::Forms::Label());
			this->stokbradley = (gcnew System::Windows::Forms::Label());
			this->stoksniper = (gcnew System::Windows::Forms::Label());
			this->stokcarbine = (gcnew System::Windows::Forms::Label());
			this->stokkalashnikov = (gcnew System::Windows::Forms::Label());
			this->stokpeluru = (gcnew System::Windows::Forms::Label());
			this->stokshell = (gcnew System::Windows::Forms::Label());
			this->stokfuel = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// fuel
			// 
			this->fuel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"fuel.BackgroundImage")));
			this->fuel->Location = System::Drawing::Point(988, 535);
			this->fuel->Name = L"fuel";
			this->fuel->Size = System::Drawing::Size(304, 158);
			this->fuel->TabIndex = 74;
			this->fuel->UseVisualStyleBackColor = true;
			// 
			// shell
			// 
			this->shell->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"shell.BackgroundImage")));
			this->shell->Location = System::Drawing::Point(528, 535);
			this->shell->Name = L"shell";
			this->shell->Size = System::Drawing::Size(304, 158);
			this->shell->TabIndex = 73;
			this->shell->UseVisualStyleBackColor = true;
			// 
			// peluru
			// 
			this->peluru->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"peluru.BackgroundImage")));
			this->peluru->Location = System::Drawing::Point(103, 515);
			this->peluru->Name = L"peluru";
			this->peluru->Size = System::Drawing::Size(274, 178);
			this->peluru->TabIndex = 72;
			this->peluru->UseVisualStyleBackColor = true;
			// 
			// sniper
			// 
			this->sniper->AllowDrop = true;
			this->sniper->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"sniper.BackgroundImage")));
			this->sniper->Location = System::Drawing::Point(1013, 305);
			this->sniper->Name = L"sniper";
			this->sniper->Size = System::Drawing::Size(279, 158);
			this->sniper->TabIndex = 71;
			this->sniper->UseVisualStyleBackColor = true;
			// 
			// carbine
			// 
			this->carbine->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"carbine.BackgroundImage")));
			this->carbine->Location = System::Drawing::Point(528, 305);
			this->carbine->Name = L"carbine";
			this->carbine->Size = System::Drawing::Size(304, 158);
			this->carbine->TabIndex = 70;
			this->carbine->UseVisualStyleBackColor = true;
			// 
			// kalashnikov
			// 
			this->kalashnikov->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"kalashnikov.BackgroundImage")));
			this->kalashnikov->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->kalashnikov->Location = System::Drawing::Point(103, 305);
			this->kalashnikov->Name = L"kalashnikov";
			this->kalashnikov->Size = System::Drawing::Size(274, 140);
			this->kalashnikov->TabIndex = 69;
			this->kalashnikov->UseVisualStyleBackColor = true;
			// 
			// bradley
			// 
			this->bradley->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bradley.BackgroundImage")));
			this->bradley->Location = System::Drawing::Point(988, 65);
			this->bradley->Name = L"bradley";
			this->bradley->Size = System::Drawing::Size(304, 158);
			this->bradley->TabIndex = 68;
			this->bradley->UseVisualStyleBackColor = true;
			// 
			// amx
			// 
			this->amx->BackColor = System::Drawing::Color::Transparent;
			this->amx->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"amx.BackgroundImage")));
			this->amx->Location = System::Drawing::Point(528, 65);
			this->amx->Name = L"amx";
			this->amx->Size = System::Drawing::Size(304, 158);
			this->amx->TabIndex = 67;
			this->amx->UseVisualStyleBackColor = false;
			// 
			// leopard
			// 
			this->leopard->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"leopard.BackgroundImage")));
			this->leopard->Location = System::Drawing::Point(89, 65);
			this->leopard->Name = L"leopard";
			this->leopard->Size = System::Drawing::Size(304, 158);
			this->leopard->TabIndex = 66;
			this->leopard->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(362, 3);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(601, 31);
			this->label1->TabIndex = 65;
			this->label1->Text = L"SILAHKAN UBAH STOK ALUTSISTA PILIHAN";
			// 
			// times
			// 
			this->times->AutoSize = true;
			this->times->ForeColor = System::Drawing::Color::White;
			this->times->Location = System::Drawing::Point(197, 226);
			this->times->Name = L"times";
			this->times->Size = System::Drawing::Size(71, 13);
			this->times->TabIndex = 75;
			this->times->Text = L"Leopard 2 PL";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Black;
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(649, 226);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(45, 13);
			this->label2->TabIndex = 76;
			this->label2->Text = L"AMX-13";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(1116, 226);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(60, 13);
			this->label3->TabIndex = 77;
			this->label3->Text = L"M2 Bradley";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Black;
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(649, 466);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(63, 13);
			this->label4->TabIndex = 78;
			this->label4->Text = L"Pindad SS2";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Black;
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(1129, 466);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(59, 13);
			this->label5->TabIndex = 79;
			this->label5->Text = L"M82 Barret";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Black;
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(221, 448);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(36, 13);
			this->label6->TabIndex = 80;
			this->label6->Text = L"AK-47";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Black;
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(649, 696);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(67, 13);
			this->label7->TabIndex = 81;
			this->label7->Text = L"155mm Shell";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Black;
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(184, 696);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(94, 13);
			this->label8->TabIndex = 82;
			this->label8->Text = L"5.56x45mm NATO";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Black;
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(1129, 696);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(36, 13);
			this->label9->TabIndex = 83;
			this->label9->Text = L"Diesel";
			// 
			// stokleopard
			// 
			this->stokleopard->AutoSize = true;
			this->stokleopard->BackColor = System::Drawing::Color::Black;
			this->stokleopard->ForeColor = System::Drawing::Color::Lime;
			this->stokleopard->Location = System::Drawing::Point(197, 237);
			this->stokleopard->Name = L"stokleopard";
			this->stokleopard->Size = System::Drawing::Size(71, 13);
			this->stokleopard->TabIndex = 84;
			this->stokleopard->Text = L"Leopard 2 PL";
			// 
			// stokamx
			// 
			this->stokamx->AutoSize = true;
			this->stokamx->BackColor = System::Drawing::Color::Black;
			this->stokamx->ForeColor = System::Drawing::Color::Lime;
			this->stokamx->Location = System::Drawing::Point(632, 239);
			this->stokamx->Name = L"stokamx";
			this->stokamx->Size = System::Drawing::Size(71, 13);
			this->stokamx->TabIndex = 85;
			this->stokamx->Text = L"Leopard 2 PL";
			// 
			// stokbradley
			// 
			this->stokbradley->AutoSize = true;
			this->stokbradley->ForeColor = System::Drawing::Color::Lime;
			this->stokbradley->Location = System::Drawing::Point(1105, 241);
			this->stokbradley->Name = L"stokbradley";
			this->stokbradley->Size = System::Drawing::Size(71, 13);
			this->stokbradley->TabIndex = 86;
			this->stokbradley->Text = L"Leopard 2 PL";
			this->stokbradley->Click += gcnew System::EventHandler(this, &MenuUtama::stokbradley_Click);
			// 
			// stoksniper
			// 
			this->stoksniper->AutoSize = true;
			this->stoksniper->BackColor = System::Drawing::Color::Black;
			this->stoksniper->ForeColor = System::Drawing::Color::Lime;
			this->stoksniper->Location = System::Drawing::Point(1117, 479);
			this->stoksniper->Name = L"stoksniper";
			this->stoksniper->Size = System::Drawing::Size(71, 13);
			this->stoksniper->TabIndex = 87;
			this->stoksniper->Text = L"Leopard 2 PL";
			// 
			// stokcarbine
			// 
			this->stokcarbine->AutoSize = true;
			this->stokcarbine->BackColor = System::Drawing::Color::Black;
			this->stokcarbine->ForeColor = System::Drawing::Color::Lime;
			this->stokcarbine->Location = System::Drawing::Point(645, 479);
			this->stokcarbine->Name = L"stokcarbine";
			this->stokcarbine->Size = System::Drawing::Size(71, 13);
			this->stokcarbine->TabIndex = 88;
			this->stokcarbine->Text = L"Leopard 2 PL";
			// 
			// stokkalashnikov
			// 
			this->stokkalashnikov->AutoSize = true;
			this->stokkalashnikov->BackColor = System::Drawing::Color::Black;
			this->stokkalashnikov->ForeColor = System::Drawing::Color::Lime;
			this->stokkalashnikov->Location = System::Drawing::Point(197, 461);
			this->stokkalashnikov->Name = L"stokkalashnikov";
			this->stokkalashnikov->Size = System::Drawing::Size(71, 13);
			this->stokkalashnikov->TabIndex = 89;
			this->stokkalashnikov->Text = L"Leopard 2 PL";
			// 
			// stokpeluru
			// 
			this->stokpeluru->AutoSize = true;
			this->stokpeluru->BackColor = System::Drawing::Color::Black;
			this->stokpeluru->ForeColor = System::Drawing::Color::Lime;
			this->stokpeluru->Location = System::Drawing::Point(197, 709);
			this->stokpeluru->Name = L"stokpeluru";
			this->stokpeluru->Size = System::Drawing::Size(71, 13);
			this->stokpeluru->TabIndex = 90;
			this->stokpeluru->Text = L"Leopard 2 PL";
			this->stokpeluru->Click += gcnew System::EventHandler(this, &MenuUtama::stokpeluru_Click);
			// 
			// stokshell
			// 
			this->stokshell->AutoSize = true;
			this->stokshell->ForeColor = System::Drawing::Color::Lime;
			this->stokshell->Location = System::Drawing::Point(649, 709);
			this->stokshell->Name = L"stokshell";
			this->stokshell->Size = System::Drawing::Size(71, 13);
			this->stokshell->TabIndex = 91;
			this->stokshell->Text = L"Leopard 2 PL";
			// 
			// stokfuel
			// 
			this->stokfuel->AutoSize = true;
			this->stokfuel->BackColor = System::Drawing::Color::Black;
			this->stokfuel->ForeColor = System::Drawing::Color::Lime;
			this->stokfuel->Location = System::Drawing::Point(1117, 709);
			this->stokfuel->Name = L"stokfuel";
			this->stokfuel->Size = System::Drawing::Size(71, 13);
			this->stokfuel->TabIndex = 92;
			this->stokfuel->Text = L"Leopard 2 PL";
			this->stokfuel->Click += gcnew System::EventHandler(this, &MenuUtama::stokfuel_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Location = System::Drawing::Point(303, 229);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(29, 28);
			this->button1->TabIndex = 93;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MenuUtama::leopard1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Location = System::Drawing::Point(135, 229);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(29, 28);
			this->button2->TabIndex = 94;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MenuUtama::leopard2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Location = System::Drawing::Point(573, 233);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(29, 28);
			this->button3->TabIndex = 96;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MenuUtama::amx2_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->Location = System::Drawing::Point(741, 233);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(29, 28);
			this->button4->TabIndex = 95;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MenuUtama::amx1_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Transparent;
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->Location = System::Drawing::Point(1041, 229);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(29, 28);
			this->button5->TabIndex = 98;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MenuUtama::bradley2_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Transparent;
			this->button6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.BackgroundImage")));
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->Location = System::Drawing::Point(1209, 229);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(29, 28);
			this->button6->TabIndex = 97;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MenuUtama::bradley1_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Transparent;
			this->button7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.BackgroundImage")));
			this->button7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->Location = System::Drawing::Point(1041, 471);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(29, 28);
			this->button7->TabIndex = 104;
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MenuUtama::sniper2_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Transparent;
			this->button8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button8.BackgroundImage")));
			this->button8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button8->Location = System::Drawing::Point(1209, 471);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(29, 28);
			this->button8->TabIndex = 103;
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MenuUtama::sniper1_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::Transparent;
			this->button9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button9.BackgroundImage")));
			this->button9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button9->Location = System::Drawing::Point(573, 475);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(29, 28);
			this->button9->TabIndex = 102;
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MenuUtama::carbine2_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::Transparent;
			this->button10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button10.BackgroundImage")));
			this->button10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button10->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button10->Location = System::Drawing::Point(741, 475);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(29, 28);
			this->button10->TabIndex = 101;
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MenuUtama::carbine1_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::Transparent;
			this->button11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button11.BackgroundImage")));
			this->button11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button11->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button11->Location = System::Drawing::Point(135, 471);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(29, 28);
			this->button11->TabIndex = 100;
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MenuUtama::kalashnikov2_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::Transparent;
			this->button12->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button12.BackgroundImage")));
			this->button12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button12->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button12->Location = System::Drawing::Point(303, 471);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(29, 28);
			this->button12->TabIndex = 99;
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MenuUtama::kalashnikov1_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::Transparent;
			this->button13->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button13.BackgroundImage")));
			this->button13->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button13->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button13->Location = System::Drawing::Point(1041, 699);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(29, 28);
			this->button13->TabIndex = 110;
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MenuUtama::fuel2_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::Transparent;
			this->button14->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button14.BackgroundImage")));
			this->button14->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button14->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button14->Location = System::Drawing::Point(1209, 699);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(29, 28);
			this->button14->TabIndex = 109;
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MenuUtama::fuel1_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::Transparent;
			this->button15->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button15.BackgroundImage")));
			this->button15->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button15->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button15->Location = System::Drawing::Point(573, 703);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(29, 28);
			this->button15->TabIndex = 108;
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MenuUtama::shell2_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::Transparent;
			this->button16->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button16.BackgroundImage")));
			this->button16->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button16->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button16->Location = System::Drawing::Point(741, 703);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(29, 28);
			this->button16->TabIndex = 107;
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MenuUtama::shell1_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::Transparent;
			this->button17->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button17.BackgroundImage")));
			this->button17->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button17->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button17->Location = System::Drawing::Point(135, 699);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(29, 28);
			this->button17->TabIndex = 106;
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MenuUtama::peluru2_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::Transparent;
			this->button18->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button18.BackgroundImage")));
			this->button18->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button18->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button18->Location = System::Drawing::Point(303, 699);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(29, 28);
			this->button18->TabIndex = 105;
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MenuUtama::peluru1_Click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::White;
			this->button19->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button19->ForeColor = System::Drawing::Color::Black;
			this->button19->Location = System::Drawing::Point(12, 12);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(75, 23);
			this->button19->TabIndex = 111;
			this->button19->Text = L"EXIT";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &MenuUtama::button19_Click);
			// 
			// MenuUtama
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(1362, 741);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->stokfuel);
			this->Controls->Add(this->stokshell);
			this->Controls->Add(this->stokpeluru);
			this->Controls->Add(this->stokkalashnikov);
			this->Controls->Add(this->stokcarbine);
			this->Controls->Add(this->stoksniper);
			this->Controls->Add(this->stokbradley);
			this->Controls->Add(this->stokamx);
			this->Controls->Add(this->stokleopard);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->times);
			this->Controls->Add(this->fuel);
			this->Controls->Add(this->shell);
			this->Controls->Add(this->peluru);
			this->Controls->Add(this->sniper);
			this->Controls->Add(this->carbine);
			this->Controls->Add(this->kalashnikov);
			this->Controls->Add(this->bradley);
			this->Controls->Add(this->amx);
			this->Controls->Add(this->leopard);
			this->Controls->Add(this->label1);
			this->ForeColor = System::Drawing::Color::Lime;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MenuUtama";
			this->Text = L"MenuUtama";
			this->Load += gcnew System::EventHandler(this, &MenuUtama::MenuUtama_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
//fungsi dari tombol untuk tambah atau kurang
private: System::Void leopard1_Click(System::Object^ sender, System::EventArgs^ e)
{
	numleopard += 1;
	UpdateStockLabels();
	SaveDataToFile();
}
private: System::Void leopard2_Click(System::Object^ sender, System::EventArgs^ e)
{
	numleopard -= 1;
	UpdateStockLabels();
	SaveDataToFile();
	if (numleopard > 0)
		numleopard--;
	else
		MessageBox::Show("Stok Leopard 2 PL Sudah Defisit!", "Peringatan", MessageBoxButtons::OK, MessageBoxIcon::Warning);
}
private: System::Void amx1_Click(System::Object^ sender, System::EventArgs^ e)
{
	numamx += 1;
	UpdateStockLabels();
	SaveDataToFile();
}
private: System::Void amx2_Click(System::Object^ sender, System::EventArgs^ e)
{
	numamx-= 1;
	UpdateStockLabels();
	SaveDataToFile();
	if (numamx > 0)
		numamx--;
	else
		MessageBox::Show("Stok AMX 13 Sudah Defisit!", "Peringatan", MessageBoxButtons::OK, MessageBoxIcon::Warning);
}
private: System::Void bradley1_Click(System::Object^ sender, System::EventArgs^ e)
{
	numbradley += 1;
	UpdateStockLabels();
	SaveDataToFile();
}
private: System::Void bradley2_Click(System::Object^ sender, System::EventArgs^ e)
{
	numbradley -= 1;
	UpdateStockLabels();
	SaveDataToFile();
	if (numbradley > 0)
		numbradley--;
	else
		MessageBox::Show("Stok M2 Bradley IFV Sudah Defisit!", "Peringatan", MessageBoxButtons::OK, MessageBoxIcon::Warning);
}
private: System::Void kalashnikov1_Click(System::Object^ sender, System::EventArgs^ e)
{
	numkalashnikov += 1;
	UpdateStockLabels();
	SaveDataToFile();
}
private: System::Void kalashnikov2_Click(System::Object^ sender, System::EventArgs^ e)
{
	numkalashnikov -= 1;
	UpdateStockLabels();
	SaveDataToFile();
	if (numkalashnikov > 0)
		numkalashnikov--;
	else
		MessageBox::Show("Stok AK-47 Sudah Defisit!", "Peringatan", MessageBoxButtons::OK, MessageBoxIcon::Warning);
}
private: System::Void carbine1_Click(System::Object^ sender, System::EventArgs^ e)
{
	numcarbine += 1;
	UpdateStockLabels();
	SaveDataToFile();
}
private: System::Void carbine2_Click(System::Object^ sender, System::EventArgs^ e)
{
	numcarbine -= 1;
	UpdateStockLabels();
	SaveDataToFile();
	if (numcarbine > 0)
		numcarbine--;
	else
		MessageBox::Show("Stok Pindad SS2 Sudah Defisit!", "Peringatan", MessageBoxButtons::OK, MessageBoxIcon::Warning);
}
private: System::Void sniper1_Click(System::Object^ sender, System::EventArgs^ e)
{
	numsniper += 1;
	UpdateStockLabels();
	SaveDataToFile();
}
private: System::Void sniper2_Click(System::Object^ sender, System::EventArgs^ e)
{
	numsniper -= 1;
	UpdateStockLabels();
	SaveDataToFile();
	if (numsniper > 0)
		numsniper--;
	else
		MessageBox::Show("Stok M82 Barret Sudah Defisit!", "Peringatan", MessageBoxButtons::OK, MessageBoxIcon::Warning);
}
private: System::Void peluru1_Click(System::Object^ sender, System::EventArgs^ e)
{
	numpeluru += 1;
	UpdateStockLabels();
	SaveDataToFile();
}
private: System::Void peluru2_Click(System::Object^ sender, System::EventArgs^ e)
{
	numpeluru -= 1;
	UpdateStockLabels();
	SaveDataToFile();
	if (numpeluru > 0)
		numpeluru--;
	else
		MessageBox::Show("Stok Amunu 5.56x45mm NATO Defisit!", "Peringatan", MessageBoxButtons::OK, MessageBoxIcon::Warning);
}
private: System::Void shell1_Click(System::Object^ sender, System::EventArgs^ e)
{
	numshell += 1;
	UpdateStockLabels();
	SaveDataToFile();
}
private: System::Void shell2_Click(System::Object^ sender, System::EventArgs^ e)
{
	numshell -= 1;
	UpdateStockLabels();
	SaveDataToFile();
	if (numshell > 0)
		numshell--;
	else
		MessageBox::Show("Stok 155mm Shell Sudah Defisit!", "Peringatan", MessageBoxButtons::OK, MessageBoxIcon::Warning);
}
private: System::Void fuel1_Click(System::Object^ sender, System::EventArgs^ e)
{
	numfuel += 1;
	UpdateStockLabels();
	SaveDataToFile();
}
private: System::Void fuel2_Click(System::Object^ sender, System::EventArgs^ e)
{
	numfuel -= 1;
	UpdateStockLabels();
	SaveDataToFile();
	if (numfuel > 0)
		numfuel--;
	else
		MessageBox::Show("Stok Diesel Sudah Defisit!", "Peringatan", MessageBoxButtons::OK, MessageBoxIcon::Warning);
}
	   //tombol exit
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Sampai Berjumpa kembali!", "Terima Kasih", MessageBoxButtons::OK);
	Application::Exit();
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void fuel_Click(System::Object^ sender, System::EventArgs^ e) {
}  
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void stokfuel_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MenuUtama_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void stokpeluru_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void stokbradley_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
