#pragma once

namespace NumericalMethods {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	protected:
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip2;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ выходToolStripMenuItem;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip3;
	private: System::Windows::Forms::Button^ button1_start;


	private: System::Windows::Forms::HelpProvider^ helpProvider1;
	private: System::Windows::Forms::GroupBox^ groupBox1;

	private: System::Windows::Forms::TextBox^ textBox1_R;
	private: System::Windows::Forms::Button^ button4_clear;

	private: System::Windows::Forms::GroupBox^ groupBox2;

	private: System::Windows::Forms::DataGridView^ dataGridView1_table;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown3_h_0;

	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown4_max_iteration;
	private: System::Windows::Forms::Label^ label8_контроль;


	private: System::Windows::Forms::TextBox^ textBox2_sigma;

	private: System::Windows::Forms::Label^ label9;

	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart2_graph;


	private: System::Windows::Forms::CheckBox^ checkBox1_KonLocPog;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ n;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::TextBox^ textBox1_kol_iter;

	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox2_x_fin_min_x_N;

	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ textBox7_max_S_x_n;

	private: System::Windows::Forms::Label^ label20;


	private: System::Windows::Forms::Label^ label19;


	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label17_меньше;

private: System::Windows::Forms::TextBox^ textBox4_v_N_itog;

	private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::TextBox^ textBox3_x_N;

	private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::TextBox^ textBox1_min_S_x_n;

private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::TextBox^ textBox3_min_h_x;
private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::TextBox^ textBox4_max_h_x;
private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::TextBox^ textBox5_min_h;
private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::TextBox^ textBox6_max_h;
private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::TextBox^ textBox2_uvel_vsego;
private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::TextBox^ textBox1_umen_vsego;
private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::TextBox^ textBox1_epsilon;
private: System::Windows::Forms::ToolStripMenuItem^ условиеЗадачиToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ используемыйМетодToolStripMenuItem;
private: System::Windows::Forms::GroupBox^ groupBox4;
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::TextBox^ textBox1_u0;
private: System::Windows::Forms::TextBox^ textBox2_x0;
private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::TextBox^ textBox2_eps_gr;
private: System::Windows::Forms::TextBox^ textBox1_x_fin;
private: System::Windows::Forms::Label^ label5_klp_no;
private: System::Windows::Forms::Label^ label5_klp_yes;
private: System::Windows::Forms::Label^ label5_вода_не_вытечет;
private: System::Windows::Forms::TextBox^ textBox1_время_вытекания;
private: System::Windows::Forms::Label^ label5_вода_вытекла;
private: System::Windows::Forms::TextBox^ textBox6_min_S;
private: System::Windows::Forms::TextBox^ textBox5_max_S;

	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->contextMenuStrip2 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->условиеЗадачиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->используемыйМетодToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contextMenuStrip3 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->button1_start = (gcnew System::Windows::Forms::Button());
			this->helpProvider1 = (gcnew System::Windows::Forms::HelpProvider());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox2_sigma = (gcnew System::Windows::Forms::TextBox());
			this->textBox1_R = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button4_clear = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox2_eps_gr = (gcnew System::Windows::Forms::TextBox());
			this->textBox1_x_fin = (gcnew System::Windows::Forms::TextBox());
			this->textBox1_epsilon = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1_KonLocPog = (gcnew System::Windows::Forms::CheckBox());
			this->label8_контроль = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown4_max_iteration = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown3_h_0 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1_table = (gcnew System::Windows::Forms::DataGridView());
			this->n = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->chart2_graph = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label5_вода_не_вытечет = (gcnew System::Windows::Forms::Label());
			this->textBox1_время_вытекания = (gcnew System::Windows::Forms::TextBox());
			this->label5_вода_вытекла = (gcnew System::Windows::Forms::Label());
			this->label5_klp_no = (gcnew System::Windows::Forms::Label());
			this->label5_klp_yes = (gcnew System::Windows::Forms::Label());
			this->textBox3_min_h_x = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->textBox4_max_h_x = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->textBox5_min_h = (gcnew System::Windows::Forms::TextBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->textBox6_max_h = (gcnew System::Windows::Forms::TextBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->textBox2_uvel_vsego = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->textBox1_umen_vsego = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->textBox1_min_S_x_n = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->textBox7_max_S_x_n = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->textBox6_min_S = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->textBox5_max_S = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17_меньше = (gcnew System::Windows::Forms::Label());
			this->textBox4_v_N_itog = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBox3_x_N = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox2_x_fin_min_x_N = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox1_kol_iter = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1_u0 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2_x0 = (gcnew System::Windows::Forms::TextBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4_max_iteration))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3_h_0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1_table))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2_graph))->BeginInit();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->SuspendLayout();
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// contextMenuStrip2
			// 
			this->contextMenuStrip2->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip2->Name = L"contextMenuStrip2";
			this->contextMenuStrip2->Size = System::Drawing::Size(61, 4);
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->условиеЗадачиToolStripMenuItem,
					this->используемыйМетодToolStripMenuItem, this->выходToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(5, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(1382, 24);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// условиеЗадачиToolStripMenuItem
			// 
			this->условиеЗадачиToolStripMenuItem->Name = L"условиеЗадачиToolStripMenuItem";
			this->условиеЗадачиToolStripMenuItem->Size = System::Drawing::Size(105, 20);
			this->условиеЗадачиToolStripMenuItem->Text = L"Условие задачи";
			this->условиеЗадачиToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::условиеЗадачиToolStripMenuItem_Click);
			// 
			// используемыйМетодToolStripMenuItem
			// 
			this->используемыйМетодToolStripMenuItem->Name = L"используемыйМетодToolStripMenuItem";
			this->используемыйМетодToolStripMenuItem->Size = System::Drawing::Size(139, 20);
			this->используемыйМетодToolStripMenuItem->Text = L"Используемый метод";
			this->используемыйМетодToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::используемыйМетодToolStripMenuItem_Click);
			// 
			// выходToolStripMenuItem
			// 
			this->выходToolStripMenuItem->Name = L"выходToolStripMenuItem";
			this->выходToolStripMenuItem->Size = System::Drawing::Size(54, 20);
			this->выходToolStripMenuItem->Text = L"Выход";
			this->выходToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::выходToolStripMenuItem_Click);
			// 
			// contextMenuStrip3
			// 
			this->contextMenuStrip3->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip3->Name = L"contextMenuStrip3";
			this->contextMenuStrip3->Size = System::Drawing::Size(61, 4);
			// 
			// button1_start
			// 
			this->button1_start->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button1_start->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1_start->ForeColor = System::Drawing::Color::Red;
			this->button1_start->Location = System::Drawing::Point(438, 33);
			this->button1_start->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1_start->Name = L"button1_start";
			this->button1_start->Size = System::Drawing::Size(278, 49);
			this->button1_start->TabIndex = 4;
			this->button1_start->Text = L"Вычислить";
			this->button1_start->UseVisualStyleBackColor = false;
			this->button1_start->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->textBox2_sigma);
			this->groupBox1->Controls->Add(this->textBox1_R);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(12, 33);
			this->groupBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Size = System::Drawing::Size(195, 93);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Параметры системы";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &MyForm::groupBox1_Enter);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(6, 31);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(74, 17);
			this->label9->TabIndex = 13;
			this->label9->Text = L"Введите R:";
			// 
			// textBox2_sigma
			// 
			this->textBox2_sigma->Location = System::Drawing::Point(86, 55);
			this->textBox2_sigma->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox2_sigma->Name = L"textBox2_sigma";
			this->textBox2_sigma->Size = System::Drawing::Size(88, 23);
			this->textBox2_sigma->TabIndex = 9;
			this->textBox2_sigma->Text = L"1";
			// 
			// textBox1_R
			// 
			this->textBox1_R->Location = System::Drawing::Point(86, 28);
			this->textBox1_R->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1_R->Name = L"textBox1_R";
			this->textBox1_R->Size = System::Drawing::Size(88, 23);
			this->textBox1_R->TabIndex = 7;
			this->textBox1_R->Text = L"250";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(6, 58);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(75, 17);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Введите σ:";
			// 
			// button4_clear
			// 
			this->button4_clear->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button4_clear->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4_clear->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->button4_clear->Location = System::Drawing::Point(438, 85);
			this->button4_clear->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button4_clear->Name = L"button4_clear";
			this->button4_clear->Size = System::Drawing::Size(278, 49);
			this->button4_clear->TabIndex = 7;
			this->button4_clear->Text = L"Очистить";
			this->button4_clear->UseVisualStyleBackColor = false;
			this->button4_clear->Click += gcnew System::EventHandler(this, &MyForm::button4_clear_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::SystemColors::ControlLight;
			this->groupBox2->Controls->Add(this->textBox2_eps_gr);
			this->groupBox2->Controls->Add(this->textBox1_x_fin);
			this->groupBox2->Controls->Add(this->textBox1_epsilon);
			this->groupBox2->Controls->Add(this->checkBox1_KonLocPog);
			this->groupBox2->Controls->Add(this->label8_контроль);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->numericUpDown4_max_iteration);
			this->groupBox2->Controls->Add(this->numericUpDown3_h_0);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(12, 139);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(704, 144);
			this->groupBox2->TabIndex = 10;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Введите параметры метода:";
			// 
			// textBox2_eps_gr
			// 
			this->textBox2_eps_gr->Location = System::Drawing::Point(570, 56);
			this->textBox2_eps_gr->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox2_eps_gr->Name = L"textBox2_eps_gr";
			this->textBox2_eps_gr->Size = System::Drawing::Size(81, 23);
			this->textBox2_eps_gr->TabIndex = 28;
			this->textBox2_eps_gr->Text = L"1E-3";
			// 
			// textBox1_x_fin
			// 
			this->textBox1_x_fin->Location = System::Drawing::Point(172, 56);
			this->textBox1_x_fin->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1_x_fin->Name = L"textBox1_x_fin";
			this->textBox1_x_fin->Size = System::Drawing::Size(81, 23);
			this->textBox1_x_fin->TabIndex = 14;
			this->textBox1_x_fin->Text = L"400";
			// 
			// textBox1_epsilon
			// 
			this->textBox1_epsilon->BackColor = System::Drawing::SystemColors::HighlightText;
			this->textBox1_epsilon->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1_epsilon->Location = System::Drawing::Point(529, 92);
			this->textBox1_epsilon->Name = L"textBox1_epsilon";
			this->textBox1_epsilon->Size = System::Drawing::Size(91, 23);
			this->textBox1_epsilon->TabIndex = 27;
			this->textBox1_epsilon->Text = L"1E-13";
			// 
			// checkBox1_KonLocPog
			// 
			this->checkBox1_KonLocPog->AutoSize = true;
			this->checkBox1_KonLocPog->Checked = true;
			this->checkBox1_KonLocPog->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1_KonLocPog->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox1_KonLocPog->Location = System::Drawing::Point(9, 94);
			this->checkBox1_KonLocPog->Name = L"checkBox1_KonLocPog";
			this->checkBox1_KonLocPog->Size = System::Drawing::Size(255, 21);
			this->checkBox1_KonLocPog->TabIndex = 14;
			this->checkBox1_KonLocPog->Text = L"Контроль локальной погрешности";
			this->checkBox1_KonLocPog->UseVisualStyleBackColor = true;
			this->checkBox1_KonLocPog->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_KonLocPog_CheckedChanged);
			// 
			// label8_контроль
			// 
			this->label8_контроль->AutoSize = true;
			this->label8_контроль->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8_контроль->Location = System::Drawing::Point(270, 94);
			this->label8_контроль->Name = L"label8_контроль";
			this->label8_контроль->Size = System::Drawing::Size(258, 17);
			this->label8_контроль->TabIndex = 22;
			this->label8_контроль->Text = L"Контроль локальной погрешности ε =";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(229, 25);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(204, 17);
			this->label7->TabIndex = 21;
			this->label7->Text = L"Максимальное кол-во шагов:";
			// 
			// numericUpDown4_max_iteration
			// 
			this->numericUpDown4_max_iteration->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 200, 0, 0, 0 });
			this->numericUpDown4_max_iteration->Location = System::Drawing::Point(437, 23);
			this->numericUpDown4_max_iteration->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->numericUpDown4_max_iteration->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->numericUpDown4_max_iteration->Name = L"numericUpDown4_max_iteration";
			this->numericUpDown4_max_iteration->Size = System::Drawing::Size(60, 23);
			this->numericUpDown4_max_iteration->TabIndex = 20;
			this->numericUpDown4_max_iteration->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			// 
			// numericUpDown3_h_0
			// 
			this->numericUpDown3_h_0->DecimalPlaces = 3;
			this->numericUpDown3_h_0->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 196608 });
			this->numericUpDown3_h_0->Location = System::Drawing::Point(152, 23);
			this->numericUpDown3_h_0->Name = L"numericUpDown3_h_0";
			this->numericUpDown3_h_0->Size = System::Drawing::Size(61, 23);
			this->numericUpDown3_h_0->TabIndex = 19;
			this->numericUpDown3_h_0->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 196608 });
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(6, 25);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(140, 17);
			this->label6->TabIndex = 18;
			this->label6->Text = L"Начальный шаг h0 =";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(262, 59);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(302, 17);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Контроль выхода на правую границу eps_гр:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(6, 59);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(160, 17);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Правая граница x_fin =";
			// 
			// dataGridView1_table
			// 
			this->dataGridView1_table->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1_table->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->n,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7, this->Column8, this->Column9
			});
			this->dataGridView1_table->Location = System::Drawing::Point(12, 289);
			this->dataGridView1_table->Name = L"dataGridView1_table";
			this->dataGridView1_table->ReadOnly = true;
			this->dataGridView1_table->RowHeadersWidth = 51;
			this->dataGridView1_table->RowTemplate->Height = 24;
			this->dataGridView1_table->Size = System::Drawing::Size(704, 357);
			this->dataGridView1_table->TabIndex = 11;
			// 
			// n
			// 
			this->n->HeaderText = L"n";
			this->n->MinimumWidth = 6;
			this->n->Name = L"n";
			this->n->ReadOnly = true;
			this->n->Width = 125;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"h_n-1";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Width = 125;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"x_n";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->Width = 125;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"v_n";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			this->Column4->Width = 125;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"v_n удв";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			this->Column5->Width = 125;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"S*";
			this->Column6->MinimumWidth = 6;
			this->Column6->Name = L"Column6";
			this->Column6->ReadOnly = true;
			this->Column6->Width = 125;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"v_n итог";
			this->Column7->MinimumWidth = 6;
			this->Column7->Name = L"Column7";
			this->Column7->ReadOnly = true;
			this->Column7->Width = 125;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"Умен. шага";
			this->Column8->MinimumWidth = 6;
			this->Column8->Name = L"Column8";
			this->Column8->ReadOnly = true;
			this->Column8->Width = 125;
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"Увел. шага";
			this->Column9->MinimumWidth = 6;
			this->Column9->Name = L"Column9";
			this->Column9->ReadOnly = true;
			this->Column9->Width = 125;
			// 
			// chart2_graph
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart2_graph->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart2_graph->Legends->Add(legend1);
			this->chart2_graph->Location = System::Drawing::Point(722, 289);
			this->chart2_graph->Name = L"chart2_graph";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->Legend = L"Legend1";
			series1->Name = L"Численное решение";
			this->chart2_graph->Series->Add(series1);
			this->chart2_graph->Size = System::Drawing::Size(650, 338);
			this->chart2_graph->TabIndex = 13;
			this->chart2_graph->Text = L"chart2";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label5_вода_не_вытечет);
			this->groupBox3->Controls->Add(this->textBox1_время_вытекания);
			this->groupBox3->Controls->Add(this->label5_вода_вытекла);
			this->groupBox3->Controls->Add(this->label5_klp_no);
			this->groupBox3->Controls->Add(this->label5_klp_yes);
			this->groupBox3->Controls->Add(this->textBox3_min_h_x);
			this->groupBox3->Controls->Add(this->label24);
			this->groupBox3->Controls->Add(this->textBox4_max_h_x);
			this->groupBox3->Controls->Add(this->label25);
			this->groupBox3->Controls->Add(this->textBox5_min_h);
			this->groupBox3->Controls->Add(this->label26);
			this->groupBox3->Controls->Add(this->textBox6_max_h);
			this->groupBox3->Controls->Add(this->label27);
			this->groupBox3->Controls->Add(this->textBox2_uvel_vsego);
			this->groupBox3->Controls->Add(this->label23);
			this->groupBox3->Controls->Add(this->textBox1_umen_vsego);
			this->groupBox3->Controls->Add(this->label22);
			this->groupBox3->Controls->Add(this->textBox1_min_S_x_n);
			this->groupBox3->Controls->Add(this->label21);
			this->groupBox3->Controls->Add(this->textBox7_max_S_x_n);
			this->groupBox3->Controls->Add(this->label20);
			this->groupBox3->Controls->Add(this->textBox6_min_S);
			this->groupBox3->Controls->Add(this->label19);
			this->groupBox3->Controls->Add(this->textBox5_max_S);
			this->groupBox3->Controls->Add(this->label18);
			this->groupBox3->Controls->Add(this->label17_меньше);
			this->groupBox3->Controls->Add(this->textBox4_v_N_itog);
			this->groupBox3->Controls->Add(this->label16);
			this->groupBox3->Controls->Add(this->textBox3_x_N);
			this->groupBox3->Controls->Add(this->label15);
			this->groupBox3->Controls->Add(this->textBox2_x_fin_min_x_N);
			this->groupBox3->Controls->Add(this->label14);
			this->groupBox3->Controls->Add(this->textBox1_kol_iter);
			this->groupBox3->Controls->Add(this->label13);
			this->groupBox3->Controls->Add(this->label12);
			this->groupBox3->Controls->Add(this->label11);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox3->Location = System::Drawing::Point(722, 33);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(650, 250);
			this->groupBox3->TabIndex = 0;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Справка, результат счёта:";
			// 
			// label5_вода_не_вытечет
			// 
			this->label5_вода_не_вытечет->AutoSize = true;
			this->label5_вода_не_вытечет->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label5_вода_не_вытечет->Location = System::Drawing::Point(10, 216);
			this->label5_вода_не_вытечет->Name = L"label5_вода_не_вытечет";
			this->label5_вода_не_вытечет->Size = System::Drawing::Size(536, 16);
			this->label5_вода_не_вытечет->TabIndex = 49;
			this->label5_вода_не_вытечет->Text = L"При данных параметрах вся вода из сосуда за указанный промежуток времени не вылье"
				L"тся";
			this->label5_вода_не_вытечет->Visible = false;
			// 
			// textBox1_время_вытекания
			// 
			this->textBox1_время_вытекания->BackColor = System::Drawing::SystemColors::Menu;
			this->textBox1_время_вытекания->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1_время_вытекания->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBox1_время_вытекания->Location = System::Drawing::Point(226, 216);
			this->textBox1_время_вытекания->Name = L"textBox1_время_вытекания";
			this->textBox1_время_вытекания->Size = System::Drawing::Size(139, 14);
			this->textBox1_время_вытекания->TabIndex = 48;
			// 
			// label5_вода_вытекла
			// 
			this->label5_вода_вытекла->AutoSize = true;
			this->label5_вода_вытекла->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5_вода_вытекла->Location = System::Drawing::Point(13, 216);
			this->label5_вода_вытекла->Name = L"label5_вода_вытекла";
			this->label5_вода_вытекла->Size = System::Drawing::Size(207, 16);
			this->label5_вода_вытекла->TabIndex = 47;
			this->label5_вода_вытекла->Text = L"Время, за которое вся вода вытечет:";
			this->label5_вода_вытекла->Visible = false;
			// 
			// label5_klp_no
			// 
			this->label5_klp_no->AutoSize = true;
			this->label5_klp_no->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5_klp_no->Location = System::Drawing::Point(10, 61);
			this->label5_klp_no->Name = L"label5_klp_no";
			this->label5_klp_no->Size = System::Drawing::Size(344, 17);
			this->label5_klp_no->TabIndex = 46;
			this->label5_klp_no->Text = L"Контроль локальной погрешности не использован";
			this->label5_klp_no->Visible = false;
			// 
			// label5_klp_yes
			// 
			this->label5_klp_yes->AutoSize = true;
			this->label5_klp_yes->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5_klp_yes->Location = System::Drawing::Point(10, 61);
			this->label5_klp_yes->Name = L"label5_klp_yes";
			this->label5_klp_yes->Size = System::Drawing::Size(324, 17);
			this->label5_klp_yes->TabIndex = 45;
			this->label5_klp_yes->Text = L"Контроль локальной погрешности использован";
			this->label5_klp_yes->Visible = false;
			// 
			// textBox3_min_h_x
			// 
			this->textBox3_min_h_x->BackColor = System::Drawing::SystemColors::Menu;
			this->textBox3_min_h_x->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3_min_h_x->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3_min_h_x->Location = System::Drawing::Point(557, 159);
			this->textBox3_min_h_x->Name = L"textBox3_min_h_x";
			this->textBox3_min_h_x->Size = System::Drawing::Size(86, 14);
			this->textBox3_min_h_x->TabIndex = 44;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label24->Location = System::Drawing::Point(483, 159);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(77, 16);
			this->label24->TabIndex = 43;
			this->label24->Text = L"при x_n+1 = ";
			this->label24->Visible = false;
			// 
			// textBox4_max_h_x
			// 
			this->textBox4_max_h_x->BackColor = System::Drawing::SystemColors::Menu;
			this->textBox4_max_h_x->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4_max_h_x->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4_max_h_x->Location = System::Drawing::Point(557, 130);
			this->textBox4_max_h_x->Name = L"textBox4_max_h_x";
			this->textBox4_max_h_x->Size = System::Drawing::Size(86, 14);
			this->textBox4_max_h_x->TabIndex = 42;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label25->Location = System::Drawing::Point(483, 130);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(77, 16);
			this->label25->TabIndex = 41;
			this->label25->Text = L"при x_n+1 = ";
			this->label25->Visible = false;
			// 
			// textBox5_min_h
			// 
			this->textBox5_min_h->BackColor = System::Drawing::SystemColors::Menu;
			this->textBox5_min_h->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5_min_h->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox5_min_h->Location = System::Drawing::Point(370, 159);
			this->textBox5_min_h->Name = L"textBox5_min_h";
			this->textBox5_min_h->Size = System::Drawing::Size(107, 14);
			this->textBox5_min_h->TabIndex = 40;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label26->Location = System::Drawing::Point(307, 159);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(60, 16);
			this->label26->TabIndex = 39;
			this->label26->Text = L"min h_n =";
			this->label26->Visible = false;
			// 
			// textBox6_max_h
			// 
			this->textBox6_max_h->BackColor = System::Drawing::SystemColors::Menu;
			this->textBox6_max_h->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox6_max_h->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox6_max_h->Location = System::Drawing::Point(370, 132);
			this->textBox6_max_h->Name = L"textBox6_max_h";
			this->textBox6_max_h->Size = System::Drawing::Size(107, 14);
			this->textBox6_max_h->TabIndex = 38;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label27->Location = System::Drawing::Point(302, 130);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(65, 16);
			this->label27->TabIndex = 37;
			this->label27->Text = L"max h_n =";
			this->label27->Visible = false;
			// 
			// textBox2_uvel_vsego
			// 
			this->textBox2_uvel_vsego->BackColor = System::Drawing::SystemColors::Menu;
			this->textBox2_uvel_vsego->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2_uvel_vsego->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2_uvel_vsego->Location = System::Drawing::Point(507, 103);
			this->textBox2_uvel_vsego->Name = L"textBox2_uvel_vsego";
			this->textBox2_uvel_vsego->Size = System::Drawing::Size(54, 14);
			this->textBox2_uvel_vsego->TabIndex = 36;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label23->Location = System::Drawing::Point(390, 103);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(105, 16);
			this->label23->TabIndex = 35;
			this->label23->Text = L"Всего увел. шага:";
			this->label23->Visible = false;
			// 
			// textBox1_umen_vsego
			// 
			this->textBox1_umen_vsego->BackColor = System::Drawing::SystemColors::Menu;
			this->textBox1_umen_vsego->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1_umen_vsego->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1_umen_vsego->Location = System::Drawing::Point(506, 73);
			this->textBox1_umen_vsego->Name = L"textBox1_umen_vsego";
			this->textBox1_umen_vsego->Size = System::Drawing::Size(54, 14);
			this->textBox1_umen_vsego->TabIndex = 34;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label22->Location = System::Drawing::Point(390, 73);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(111, 16);
			this->label22->TabIndex = 33;
			this->label22->Text = L"Всего умен. шага:";
			this->label22->Visible = false;
			// 
			// textBox1_min_S_x_n
			// 
			this->textBox1_min_S_x_n->BackColor = System::Drawing::SystemColors::Menu;
			this->textBox1_min_S_x_n->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1_min_S_x_n->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1_min_S_x_n->Location = System::Drawing::Point(557, 44);
			this->textBox1_min_S_x_n->Name = L"textBox1_min_S_x_n";
			this->textBox1_min_S_x_n->Size = System::Drawing::Size(86, 14);
			this->textBox1_min_S_x_n->TabIndex = 32;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label21->Location = System::Drawing::Point(490, 44);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(65, 16);
			this->label21->TabIndex = 31;
			this->label21->Text = L"при x_n = ";
			this->label21->Visible = false;
			// 
			// textBox7_max_S_x_n
			// 
			this->textBox7_max_S_x_n->BackColor = System::Drawing::SystemColors::Menu;
			this->textBox7_max_S_x_n->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox7_max_S_x_n->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox7_max_S_x_n->Location = System::Drawing::Point(557, 15);
			this->textBox7_max_S_x_n->Name = L"textBox7_max_S_x_n";
			this->textBox7_max_S_x_n->Size = System::Drawing::Size(86, 14);
			this->textBox7_max_S_x_n->TabIndex = 30;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label20->Location = System::Drawing::Point(490, 15);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(65, 16);
			this->label20->TabIndex = 29;
			this->label20->Text = L"при x_n = ";
			this->label20->Visible = false;
			// 
			// textBox6_min_S
			// 
			this->textBox6_min_S->BackColor = System::Drawing::SystemColors::Menu;
			this->textBox6_min_S->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox6_min_S->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox6_min_S->Location = System::Drawing::Point(356, 44);
			this->textBox6_min_S->Name = L"textBox6_min_S";
			this->textBox6_min_S->Size = System::Drawing::Size(128, 14);
			this->textBox6_min_S->TabIndex = 28;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label19->Location = System::Drawing::Point(295, 44);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(57, 16);
			this->label19->TabIndex = 27;
			this->label19->Text = L"min |S|=";
			this->label19->Visible = false;
			// 
			// textBox5_max_S
			// 
			this->textBox5_max_S->BackColor = System::Drawing::SystemColors::Menu;
			this->textBox5_max_S->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5_max_S->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox5_max_S->Location = System::Drawing::Point(356, 15);
			this->textBox5_max_S->Name = L"textBox5_max_S";
			this->textBox5_max_S->Size = System::Drawing::Size(128, 14);
			this->textBox5_max_S->TabIndex = 26;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label18->Location = System::Drawing::Point(290, 15);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(62, 16);
			this->label18->TabIndex = 25;
			this->label18->Text = L"max |S|=";
			this->label18->Visible = false;
			// 
			// label17_меньше
			// 
			this->label17_меньше->AutoSize = true;
			this->label17_меньше->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17_меньше->Location = System::Drawing::Point(215, 114);
			this->label17_меньше->Name = L"label17_меньше";
			this->label17_меньше->Size = System::Drawing::Size(54, 16);
			this->label17_меньше->TabIndex = 24;
			this->label17_меньше->Text = L"≤ eps_гр";
			this->label17_меньше->Visible = false;
			// 
			// textBox4_v_N_itog
			// 
			this->textBox4_v_N_itog->BackColor = System::Drawing::SystemColors::Menu;
			this->textBox4_v_N_itog->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4_v_N_itog->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4_v_N_itog->Location = System::Drawing::Point(81, 182);
			this->textBox4_v_N_itog->Name = L"textBox4_v_N_itog";
			this->textBox4_v_N_itog->Size = System::Drawing::Size(131, 14);
			this->textBox4_v_N_itog->TabIndex = 23;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->Location = System::Drawing::Point(10, 182);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(65, 16);
			this->label16->TabIndex = 22;
			this->label16->Text = L"v_N итог =";
			// 
			// textBox3_x_N
			// 
			this->textBox3_x_N->BackColor = System::Drawing::SystemColors::Menu;
			this->textBox3_x_N->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3_x_N->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3_x_N->Location = System::Drawing::Point(81, 155);
			this->textBox3_x_N->Name = L"textBox3_x_N";
			this->textBox3_x_N->Size = System::Drawing::Size(131, 14);
			this->textBox3_x_N->TabIndex = 21;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->Location = System::Drawing::Point(37, 155);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(38, 16);
			this->label15->TabIndex = 20;
			this->label15->Text = L"x_N =";
			// 
			// textBox2_x_fin_min_x_N
			// 
			this->textBox2_x_fin_min_x_N->BackColor = System::Drawing::SystemColors::Menu;
			this->textBox2_x_fin_min_x_N->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2_x_fin_min_x_N->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBox2_x_fin_min_x_N->Location = System::Drawing::Point(84, 114);
			this->textBox2_x_fin_min_x_N->Name = L"textBox2_x_fin_min_x_N";
			this->textBox2_x_fin_min_x_N->Size = System::Drawing::Size(128, 14);
			this->textBox2_x_fin_min_x_N->TabIndex = 19;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->Location = System::Drawing::Point(13, 114);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(65, 16);
			this->label14->TabIndex = 18;
			this->label14->Text = L"x_fin - x_N:";
			// 
			// textBox1_kol_iter
			// 
			this->textBox1_kol_iter->BackColor = System::Drawing::SystemColors::Menu;
			this->textBox1_kol_iter->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1_kol_iter->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1_kol_iter->Location = System::Drawing::Point(186, 95);
			this->textBox1_kol_iter->Name = L"textBox1_kol_iter";
			this->textBox1_kol_iter->Size = System::Drawing::Size(77, 14);
			this->textBox1_kol_iter->TabIndex = 17;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(10, 95);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(173, 16);
			this->label13->TabIndex = 16;
			this->label13->Text = L"Проделанное число шагов N:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(10, 39);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(247, 17);
			this->label12->TabIndex = 15;
			this->label12->Text = L"Исп. метод Рунге-Кутта порядка p=4";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(10, 18);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(150, 17);
			this->label11->TabIndex = 14;
			this->label11->Text = L"Тип задачи: основная";
			// 
			// groupBox4
			// 
			this->groupBox4->BackColor = System::Drawing::SystemColors::ControlLight;
			this->groupBox4->Controls->Add(this->label1);
			this->groupBox4->Controls->Add(this->textBox1_u0);
			this->groupBox4->Controls->Add(this->textBox2_x0);
			this->groupBox4->Controls->Add(this->label28);
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox4->Location = System::Drawing::Point(226, 33);
			this->groupBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox4->Size = System::Drawing::Size(191, 93);
			this->groupBox4->TabIndex = 14;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Начальные условия";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(6, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(79, 17);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Введите x0:";
			// 
			// textBox1_u0
			// 
			this->textBox1_u0->Location = System::Drawing::Point(86, 55);
			this->textBox1_u0->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1_u0->Name = L"textBox1_u0";
			this->textBox1_u0->Size = System::Drawing::Size(81, 23);
			this->textBox1_u0->TabIndex = 9;
			this->textBox1_u0->Text = L"1";
			// 
			// textBox2_x0
			// 
			this->textBox2_x0->Location = System::Drawing::Point(86, 28);
			this->textBox2_x0->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox2_x0->Name = L"textBox2_x0";
			this->textBox2_x0->Size = System::Drawing::Size(81, 23);
			this->textBox2_x0->TabIndex = 7;
			this->textBox2_x0->Text = L"0";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label28->Location = System::Drawing::Point(6, 58);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(81, 17);
			this->label28->TabIndex = 12;
			this->label28->Text = L"Введите u0:";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label29->Location = System::Drawing::Point(905, 630);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(290, 16);
			this->label29->TabIndex = 15;
			this->label29->Text = L"Зависимость высоты воды u от времени x";
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->ClientSize = System::Drawing::Size(1382, 649);
			this->Controls->Add(this->label29);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->chart2_graph);
			this->Controls->Add(this->dataGridView1_table);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->button4_clear);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button1_start);
			this->Controls->Add(this->menuStrip1);
			this->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Решение задачи №9, вариант 2, Цодииков";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4_max_iteration))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3_h_0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1_table))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2_graph))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button4_clear_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void условиеЗадачиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void используемыйМетодToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void checkBox1_KonLocPog_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
};
};
