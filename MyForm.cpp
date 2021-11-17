#include "MyForm.h"
#include "Diff_Equ.h"
#include "Method.h"
#include "Problem.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	NumericalMethods::MyForm form;
	Application::Run(% form);
}

std::vector<std::vector<double>> res;

//double u_0 = 1.0;

System::Void NumericalMethods::MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	res.clear();
	double x_0 = Convert::ToDouble(textBox2_x0->Text);
	double u_0 = Convert::ToDouble(textBox1_u0->Text);
	double x_fin = Convert::ToDouble(textBox1_x_fin->Text);
	double h_0 = Convert::ToDouble(numericUpDown3_h_0->Value);
	int max_iter = Convert::ToInt32(numericUpDown4_max_iteration->Value);
	double epsilon = Convert::ToDouble(textBox1_epsilon->Text);
	double exit_contr = Convert::ToDouble(textBox2_eps_gr->Text);
	bool klp = Convert::ToBoolean(checkBox1_KonLocPog->Checked);
	double R = Convert::ToDouble(textBox1_R->Text);
	double sigma = Convert::ToDouble(textBox2_sigma->Text);
	//std::vector<std::vector<double>> res;

	Diff_Equ du(sigma, R);
	res = du.num_method(x_0, u_0, h_0, x_fin, epsilon, exit_contr, max_iter, klp);

	//this->chart1->Series[0]->Points->AddXY(x[i], v1[i]);
	this->dataGridView1_table->Rows->Add();
	if (klp == true) {
		for (int j = 0; j < 9; j++)
			this->dataGridView1_table->Rows[0]->Cells[j]->Value = (j + 1);

		this->dataGridView1_table->Rows->Add("0", "---", Convert::ToString(x_0), Convert::ToString(u_0), "---", "---", Convert::ToString(u_0), "---", "---");
		this->chart2_graph->Series[0]->Points->AddXY(x_0, u_0);

		for (int i = 0; i < res.size(); i++) {
			this->dataGridView1_table->Rows->Add();
			for (int j = 0; j < 9; j++)
				this->dataGridView1_table->Rows[i + 2]->Cells[j]->Value = Convert::ToDouble(res[i][j]); // ], res[i][1], res[i][2], res[i][3], res[i][4], res[i][5], res[i][6], res[i][7], res[i][8]);
								  //->Rows->Add(i, h, x[i], v1[i], v2[i], "-", "-", "-", u1[i], u2[i], abs(u1[i] - v1[i]), abs(u2[i] - v2[i]), "-", "-"); - без контроля локальной погр
			this->chart2_graph->Series[0]->Points->AddXY(res[i][2], res[i][6]);
		}
	}
	else {
		for (int j=0; j<4; j++)
			this->dataGridView1_table->Rows[0]->Cells[j]->Value = (j + 1);
		this->dataGridView1_table->Rows->Add("0", "---", Convert::ToString(x_0), Convert::ToString(u_0));
		this->chart2_graph->Series[0]->Points->AddXY(x_0, u_0);
		for (int i = 0; i < res.size(); i++) {
			this->dataGridView1_table->Rows->Add();
			for (int j = 0; j < 4; j++)
				this->dataGridView1_table->Rows[i + 2]->Cells[j]->Value = Convert::ToDouble(res[i][j]); // ], res[i][1], res[i][2], res[i][3], res[i][4], res[i][5], res[i][6], res[i][7], res[i][8]);
								  //->Rows->Add(i, h, x[i], v1[i], v2[i], "-", "-", "-", u1[i], u2[i], abs(u1[i] - v1[i]), abs(u2[i] - v2[i]), "-", "-"); - без контроля локальной погр
			this->chart2_graph->Series[0]->Points->AddXY(res[i][2], res[i][3]);
		}
	}

	// Добавлем фиктивную точку
	this->chart2_graph->Series[0]->Points->AddXY(res[res.size()-1][2], res[res.size()-1][6]);// (x[x.size() - 1], v[v.size() - 1]);
	// Делаем ее невидимой
	int count = this->chart2_graph->Series[0]->Points->Count;
	this->chart2_graph->Series[0]->Points[count - 1]->IsEmpty = true;

	this->textBox1_kol_iter->Text = Convert::ToString(res.size());
	this->textBox2_x_fin_min_x_N->Text = Convert::ToString(x_fin - res[res.size()-1][2]);
	this->textBox3_x_N->Text = Convert::ToString(res[res.size() - 1][2]);
	(klp == true) ? this->textBox4_v_N_itog->Text = Convert::ToString(res[res.size() - 1][6]) : this->textBox4_v_N_itog->Text = Convert::ToString(res[res.size() - 1][3]);


	if (klp == false) {
		this->label5_klp_no->Visible = true;
	}
	else {
		this->label18->Visible = true;
		this->label19->Visible = true;
		this->label20->Visible = true;
		this->label21->Visible = true;
		this->label22->Visible = true;
		this->label23->Visible = true;
		this->label24->Visible = true;
		this->label25->Visible = true;
		this->label26->Visible = true;
		this->label27->Visible = true;
		this->label5_klp_yes->Visible = true;
		std::pair<double, double> S_min = std::make_pair(res[0][5], res[0][2]), S_max = std::make_pair(res[0][5], res[0][2]), h_min=std::make_pair(1000,0),h_max=std::make_pair(0,0);
		int h_minus = 0, h_plus = 0;
		for (int i = 1; i < res.size(); i++)
		{
			if (std::abs(res[i][5]) && std::abs(res[i][5] < S_min.first)) S_min = std::make_pair(std::abs(res[i][5]), res[i][2]);
			if (std::abs(res[i][5]) > S_max.first) S_max = std::make_pair(std::abs(res[i][5]), res[i][2]);
			if (res[i][7]) h_minus++;
			if (res[i][8]) h_plus++;
			if (res[i][1] < h_min.first) h_min = std::make_pair(res[i][1], res[i][2]);
			if (res[i][1] > h_max.first) h_max = std::make_pair(res[i][1], res[i][2]);
		}
		S_min.first /= 16;
		S_max.first /= 16;

		this->textBox6_min_S->Text = Convert::ToString(S_min.first); this->textBox1_min_S_x_n->Text = Convert::ToString(S_min.second);
		this->textBox5_max_S->Text = Convert::ToString(S_max.first); this->textBox7_max_S_x_n->Text = Convert::ToString(S_max.second);
		this->textBox1_umen_vsego->Text = Convert::ToString(h_minus);
		this->textBox2_uvel_vsego->Text = Convert::ToString(h_plus);
		this->textBox5_min_h->Text = Convert::ToString(h_min.first); this->textBox3_min_h_x->Text = Convert::ToString(h_min.second);
		this->textBox6_max_h->Text = Convert::ToString(h_max.first); this->textBox4_max_h_x->Text = Convert::ToString(h_max.second);

		if (res[res.size() - 1][6] < 1E-5) {
			this->label5_вода_вытекла->Visible = true;
			this->textBox1_время_вытекания->Text = Convert::ToString(res[res.size() - 1][2]);
		}
		else this->label5_вода_не_вытечет->Visible = true;
	}
	if (((x_fin - res[res.size()-1][2] < 1.01 * exit_contr)) && ((x_fin - res[res.size() - 1][2])>0))
		this->label17_меньше->Visible = true;
	return System::Void();
}

System::Void NumericalMethods::MyForm::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void NumericalMethods::MyForm::выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
}

System::Void NumericalMethods::MyForm::button4_clear_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->dataGridView1_table->Rows->Clear();
	this->chart2_graph->Series[0]->Points->Clear();

	this->label18->Visible = false;
	this->label19->Visible = false;
	this->label20->Visible = false;
	this->label21->Visible = false;
	this->label22->Visible = false;
	this->label23->Visible = false;
	this->label24->Visible = false;
	this->label25->Visible = false;
	this->label26->Visible = false;
	this->label27->Visible = false;

	this->textBox1_min_S_x_n->Text = "";
	this->textBox7_max_S_x_n->Text = "";
	this->textBox6_min_S->Text = "";
	this->textBox5_max_S->Text = "";
	this->textBox1_umen_vsego->Text = "";
	this->textBox2_uvel_vsego->Text = "";
	this->textBox3_min_h_x->Text = "";
	this->textBox4_max_h_x->Text = "";
	this->textBox5_min_h->Text = "";
	this->textBox6_max_h->Text = "";

	this->label5_klp_no->Visible = false;
	this->label5_klp_yes->Visible = false;
	
	this->label5_вода_вытекла->Visible = false;
	this->label5_вода_не_вытечет->Visible = false;
	this->textBox1_время_вытекания->Text = "";

	this->label17_меньше->Visible = false;
}

System::Void NumericalMethods::MyForm::условиеЗадачиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Problem^ form = gcnew Problem();
	form->Show();
}

System::Void NumericalMethods::MyForm::используемыйМетодToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Method^ form = gcnew Method();
	form->Show();
}

System::Void NumericalMethods::MyForm::checkBox1_KonLocPog_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	bool k = Convert::ToBoolean(checkBox1_KonLocPog->Checked);
	this->textBox1_epsilon->Visible = k;
	this->label8_контроль->Visible = k;
}
 