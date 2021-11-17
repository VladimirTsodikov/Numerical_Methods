#pragma once

#include <iostream>
#include <cmath>
#include <vector>
#include <string>

#define ts std::to_string  
#define pb push_back

#define PI 3.1415926535
#define g 9.80665
//#define epsilon 0.000001
//#define exit_control 0.001
//#define max_iteration 100

class Diff_Equ
{
private:
	double Sigma;
	double Radius;
public:
	Diff_Equ(double _s = 0, double _r = 0) { Sigma = _s; Radius = _r; }
	//void Enter_Sigma(double _s) { Sigma = _s; }
	//void Enter_Radius(double _r) { Radius = _r; }
	double Return_Function_Value(double u_value) { return -0.6 * Sigma * pow(2 * g, 0.5) * pow(PI, -1) * pow(u_value, -0.5) * pow(2 * Radius - u_value, -1); }
	std::vector<std::vector<double>> num_method(double x_0, double u_0, double h_0, double x_fin, double epsilon, double exit_control, int max_iteration, bool klp) {
		double x = x_0, v = u_0, h=h_0;
		int iter = 1;
		bool flg = true;		//будет отвечать за уменьшение шага
		bool final = false;
		int h1_more_h = 0;
		std::vector<std::vector<double>> itog;
		std::vector<double> cur;
		if (klp == true) {
			//cur = { "n", "h", "x_n", "v_n", "v_n удв", "S*", "v_n итог", "Умен. шага", "Увел. шага" }; 	itog.push_back(cur);
			//cur = { "1", "2", "3", "4", "5", "6", "7", "8", "9" }; itog.push_back(cur);
			//cur = { 1,2,3,4,5,6,7,8,9 }; itog.push_back(cur);
			//cur = { std::to_string(iter++), "---", std::to_string(x_0), std::to_string(u_0), "---", "---", std::to_string(u_0), "---", "---" }; itog.push_back(cur);
			//cur = { initer++, }
		
			x += h;
			while (v>0 && (x_fin - x > exit_control && iter < max_iteration || final == false)) {
				if (x_fin - x < 0 || iter >= max_iteration) {
					final = true;
					int h1 = ((x_fin - exit_control) - (x - h));	//из желаемой правой границы вычитаем то значение, которое было на предыдущем шаге. Это и будет шаг. Затем можем изменить x
					h1 > h ? h1_more_h = 1 : h1_more_h = 2;
					h = h1;
					x = (x_fin - exit_control);	//значение, которое подходит для завершения цикла
					//v сохранится от последней точки, пересчитывать не нужно
				}
				cur.clear();
				double k1 = Return_Function_Value(v);
				double k2 = Return_Function_Value(v + h / 2 * k1);
				double k3 = Return_Function_Value(v + h / 2 * k2);
				double k4 = Return_Function_Value(v + h * k3);
				double v_var1 = v + h / 6 * (k1 + 2 * k2 + 2 * k3 + k4);

				double k1_pol_1 = Return_Function_Value(v);	//=k1;
				double k2_pol_1 = Return_Function_Value(v + h / 4 * k1_pol_1);
				double k3_pol_1 = Return_Function_Value(v + h / 4 * k2_pol_1);
				double k4_pol_1 = Return_Function_Value(v + h / 2 * k3_pol_1);
				double v_pol_1 = v + h / 12 * (k1_pol_1 + 2 * k2_pol_1 + 2 * k3_pol_1 + k4_pol_1);

				double k1_pol_2 = Return_Function_Value(v_pol_1);
				double k2_pol_2 = Return_Function_Value(v_pol_1 + h / 4 * k1_pol_2);
				double k3_pol_2 = Return_Function_Value(v_pol_1 + h / 4 * k2_pol_2);
				double k4_pol_2 = Return_Function_Value(v_pol_1 + h / 2 * k3_pol_2);
				double v_var2 = v_pol_1 + h / 12 * (k1_pol_2 + 2 * k2_pol_2 + 2 * k3_pol_2 + k4_pol_2);

				double S = (v_var2 - v_var1) / 15;	// делим на 2^p - 1, где p=4 - порялок метода РК
				double S_with_star = 16 * S;	//2^p * S

				if (std::abs(S) > epsilon && final == false) {		//последнее условие - чтобы от последней точки (когда final = true) не начался цикл снова от деления шага и тд
					x -= h;	//возращаемся в исходную точку, будем брать с меньшим шагом!
					h /= 2;
					flg = false;	//уменьшили шаг, учтём позже
				}
				
				else {	//оставшиеся два случая
					v = v_var1;	//можно и v_var2, неважно
					//cur = { ts(iter++), ts(h), ts(x), ts(v_var1), ts(v_var2), ts(S_with_star), ts(v) };
					
					if (v < 0) break;
					
					cur.pb(double(iter++)); cur.pb(h); cur.pb(x); cur.pb(v_var1); cur.pb(v_var2); cur.pb(S_with_star); cur.pb(v);
					//std::cout << iter++ << '\t';
					//printf(" % g\t %g\t %g\t %g\t %g\t %g", h, x, v_var1, v_var2, S_with_star, v);
					if (flg == false || h1_more_h == 2) {
						//std::cout << '\t' << "Да";	//то есть уменьшали шаг, до этого разница не подходила по точности
						cur.push_back(1);
						flg = true;
					}
					else cur.push_back(0); // else std::cout << '\t' << "Нет";	//то есть шаг не уменьшали

					if (std::abs(S) >= epsilon / 32 && std::abs(S) <= epsilon/* && final == false*/)
						cur.push_back(0); //std::cout << '\t' << "Нет" << '\n';	//то есть шаг не увеличивали
					else {	//или if (std::abs(S) < epsilon / 32)
						cur.push_back(1); //std::cout << '\t' << "Да" << '\n';	//то есть шаг увеличили, слишком малая разница значений
						h *= 2;
					}
					itog.push_back(cur);
				}
				x += h;
			}
		}
		else {
			//cur = { "n", "h", "x_n", "v_n" }; 	itog.push_back(cur);
			//cur = { "1", "2", "3", "4" }; itog.push_back(cur);
			//cur = { std::to_string(iter++), "---", std::to_string(x_0), std::to_string(u_0) }; itog.push_back(cur);

			x += h;
			while (v>0 && (x_fin - x > exit_control && iter < max_iteration || final == false)) {
				if (x_fin - x < 0 || iter >= max_iteration) {
					final = true;
					h = ((x_fin - exit_control) - (x - h));	//из желаемой правой границы вычитаем то значение, которое было на предыдущем шаге. Это и будет шаг. Затем можем изменить x
					x = (x_fin - exit_control);	//значение, которое подходит для завершения цикла
					//v сохранится от последней точки, пересчитывать не нужно
				}
				cur.clear();
				double k1 = Return_Function_Value(v);
				double k2 = Return_Function_Value(v + h / 2 * k1);
				double k3 = Return_Function_Value(v + h / 2 * k2);
				double k4 = Return_Function_Value(v + h * k3);
				v += h / 6 * (k1 + 2 * k2 + 2 * k3 + k4);

				//cur = { ts(iter++), ts(h), ts(x), ts(v) };
				cur.pb((double)iter++); cur.pb(h); cur.pb(x); cur.pb(v);
				itog.push_back(cur);
				x += h;
			}
		}
		return itog;
	}
};

