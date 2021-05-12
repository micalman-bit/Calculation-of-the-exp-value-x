#pragma once
#include <math.h> 

namespace converter {

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

	protected: 
	private: System::Windows::Forms::RadioButton^  rb2;
	private: System::Windows::Forms::RadioButton^  rb3;
	private: System::Windows::Forms::RadioButton^  rb4;
	private: System::Windows::Forms::Button^  bin_close;
	private: System::Windows::Forms::Button^  bin_conv;
	private: System::Windows::Forms::TextBox^  txt1;
	private: System::Windows::Forms::TextBox^  txt3;



	private: System::Windows::Forms::TextBox^  txt2;
	private: System::Windows::Forms::TextBox^  txt4;


	private: System::Windows::Forms::Label^  lbl1;
	private: System::Windows::Forms::Label^  lbl2;
	private: System::Windows::Forms::GroupBox^  gb1;
	private: System::Windows::Forms::GroupBox^  gb2;
	private: System::Windows::Forms::GroupBox^  gb3;
	private: System::Windows::Forms::Label^  lbl_v2;

	private: System::Windows::Forms::Label^  lbl_v1;

	private: System::Windows::Forms::Label^  lbl3;
	private: System::Windows::Forms::RadioButton^  rb1;
	private: System::Windows::Forms::Label^  lbl_v3;




	private:
		bool nonNumberEntered;
		double c_euro_r, c_doll_r, c_r_doll, c_r_euro, lastrb;
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
			this->rb1 = (gcnew System::Windows::Forms::RadioButton());
			this->rb2 = (gcnew System::Windows::Forms::RadioButton());
			this->rb3 = (gcnew System::Windows::Forms::RadioButton());
			this->rb4 = (gcnew System::Windows::Forms::RadioButton());
			this->bin_close = (gcnew System::Windows::Forms::Button());
			this->bin_conv = (gcnew System::Windows::Forms::Button());
			this->txt1 = (gcnew System::Windows::Forms::TextBox());
			this->txt3 = (gcnew System::Windows::Forms::TextBox());
			this->txt2 = (gcnew System::Windows::Forms::TextBox());
			this->txt4 = (gcnew System::Windows::Forms::TextBox());
			this->lbl1 = (gcnew System::Windows::Forms::Label());
			this->lbl2 = (gcnew System::Windows::Forms::Label());
			this->gb1 = (gcnew System::Windows::Forms::GroupBox());
			this->lbl_v3 = (gcnew System::Windows::Forms::Label());
			this->gb2 = (gcnew System::Windows::Forms::GroupBox());
			this->gb3 = (gcnew System::Windows::Forms::GroupBox());
			this->lbl_v2 = (gcnew System::Windows::Forms::Label());
			this->lbl_v1 = (gcnew System::Windows::Forms::Label());
			this->lbl3 = (gcnew System::Windows::Forms::Label());
			this->gb1->SuspendLayout();
			this->gb2->SuspendLayout();
			this->gb3->SuspendLayout();
			this->SuspendLayout();
			// 
			// rb1
			// 
			this->rb1->AutoSize = true;
			this->rb1->Checked = true;
			this->rb1->Location = System::Drawing::Point(6, 21);
			this->rb1->Name = L"rb1";
			this->rb1->Size = System::Drawing::Size(113, 17);
			this->rb1->TabIndex = 0;
			this->rb1->TabStop = true;
			this->rb1->Text = L"Доллары в рубли";
			this->rb1->UseVisualStyleBackColor = true;
			this->rb1->CheckedChanged += gcnew System::EventHandler(this, &Form1::rb1_CheckedChanged);
			// 
			// rb2
			// 
			this->rb2->AutoSize = true;
			this->rb2->Location = System::Drawing::Point(6, 36);
			this->rb2->Name = L"rb2";
			this->rb2->Size = System::Drawing::Size(111, 17);
			this->rb2->TabIndex = 1;
			this->rb2->Text = L"Рубли в доллары";
			this->rb2->UseVisualStyleBackColor = true;
			this->rb2->CheckedChanged += gcnew System::EventHandler(this, &Form1::rb2_CheckedChanged);
			// 
			// rb3
			// 
			this->rb3->AutoSize = true;
			this->rb3->Location = System::Drawing::Point(6, 59);
			this->rb3->Name = L"rb3";
			this->rb3->Size = System::Drawing::Size(91, 17);
			this->rb3->TabIndex = 2;
			this->rb3->TabStop = true;
			this->rb3->Text = L"Евро в рубли";
			this->rb3->UseVisualStyleBackColor = true;
			this->rb3->CheckedChanged += gcnew System::EventHandler(this, &Form1::rb3_CheckedChanged);
			// 
			// rb4
			// 
			this->rb4->AutoSize = true;
			this->rb4->Location = System::Drawing::Point(6, 76);
			this->rb4->Name = L"rb4";
			this->rb4->Size = System::Drawing::Size(91, 17);
			this->rb4->TabIndex = 3;
			this->rb4->TabStop = true;
			this->rb4->Text = L"Рубли в евро";
			this->rb4->UseVisualStyleBackColor = true;
			this->rb4->CheckedChanged += gcnew System::EventHandler(this, &Form1::rb4_CheckedChanged);
			// 
			// bin_close
			// 
			this->bin_close->Location = System::Drawing::Point(377, 131);
			this->bin_close->Name = L"bin_close";
			this->bin_close->Size = System::Drawing::Size(75, 23);
			this->bin_close->TabIndex = 4;
			this->bin_close->Text = L"Закрыть";
			this->bin_close->UseVisualStyleBackColor = true;
			this->bin_close->Click += gcnew System::EventHandler(this, &Form1::bin_close_Click);
			// 
			// bin_conv
			// 
			this->bin_conv->Location = System::Drawing::Point(269, 131);
			this->bin_conv->Name = L"bin_conv";
			this->bin_conv->Size = System::Drawing::Size(102, 23);
			this->bin_conv->TabIndex = 5;
			this->bin_conv->Text = L"Конвертировать";
			this->bin_conv->UseVisualStyleBackColor = true;
			this->bin_conv->Click += gcnew System::EventHandler(this, &Form1::bin_conv_Click);
			// 
			// txt1
			// 
			this->txt1->Location = System::Drawing::Point(145, 23);
			this->txt1->MaxLength = 13;
			this->txt1->Name = L"txt1";
			this->txt1->Size = System::Drawing::Size(85, 20);
			this->txt1->TabIndex = 6;
			this->txt1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txt1->TextChanged += gcnew System::EventHandler(this, &Form1::txt1_TextChanged);
			this->txt1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::Key_down1);
			this->txt1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::Key_press1);
			// 
			// txt3
			// 
			this->txt3->Location = System::Drawing::Point(9, 19);
			this->txt3->MaxLength = 10;
			this->txt3->Name = L"txt3";
			this->txt3->ReadOnly = true;
			this->txt3->Size = System::Drawing::Size(68, 20);
			this->txt3->TabIndex = 7;
			this->txt3->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// txt2
			// 
			this->txt2->Location = System::Drawing::Point(145, 51);
			this->txt2->MaxLength = 13;
			this->txt2->Name = L"txt2";
			this->txt2->Size = System::Drawing::Size(85, 20);
			this->txt2->TabIndex = 8;
			this->txt2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txt2->TextChanged += gcnew System::EventHandler(this, &Form1::txt2_TextChanged);
			this->txt2->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::Key_down2);
			this->txt2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::Key_press2);
			// 
			// txt4
			// 
			this->txt4->Location = System::Drawing::Point(135, 19);
			this->txt4->MaxLength = 10;
			this->txt4->Name = L"txt4";
			this->txt4->ReadOnly = true;
			this->txt4->Size = System::Drawing::Size(68, 20);
			this->txt4->TabIndex = 9;
			this->txt4->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// lbl1
			// 
			this->lbl1->AutoSize = true;
			this->lbl1->Location = System::Drawing::Point(6, 26);
			this->lbl1->Name = L"lbl1";
			this->lbl1->Size = System::Drawing::Size(133, 13);
			this->lbl1->TabIndex = 10;
			this->lbl1->Text = L"Сумма для конвертации:";
			// 
			// lbl2
			// 
			this->lbl2->AutoSize = true;
			this->lbl2->Location = System::Drawing::Point(6, 54);
			this->lbl2->Name = L"lbl2";
			this->lbl2->Size = System::Drawing::Size(72, 13);
			this->lbl2->TabIndex = 11;
			this->lbl2->Text = L"Курс обмена";
			// 
			// gb1
			// 
			this->gb1->Controls->Add(this->lbl_v3);
			this->gb1->Controls->Add(this->lbl2);
			this->gb1->Controls->Add(this->lbl1);
			this->gb1->Controls->Add(this->txt2);
			this->gb1->Controls->Add(this->txt1);
			this->gb1->Location = System::Drawing::Point(12, 12);
			this->gb1->Name = L"gb1";
			this->gb1->Size = System::Drawing::Size(242, 84);
			this->gb1->TabIndex = 12;
			this->gb1->TabStop = false;
			this->gb1->Text = L"Исходные данные";
			// 
			// lbl_v3
			// 
			this->lbl_v3->AutoSize = true;
			this->lbl_v3->Location = System::Drawing::Point(74, 54);
			this->lbl_v3->Name = L"lbl_v3";
			this->lbl_v3->Size = System::Drawing::Size(44, 13);
			this->lbl_v3->TabIndex = 12;
			this->lbl_v3->Text = L"(руб./$)";
			// 
			// gb2
			// 
			this->gb2->Controls->Add(this->rb1);
			this->gb2->Controls->Add(this->rb2);
			this->gb2->Controls->Add(this->rb3);
			this->gb2->Controls->Add(this->rb4);
			this->gb2->Location = System::Drawing::Point(269, 17);
			this->gb2->Name = L"gb2";
			this->gb2->Size = System::Drawing::Size(183, 104);
			this->gb2->TabIndex = 13;
			this->gb2->TabStop = false;
			this->gb2->Text = L"Направление конвертации";
			// 
			// gb3
			// 
			this->gb3->Controls->Add(this->lbl_v2);
			this->gb3->Controls->Add(this->lbl_v1);
			this->gb3->Controls->Add(this->lbl3);
			this->gb3->Controls->Add(this->txt3);
			this->gb3->Controls->Add(this->txt4);
			this->gb3->Location = System::Drawing::Point(12, 102);
			this->gb3->Name = L"gb3";
			this->gb3->Size = System::Drawing::Size(242, 52);
			this->gb3->TabIndex = 14;
			this->gb3->TabStop = false;
			this->gb3->Text = L"Результат конвертации";
			// 
			// lbl_v2
			// 
			this->lbl_v2->AutoSize = true;
			this->lbl_v2->Location = System::Drawing::Point(209, 22);
			this->lbl_v2->Name = L"lbl_v2";
			this->lbl_v2->Size = System::Drawing::Size(27, 13);
			this->lbl_v2->TabIndex = 12;
			this->lbl_v2->Text = L"руб.";
			// 
			// lbl_v1
			// 
			this->lbl_v1->AutoSize = true;
			this->lbl_v1->Location = System::Drawing::Point(83, 22);
			this->lbl_v1->Name = L"lbl_v1";
			this->lbl_v1->Size = System::Drawing::Size(13, 13);
			this->lbl_v1->TabIndex = 11;
			this->lbl_v1->Text = L"$";
			// 
			// lbl3
			// 
			this->lbl3->AutoSize = true;
			this->lbl3->Location = System::Drawing::Point(116, 22);
			this->lbl3->Name = L"lbl3";
			this->lbl3->Size = System::Drawing::Size(13, 13);
			this->lbl3->TabIndex = 10;
			this->lbl3->Text = L"=";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(458, 160);
			this->Controls->Add(this->gb3);
			this->Controls->Add(this->gb2);
			this->Controls->Add(this->gb1);
			this->Controls->Add(this->bin_conv);
			this->Controls->Add(this->bin_close);
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"APM оператора обменного пункта";
			this->gb1->ResumeLayout(false);
			this->gb1->PerformLayout();
			this->gb2->ResumeLayout(false);
			this->gb2->PerformLayout();
			this->gb3->ResumeLayout(false);
			this->gb3->PerformLayout();
			this->ResumeLayout(false);
			c_euro_r = 0;
			c_doll_r = 0;
			c_r_doll = 0;
			c_r_euro = 0;
			lastrb = 1;
		}
#pragma endregion


void rb()
{
	if (lastrb == 1){
		c_doll_r = Convert::ToDouble(txt2->Text);
	}
	if (lastrb == 2){
		c_r_doll = Convert::ToDouble(txt2->Text);
	}
	if (lastrb == 3){
		c_euro_r = Convert::ToDouble(txt2->Text);
	}
	if (lastrb == 4){
		c_r_euro = Convert::ToDouble(txt2->Text);
	}
}


private: System::Void rb1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if(rb1->Checked){
		if (txt2->Text != ""){
			rb();
		}
		if (c_r_doll == 0){
			this->txt2->Text = Convert::ToString(c_doll_r);
		}
		else if (ceil(1 / c_doll_r * 1000) / 1000 == c_r_doll){
			this->txt2->Text = Convert::ToString(c_doll_r);
		}
		else if (c_r_doll != 0){
			this->txt2->Text = Convert::ToString(ceil(1 / c_r_doll * 100) / 100);
		}
		lastrb = 1;
		this->txt3->Text = L"";
		this->txt4->Text = L"";
		this->lbl_v1->Text = L"$";
		this->lbl_v2->Text = L"руб.";	
		this->lbl_v3->Text = L"(руб./$)";
	}
}
private: System::Void rb2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if(rb2->Checked){
		if (txt2->Text != ""){
			rb();
		}
		if (c_doll_r == 0){
			this->txt2->Text = Convert::ToString(c_r_doll);
		}
		else if (c_doll_r != 0){
			this->txt2->Text = Convert::ToString(ceil(1 / c_doll_r * 1000) / 1000);
		}
		lastrb = 2;
		this->txt3->Text = L"";
		this->txt4->Text = L"";
		this->lbl_v1->Text = L"руб.";
		this->lbl_v2->Text = L"$";
		this->lbl_v3->Text = L"($/руб.)";
	}
}
private: System::Void rb3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if(rb3->Checked){
		//
		if (txt2->Text != ""){
			rb();
		}
		if (c_r_euro == 0){
			this->txt2->Text = Convert::ToString(c_euro_r);
		}
		else if (ceil(1 / c_euro_r * 1000) / 1000 == c_r_euro){
			this->txt2->Text = Convert::ToString(c_euro_r);
		}
		else if (c_r_euro != 0){
			this->txt2->Text = Convert::ToString(ceil(1 / c_r_euro * 100) / 100);
		}
		lastrb = 3;
		this->txt3->Text = L"";
		this->txt4->Text = L"";
		this->lbl_v1->Text = L"€";
		this->lbl_v2->Text = L"руб.";
		this->lbl_v3->Text = L"(руб./€)";
	}
}
private: System::Void rb4_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if(rb4->Checked){
		if (txt2->Text != ""){
			rb();
		}
		if (c_euro_r == 0){
			this->txt2->Text = Convert::ToString(c_r_euro);
		}
		else if (c_euro_r != 0){
			this->txt2->Text = Convert::ToString(ceil(1 / c_euro_r * 1000) / 1000);
		}
		lastrb = 4;
		this->txt3->Text = L"";
		this->txt4->Text = L"";
		this->lbl_v1->Text = L"руб.";
		this->lbl_v2->Text = L"€";
		this->lbl_v3->Text = L"(€/руб.)";
	}
}

private: System::Void Key_down1(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 nonNumberEntered = false; // Инициализация флага в false.
			 // Определение, была ли нажата цифровая клавиша
			 // в верхней части клавиатуры.
			 if (e->KeyCode < Keys::D0 || e->KeyCode > Keys::D9) {
				 // Определение, была ли нажата цифровая клавиша
				 // на цифровой клавиатуры.
				 if (e->KeyCode < Keys::NumPad0 || e->KeyCode > Keys::NumPad9) {
					 // Определение, была ли нажата клавиша BackSpace.
					 if (e->KeyCode != Keys::Back && e->KeyCode != Keys::Oemcomma && e->KeyCode != Keys::OemPeriod) {
						 // Была нажата нечисловая клавиша.
						 nonNumberEntered = true; // Установка флага в true.
						 if (Control::ModifierKeys == Keys::Shift)
							 nonNumberEntered = true;
					 }
				 }
			 }
				 if (Control::ModifierKeys == Keys::Shift) {
					 nonNumberEntered = true; // Установка флага в true.
				 }
		 }
private: System::Void Key_down2(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 nonNumberEntered = false; // Инициализация флага в false.
			 // Определение, была ли нажата цифровая клавиша
			 // в верхней части клавиатуры.
			 if (e->KeyCode < Keys::D0 || e->KeyCode > Keys::D9) {
				 // Определение, была ли нажата цифровая клавиша
				 // на цифровой клавиатуры.
				 if (e->KeyCode < Keys::NumPad0 || e->KeyCode > Keys::NumPad9) {
					 // Определение, была ли нажата клавиша BackSpace.
					 if (e->KeyCode != Keys::Back && e->KeyCode != Keys::Oemcomma && e->KeyCode != Keys::OemPeriod) {
						 // Была нажата нечисловая клавиша.
						 nonNumberEntered = true; // Установка флага в true.
						 if (Control::ModifierKeys == Keys::Shift)
							 nonNumberEntered = true;
					 }
				 }
			 }
				 if (Control::ModifierKeys == Keys::Shift) {
					 nonNumberEntered = true; // Установка флага в true.
				 }
		 }

private: System::Void Key_press2(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		 if (nonNumberEntered == true)
				 e->Handled=true;
		 }
private: System::Void Key_press1(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		 if (nonNumberEntered == true)
				 e->Handled=true;
		 }

private: System::Void txt1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 txt1 -> Text = txt1 -> Text -> Replace(".", ",");
			 if (txt1 -> Text ->IndexOf(",") != txt1 -> Text ->LastIndexOf(",")){
				txt1 -> Text = txt1 -> Text -> Substring(0, txt1->Text->Length-1);
			 }
			 if (txt1 -> Text ->IndexOf(",") == 0){
				txt1 -> Text = txt1 -> Text -> Replace(",", "0,");
			 }
			 if (txt1 -> Text ->IndexOf("0") == 0 && txt1 -> Text ->LastIndexOf("0") == 1){
				txt1 -> Text = txt1 -> Text -> Substring(0, txt1->Text->Length-1);
			 }
			 txt1 -> SelectionStart = txt1 -> Text -> Length;
			 if (txt1->Text->Length - 3 > txt1 -> Text ->IndexOf(",") && txt1 -> Text ->LastIndexOf(",") != -1){
				 txt1 -> Text = txt1 -> Text -> Substring(0, txt1->Text->Length-1);
			 }
		 }
private: System::Void txt2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 txt2 -> Text = txt2 -> Text -> Replace(".", ",");
			 if (txt2 -> Text ->IndexOf(",") != txt2 -> Text ->LastIndexOf(",")){
				txt2 -> Text = txt2 -> Text -> Substring(0, txt2->Text->Length-1);
			 }
			 if (txt2 -> Text ->IndexOf(",") == 0){
				txt2 -> Text = txt2 -> Text -> Replace(",", "0,");
			 }
			 if (txt2 -> Text ->IndexOf("0") == 0 && txt2 -> Text ->LastIndexOf("0") == 1){
				txt2 -> Text = txt2 -> Text -> Substring(0, txt2->Text->Length-1);
			 }
			 if(rb2->Checked || rb4->Checked){
				 if (txt2->Text->Length - 4 > txt2 -> Text ->IndexOf(",") && txt2 -> Text ->LastIndexOf(",") != -1){
					 txt2 -> Text = txt2 -> Text -> Substring(0, txt2->Text->Length-1);
				 }
			 }
			 if(rb1->Checked || rb3->Checked){
				 if (txt2->Text->Length - 3 > txt2 -> Text ->IndexOf(",") && txt2 -> Text ->LastIndexOf(",") != -1){
					 txt2 -> Text = txt2 -> Text -> Substring(0, txt2->Text->Length-1);
				 }
			 }		
			 txt2 -> SelectionStart = txt2 -> Text -> Length;
		 }

private: System::Void bin_close_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
		 }

private: System::Void bin_conv_Click(System::Object^  sender, System::EventArgs^  e) {
			 double numb1, numb2, ans;
			 if (txt1 -> Text ->LastIndexOf(",") == -1){
				txt1 -> Text = txt1 -> Text -> Insert(txt1->Text->Length, ",00");
			 }
			 else if (txt1 -> Text ->LastIndexOf(",") == txt1->Text->Length - 1){
				txt1 -> Text = txt1 -> Text -> Insert(txt1->Text->Length, "00");
			 }
			 else if (txt1 -> Text ->LastIndexOf(",") == txt1->Text->Length - 2){
				txt1 -> Text = txt1 -> Text -> Insert(txt1->Text->Length, "0");
			 }

			 if(rb1->Checked || rb3->Checked){
				 if (txt2 -> Text ->LastIndexOf(",") == -1){
					txt2 -> Text = txt2 -> Text -> Insert(txt2->Text->Length, ",00");
				 }
				 else if (txt2 -> Text ->LastIndexOf(",") == txt2->Text->Length - 1){
					txt2 -> Text = txt2 -> Text -> Insert(txt2->Text->Length, "00");
				 }
				 else if (txt2 -> Text ->LastIndexOf(",") == txt2->Text->Length - 2){
					txt2 -> Text = txt2 -> Text -> Insert(txt2->Text->Length, "0");
				 }
			 }
			 if(rb2->Checked || rb4->Checked){
				 if (txt2 -> Text ->LastIndexOf(",") == -1){
					txt2 -> Text = txt2 -> Text -> Insert(txt2->Text->Length, ",000");
				 }
				 else if (txt2 -> Text ->LastIndexOf(",") == txt2->Text->Length - 1){
					txt2 -> Text = txt2 -> Text -> Insert(txt2->Text->Length, "0");
				 }
				 else if (txt2 -> Text ->LastIndexOf(",") == txt2->Text->Length - 2){
					txt2 -> Text = txt2 -> Text -> Insert(txt2->Text->Length, "00");
				 }
				 else if (txt2 -> Text ->LastIndexOf(",") == txt2->Text->Length - 3){
					txt2 -> Text = txt2 -> Text -> Insert(txt2->Text->Length, "000");
				 }
			 }
			 if ((txt1->Text != "")&&(txt2->Text !="")){
				numb1 = Convert::ToDouble(txt1->Text);
				numb2 = Convert::ToDouble(txt2->Text);
				if (numb2 == 0){
					MessageBox::Show(this, "Курс обмена не может быть равен нулю","Предупреждение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				}
				ans = ceil(numb1 * numb2 * 100) / 100;
				this->txt3->Text = Convert::ToString(numb1);
				this->txt4->Text = Convert::ToString(ans);
			 }
			 else{
				MessageBox::Show(this, "Неверный ввод: пустое поле","Предупреждение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			 }
		 }
};
}

