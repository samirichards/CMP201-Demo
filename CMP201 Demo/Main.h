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
        System::Windows::Forms::RichTextBox^rTxt_haystack;
    private:
        System::Windows::Forms::TextBox^txt_output;

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
            this->groupBox1 = (gcnew
            System::Windows::Forms::GroupBox());
            this->btn_search = (gcnew
            System::Windows::Forms::Button());
            this->label2 = (gcnew
            System::Windows::Forms::Label());
            this->label1 = (gcnew
            System::Windows::Forms::Label());
            this->txt_needle = (gcnew
            System::Windows::Forms::TextBox());
            this->Cmb_SearchSelect = (gcnew
            System::Windows::Forms::ComboBox());
            this->groupBox2 = (gcnew
            System::Windows::Forms::GroupBox());
            this->rTxt_haystack = (gcnew
            System::Windows::Forms::RichTextBox());
            this->txt_output = (gcnew
            System::Windows::Forms::TextBox());
            this->groupBox1->SuspendLayout();
            this->groupBox2->SuspendLayout();
            this->SuspendLayout();
            //
            // groupBox1
            //
            this->groupBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((
                    ((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                     | System::Windows::Forms::AnchorStyles::Left)
                    | System::Windows::Forms::AnchorStyles::Right));
            this->groupBox1->Controls->Add(this->txt_output);
            this->groupBox1->Controls->Add(this->btn_search);
            this->groupBox1->Controls->Add(this->label2);
            this->groupBox1->Controls->Add(this->label1);
            this->groupBox1->Controls->Add(this->txt_needle);
            this->groupBox1->Controls->Add(this->Cmb_SearchSelect);
            this->groupBox1->Location = System::Drawing::Point(799, 12);
            this->groupBox1->Name = L"groupBox1";
            this->groupBox1->Size = System::Drawing::Size(171, 729);
            this->groupBox1->TabIndex = 1;
            this->groupBox1->TabStop = false;
            this->groupBox1->Text = L"Controls";
            //
            // btn_search
            //
            this->btn_search->Enabled = false;
            this->btn_search->Location = System::Drawing::Point(0, 196);
            this->btn_search->Name = L"btn_search";
            this->btn_search->Size = System::Drawing::Size(157, 23);
            this->btn_search->TabIndex = 4;
            this->btn_search->Text = L"Search";
            this->btn_search->UseVisualStyleBackColor = true;
            this->btn_search->Click += gcnew
            System::EventHandler(this, &Main::btn_search_Click);
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
            this->txt_needle->Location = System::Drawing::Point(0, 102);
            this->txt_needle->MaxLength = 96;
            this->txt_needle->Multiline = true;
            this->txt_needle->Name = L"txt_needle";
            this->txt_needle->Size = System::Drawing::Size(157, 88);
            this->txt_needle->TabIndex = 1;
            //
            // Cmb_SearchSelect
            //
            this->Cmb_SearchSelect->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
            this->Cmb_SearchSelect->FormattingEnabled = true;
            this->Cmb_SearchSelect->Items->AddRange(gcnew
            cli::array<System::Object ^ >(2)
            { L"Boyer-Moore", L"Rabin-Karp" });
            this->Cmb_SearchSelect->Location = System::Drawing::Point(0, 51);
            this->Cmb_SearchSelect->Name = L"Cmb_SearchSelect";
            this->Cmb_SearchSelect->Size = System::Drawing::Size(157, 24);
            this->Cmb_SearchSelect->TabIndex = 0;
            this->Cmb_SearchSelect->SelectionChangeCommitted += gcnew
            System::EventHandler(this, &Main::Cmb_SearchSelect_SelectionChangeCommitted);
            //
            // groupBox2
            //
            this->groupBox2->BackColor = System::Drawing::SystemColors::Control;
            this->groupBox2->Controls->Add(this->rTxt_haystack);
            this->groupBox2->Location = System::Drawing::Point(12, 12);
            this->groupBox2->Name = L"groupBox2";
            this->groupBox2->Size = System::Drawing::Size(781, 729);
            this->groupBox2->TabIndex = 2;
            this->groupBox2->TabStop = false;
            this->groupBox2->Text = L"Haystack";
            //
            // rTxt_haystack
            //
            this->rTxt_haystack->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->rTxt_haystack->Location = System::Drawing::Point(6, 21);
            this->rTxt_haystack->Name = L"rTxt_haystack";
            this->rTxt_haystack->Size = System::Drawing::Size(769, 702);
            this->rTxt_haystack->TabIndex = 0;
            this->rTxt_haystack->Text = L"";
            //
            // txt_output
            //
            this->txt_output->Location = System::Drawing::Point(6, 225);
            this->txt_output->Multiline = true;
            this->txt_output->Name = L"txt_output";
            this->txt_output->ReadOnly = true;
            this->txt_output->Size = System::Drawing::Size(151, 498);
            this->txt_output->TabIndex = 5;
            //
            // Main
            //
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
            this->ClientSize = System::Drawing::Size(982, 753);
            this->Controls->Add(this->groupBox2);
            this->Controls->Add(this->groupBox1);
            this->MaximizeBox = false;
            this->Name = L"Main";
            this->ShowIcon = false;
            this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"CMP 201 Demo";
            this->groupBox1->ResumeLayout(false);
            this->groupBox1->PerformLayout();
            this->groupBox2->ResumeLayout(false);
            this->ResumeLayout(false);

        }

#pragma endregion
    private:
        System::Void Cmb_SearchSelect_SelectionChangeCommitted(System::Object^sender, System::EventArgs^e) {
            btn_search->Enabled = true;
        }

    private:
        System::Void btn_search_Click(System::Object^sender, System::EventArgs^e) {
            std::list<int> *indexes = new std::list<int>;
            if (Cmb_SearchSelect->SelectedIndex == 0) {
                *indexes = bmSearch(&msclr::interop::marshal_as<std::string>(rTxt_haystack->Text),
                                    &msclr::interop::marshal_as<std::string>(txt_needle->Text));
                txt_output->Text = "Using " + Cmb_SearchSelect->SelectedItem + " Search Algorithm\n";
                if (indexes->size()) {
                    txt_output->Text += "Found " + txt_needle->Text + " at the following indexes:\n";
                    for (auto item : *indexes) {
                        txt_output->Text += (item.ToString() + "\n");
                    }
                }
            }
            if (Cmb_SearchSelect->SelectedIndex == 1) {
                *indexes = rkSearch(&msclr::interop::marshal_as<std::string>(rTxt_haystack->Text),
                                    &msclr::interop::marshal_as<std::string>(txt_needle->Text));
                txt_output->Text = "Using " + Cmb_SearchSelect->SelectedItem + " Search Algorithm\n";
                if (indexes->size()) {
                    txt_output->Text += "Found " + txt_needle->Text + " at the following indexes:\n";
                    for (auto item : *indexes) {
                        txt_output->Text += (item.ToString() + "\n");
                    }
                }
            }
            delete indexes;
        }
    };
}
