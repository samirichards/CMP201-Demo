#pragma once

#include <list>
#include "StringSearching.h"
#include <msclr\marshal_cppstd.h>

namespace CMP201Demo {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    /// <summary>
    /// Summary for Main
    /// </summary>
    public ref class Main : public System::Windows::Forms::Form {
    public:
        Main(void) {
            InitializeComponent();
        }

    protected:
        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        ~Main() {
            if (components) {
                delete components;
            }
        }

    protected:

    protected:
    private:
        System::Windows::Forms::GroupBox^groupBox1;
    private:
        System::Windows::Forms::TextBox^txt_needle;
    private:
        System::Windows::Forms::ComboBox^Cmb_SearchSelect;
    private:
        System::Windows::Forms::Label^label1;
    private:
        System::Windows::Forms::Button^btn_search;
    private:
        System::Windows::Forms::Label^label2;
    private:
        System::Windows::Forms::GroupBox^groupBox2;
    private:

    private:
        System::Windows::Forms::TextBox^txt_output;
    private: System::Windows::Forms::RichTextBox^ rTxt_haystack;
    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::MenuStrip^ menuStrip1;
    private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem1;
    private: System::Windows::Forms::ToolStripMenuItem^ mnu_selectionEnabled;
    private: System::Windows::Forms::ToolStripMenuItem^ mnu_openConsole;




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
        void InitializeComponent(void) {
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Main::typeid));
            this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->txt_output = (gcnew System::Windows::Forms::TextBox());
            this->btn_search = (gcnew System::Windows::Forms::Button());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->txt_needle = (gcnew System::Windows::Forms::TextBox());
            this->Cmb_SearchSelect = (gcnew System::Windows::Forms::ComboBox());
            this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
            this->rTxt_haystack = (gcnew System::Windows::Forms::RichTextBox());
            this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
            this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->mnu_selectionEnabled = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->mnu_openConsole = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->groupBox1->SuspendLayout();
            this->groupBox2->SuspendLayout();
            this->menuStrip1->SuspendLayout();
            this->SuspendLayout();
            // 
            // groupBox1
            // 
            this->groupBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->groupBox1->Controls->Add(this->textBox1);
            this->groupBox1->Controls->Add(this->txt_output);
            this->groupBox1->Controls->Add(this->btn_search);
            this->groupBox1->Controls->Add(this->label2);
            this->groupBox1->Controls->Add(this->label1);
            this->groupBox1->Controls->Add(this->txt_needle);
            this->groupBox1->Controls->Add(this->Cmb_SearchSelect);
            this->groupBox1->Location = System::Drawing::Point(755, 31);
            this->groupBox1->Name = L"groupBox1";
            this->groupBox1->Size = System::Drawing::Size(215, 710);
            this->groupBox1->TabIndex = 1;
            this->groupBox1->TabStop = false;
            this->groupBox1->Text = L"Controls";
            // 
            // textBox1
            // 
            this->textBox1->BackColor = System::Drawing::SystemColors::Control;
            this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->textBox1->Location = System::Drawing::Point(10, 646);
            this->textBox1->Multiline = true;
            this->textBox1->Name = L"textBox1";
            this->textBox1->ReadOnly = true;
            this->textBox1->Size = System::Drawing::Size(199, 64);
            this->textBox1->TabIndex = 6;
            this->textBox1->Text = L"Please note: Execution of the algorithm is actually pretty fast, the only reason "
                L"this is slow is that it is drawn synchronously";
            this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // txt_output
            // 
            this->txt_output->Location = System::Drawing::Point(9, 181);
            this->txt_output->Multiline = true;
            this->txt_output->Name = L"txt_output";
            this->txt_output->ReadOnly = true;
            this->txt_output->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
            this->txt_output->Size = System::Drawing::Size(201, 459);
            this->txt_output->TabIndex = 5;
            // 
            // btn_search
            // 
            this->btn_search->Enabled = false;
            this->btn_search->Location = System::Drawing::Point(8, 152);
            this->btn_search->Name = L"btn_search";
            this->btn_search->Size = System::Drawing::Size(201, 23);
            this->btn_search->TabIndex = 4;
            this->btn_search->Text = L"Search";
            this->btn_search->UseVisualStyleBackColor = true;
            this->btn_search->Click += gcnew System::EventHandler(this, &Main::btn_search_Click);
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Location = System::Drawing::Point(7, 82);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(53, 17);
            this->label2->TabIndex = 3;
            this->label2->Text = L"Needle";
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Location = System::Drawing::Point(6, 31);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(159, 17);
            this->label1->TabIndex = 2;
            this->label1->Text = L"Select Search Algorithm";
            // 
            // txt_needle
            // 
            this->txt_needle->Location = System::Drawing::Point(8, 102);
            this->txt_needle->MaxLength = 96;
            this->txt_needle->Multiline = true;
            this->txt_needle->Name = L"txt_needle";
            this->txt_needle->Size = System::Drawing::Size(201, 44);
            this->txt_needle->TabIndex = 1;
            // 
            // Cmb_SearchSelect
            // 
            this->Cmb_SearchSelect->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
            this->Cmb_SearchSelect->FormattingEnabled = true;
            this->Cmb_SearchSelect->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Boyer-Moore", L"Rabin-Karp" });
            this->Cmb_SearchSelect->Location = System::Drawing::Point(8, 51);
            this->Cmb_SearchSelect->Name = L"Cmb_SearchSelect";
            this->Cmb_SearchSelect->Size = System::Drawing::Size(201, 24);
            this->Cmb_SearchSelect->TabIndex = 0;
            this->Cmb_SearchSelect->SelectionChangeCommitted += gcnew System::EventHandler(this, &Main::Cmb_SearchSelect_SelectionChangeCommitted);
            // 
            // groupBox2
            // 
            this->groupBox2->BackColor = System::Drawing::SystemColors::Control;
            this->groupBox2->Controls->Add(this->rTxt_haystack);
            this->groupBox2->Location = System::Drawing::Point(12, 31);
            this->groupBox2->Name = L"groupBox2";
            this->groupBox2->Size = System::Drawing::Size(737, 710);
            this->groupBox2->TabIndex = 2;
            this->groupBox2->TabStop = false;
            this->groupBox2->Text = L"Haystack";
            // 
            // rTxt_haystack
            // 
            this->rTxt_haystack->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->rTxt_haystack->AutoWordSelection = true;
            this->rTxt_haystack->BackColor = System::Drawing::SystemColors::Control;
            this->rTxt_haystack->DetectUrls = false;
            this->rTxt_haystack->HideSelection = false;
            this->rTxt_haystack->Location = System::Drawing::Point(6, 21);
            this->rTxt_haystack->Name = L"rTxt_haystack";
            this->rTxt_haystack->Size = System::Drawing::Size(725, 683);
            this->rTxt_haystack->TabIndex = 0;
            this->rTxt_haystack->Text = L"";
            // 
            // menuStrip1
            // 
            this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
            this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
                this->toolStripMenuItem1,
                    this->mnu_openConsole
            });
            this->menuStrip1->Location = System::Drawing::Point(0, 0);
            this->menuStrip1->Name = L"menuStrip1";
            this->menuStrip1->Size = System::Drawing::Size(982, 30);
            this->menuStrip1->TabIndex = 3;
            this->menuStrip1->Text = L"menuStrip1";
            // 
            // toolStripMenuItem1
            // 
            this->toolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->mnu_selectionEnabled });
            this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
            this->toolStripMenuItem1->Size = System::Drawing::Size(75, 24);
            this->toolStripMenuItem1->Text = L"Options";
            // 
            // mnu_selectionEnabled
            // 
            this->mnu_selectionEnabled->Checked = true;
            this->mnu_selectionEnabled->CheckOnClick = true;
            this->mnu_selectionEnabled->CheckState = System::Windows::Forms::CheckState::Checked;
            this->mnu_selectionEnabled->Name = L"mnu_selectionEnabled";
            this->mnu_selectionEnabled->Size = System::Drawing::Size(219, 26);
            this->mnu_selectionEnabled->Text = L"Highlight Selection";
            // 
            // mnu_openConsole
            // 
            this->mnu_openConsole->Enabled = false;
            this->mnu_openConsole->Name = L"mnu_openConsole";
            this->mnu_openConsole->Size = System::Drawing::Size(119, 24);
            this->mnu_openConsole->Text = L"Console Mode";
            this->mnu_openConsole->Click += gcnew System::EventHandler(this, &Main::mnu_openConsole_Click);
            // 
            // Main
            // 
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Inherit;
            this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
            this->ClientSize = System::Drawing::Size(982, 753);
            this->Controls->Add(this->groupBox2);
            this->Controls->Add(this->groupBox1);
            this->Controls->Add(this->menuStrip1);
            this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
            this->MainMenuStrip = this->menuStrip1;
            this->MaximizeBox = false;
            this->Name = L"Main";
            this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"CMP 201 Demo";
            this->groupBox1->ResumeLayout(false);
            this->groupBox1->PerformLayout();
            this->groupBox2->ResumeLayout(false);
            this->menuStrip1->ResumeLayout(false);
            this->menuStrip1->PerformLayout();
            this->ResumeLayout(false);
            this->PerformLayout();

        }

#pragma endregion
    private:
        System::Void Cmb_SearchSelect_SelectionChangeCommitted(System::Object^sender, System::EventArgs^e) {
            btn_search->Enabled = true;
        }

    private:
        System::Void btn_search_Click(System::Object^sender, System::EventArgs^e) {

            //Find out how to make draw performance a bit better
            //Then add timing functionality
            //Then maybe add console mode for pure performance
            //Regardless of the last step being done at some point do some performance measures and 
            //put them in a powerpoint
            
            rTxt_haystack->SuspendLayout();
            txt_output->SuspendLayout();
            rTxt_haystack->SelectAll();
            rTxt_haystack->SelectionBackColor = System::Windows::Forms::Control::DefaultBackColor;
            rTxt_haystack->DeselectAll();
            std::list<int> *indexes = new std::list<int>;
            if (Cmb_SearchSelect->SelectedIndex == 0) {
                bmSearch(&msclr::interop::marshal_as<std::string>(rTxt_haystack->Text),
                                    &msclr::interop::marshal_as<std::string>(txt_needle->Text), indexes);
                txt_output->Text = "Using " + Cmb_SearchSelect->SelectedItem + " Search Algorithm\n\n";
                if (indexes->size()) {
                    txt_output->Text += "Found " + txt_needle->Text + " at the following indexes:\n";
                    for (int item : *indexes) {
                        txt_output->Text += (item.ToString() + " \n");
                        if (mnu_selectionEnabled->Checked)
                        {                    
                            rTxt_haystack->SelectionBackColor = System::Drawing::Color::GreenYellow;
                            rTxt_haystack->SelectionStart = item;
                            rTxt_haystack->SelectionLength = txt_needle->TextLength;
                        }
                    }
                }
            }
            if (Cmb_SearchSelect->SelectedIndex == 1) {
                rkSearch(&msclr::interop::marshal_as<std::string>(rTxt_haystack->Text),
                                    &msclr::interop::marshal_as<std::string>(txt_needle->Text), indexes);
                txt_output->Text = "Using " + Cmb_SearchSelect->SelectedItem + " Search Algorithm\n\n";
                if (indexes->size()) {
                    txt_output->Text += "Found " + txt_needle->Text + " at the following indexes:\n";

                    for (auto item : *indexes) {
                        txt_output->Text += (item + " \n");
                        if (mnu_selectionEnabled->Checked)
                        {                    
                            rTxt_haystack->SelectionBackColor = System::Drawing::Color::Yellow;
                            rTxt_haystack->SelectionStart = item;
                            rTxt_haystack->SelectionLength = txt_needle->TextLength;
                        }
                    }
                }
            }
            txt_output->ResumeLayout();
            rTxt_haystack->DeselectAll();
            rTxt_haystack->ResumeLayout();
            indexes->clear();
            delete indexes;
        }
private: System::Void mnu_openConsole_Click(System::Object^ sender, System::EventArgs^ e) {

}
};
}
