#pragma once
#include "MenuUtama.h"
#include <fstream>
#include <string>
namespace GAWE {

    using namespace System;
    using namespace System::Windows::Forms;

    public ref class MyForm : public System::Windows::Forms::Form {
    public:
        MyForm(void) {
            InitializeComponent();
        }

    protected:
        ~MyForm() {
            if (components) {
                delete components;
            }
        }

    private:
        System::Windows::Forms::Button^ button3;
        System::Windows::Forms::Button^ button2;

        System::Windows::Forms::TextBox^ Password;
        System::Windows::Forms::TextBox^ Username;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ label1;

    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::PictureBox^ pictureBox1;
    private: System::Windows::Forms::PictureBox^ pictureBox2;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::Label^ label8;



        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void) {
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->Password = (gcnew System::Windows::Forms::TextBox());
            this->Username = (gcnew System::Windows::Forms::TextBox());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->label8 = (gcnew System::Windows::Forms::Label());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
            this->SuspendLayout();
            // 
            // button3
            // 
            this->button3->BackColor = System::Drawing::Color::White;
            this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->button3->ForeColor = System::Drawing::Color::Black;
            this->button3->Location = System::Drawing::Point(12, 12);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(75, 23);
            this->button3->TabIndex = 0;
            this->button3->Text = L"EXIT";
            this->button3->UseVisualStyleBackColor = false;
            this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
            // 
            // button2
            // 
            this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button2->Location = System::Drawing::Point(153, 431);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(75, 30);
            this->button2->TabIndex = 1;
            this->button2->Text = L"Login";
            this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
            // 
            // Password
            // 
            this->Password->Location = System::Drawing::Point(153, 389);
            this->Password->Name = L"Password";
            this->Password->Size = System::Drawing::Size(279, 20);
            this->Password->TabIndex = 3;
            // 
            // Username
            // 
            this->Username->Location = System::Drawing::Point(153, 334);
            this->Username->Name = L"Username";
            this->Username->Size = System::Drawing::Size(279, 20);
            this->Username->TabIndex = 4;
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->BackColor = System::Drawing::Color::Transparent;
            this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->ForeColor = System::Drawing::Color::White;
            this->label2->Location = System::Drawing::Point(119, 288);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(328, 31);
            this->label2->TabIndex = 18;
            this->label2->Text = L"Sistem Inventaris Alutsista";
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->BackColor = System::Drawing::Color::Transparent;
            this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->ForeColor = System::Drawing::Color::White;
            this->label1->Location = System::Drawing::Point(200, 9);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(162, 31);
            this->label1->TabIndex = 17;
            this->label1->Text = L"WELCOME";
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->BackColor = System::Drawing::Color::Transparent;
            this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label4->ForeColor = System::Drawing::Color::White;
            this->label4->Location = System::Drawing::Point(15, 389);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(110, 26);
            this->label4->TabIndex = 22;
            this->label4->Text = L"Password";
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->BackColor = System::Drawing::Color::Transparent;
            this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->ForeColor = System::Drawing::Color::White;
            this->label3->Location = System::Drawing::Point(15, 334);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(115, 26);
            this->label3->TabIndex = 21;
            this->label3->Text = L"Username";
            // 
            // pictureBox1
            // 
            this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
            this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
            this->pictureBox1->Location = System::Drawing::Point(153, 75);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(262, 176);
            this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox1->TabIndex = 23;
            this->pictureBox1->TabStop = false;
            this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
            // 
            // pictureBox2
            // 
            this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
            this->pictureBox2->Location = System::Drawing::Point(453, -2);
            this->pictureBox2->Name = L"pictureBox2";
            this->pictureBox2->Size = System::Drawing::Size(912, 758);
            this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox2->TabIndex = 24;
            this->pictureBox2->TabStop = false;
            this->pictureBox2->WaitOnLoad = true;
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->BackColor = System::Drawing::Color::Transparent;
            this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label5->ForeColor = System::Drawing::Color::White;
            this->label5->Location = System::Drawing::Point(12, 504);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(419, 27);
            this->label5->TabIndex = 25;
            this->label5->Text = L"“You will not find it difficult to prove that";
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->BackColor = System::Drawing::Color::Transparent;
            this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label6->ForeColor = System::Drawing::Color::White;
            this->label6->Location = System::Drawing::Point(32, 530);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(402, 27);
            this->label6->TabIndex = 26;
            this->label6->Text = L"battles, campaigns, and even wars have ";
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->BackColor = System::Drawing::Color::Transparent;
            this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label7->ForeColor = System::Drawing::Color::White;
            this->label7->Location = System::Drawing::Point(7, 556);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(435, 27);
            this->label7->TabIndex = 27;
            this->label7->Text = L"won or lost primarily because of logistics.”";
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->BackColor = System::Drawing::Color::Transparent;
            this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label8->ForeColor = System::Drawing::Color::White;
            this->label8->Location = System::Drawing::Point(141, 582);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(294, 27);
            this->label8->TabIndex = 28;
            this->label8->Text = L"-Dwight D. Eisenhower, USA";
            // 
            // MyForm
            // 
            this->BackColor = System::Drawing::Color::White;
            this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
            this->ClientSize = System::Drawing::Size(1362, 741);
            this->Controls->Add(this->label8);
            this->Controls->Add(this->label7);
            this->Controls->Add(this->label6);
            this->Controls->Add(this->label5);
            this->Controls->Add(this->pictureBox2);
            this->Controls->Add(this->pictureBox1);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->button3);
            this->Controls->Add(this->button2);
            this->Controls->Add(this->Password);
            this->Controls->Add(this->Username);
            this->Cursor = System::Windows::Forms::Cursors::Default;
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
            this->Name = L"MyForm";
            this->Text = L"MyForm";
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

    private:
        // Tombol Exit
        void button3_Click(System::Object^ sender, System::EventArgs^ e) {
            Application::Exit();
        }

        // Tombol Login
        void button2_Click(System::Object^ sender, System::EventArgs^ e) {
            // Membaca file akun
            System::Collections::Generic::Dictionary<System::String^, System::String^>^ akunTerdaftar =
                gcnew System::Collections::Generic::Dictionary<System::String^, System::String^>();

            std::ifstream file("akun.txt");
            if (!file.is_open()) {
                MessageBox::Show("Gagal Buka File.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
                return;
            }

            std::string line;
            while (std::getline(file, line)) {
                size_t commaPos = line.find(',');
                if (commaPos != std::string::npos) {
                    std::string username = line.substr(0, commaPos);
                    std::string password = line.substr(commaPos + 1);
                    akunTerdaftar->Add(gcnew System::String(username.c_str()), gcnew System::String(password.c_str()));
                }
            }
            file.close();

            // Validasi akun
            System::String^ inputUsername = Username->Text;
            System::String^ inputPassword = Password->Text;
            if (akunTerdaftar->ContainsKey(inputUsername)) {
                if (akunTerdaftar[inputUsername] == inputPassword) {
                    this->Hide();
                    MenuUtama^ menuUtama = gcnew MenuUtama();
                    menuUtama->ShowDialog();
                    Application::Exit();
                }
                else {
                    MessageBox::Show("Password Salah", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
                }
            }
            else {
                MessageBox::Show("Username Tidak Ada", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
        }
    private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
    }
};
}
