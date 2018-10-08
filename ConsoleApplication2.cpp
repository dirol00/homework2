#include "stdafx.h"
#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;



int main(){
	float a, z1, z2;
	setlocale(LC_ALL, "RUS");
	cout << "ÂÂÅÄÈÒÅ A,â ãëàäóñàõ" << endl;
	float M_PI = 3.14;
	cin >> a;
	a = 180 / a;
	cout << "×ÈÑËÀ ÄÎ ÎÊÐÓÃËÅÍÈß" << endl;
	z1= 2*pow(sin(3*M_PI-2*a),2)*pow(cos(5*M_PI+2*a),2);
	cout << z1 << endl;
	z2 = 0.25 - 0.25* sin(2.5 * M_PI - 8 * a);
	cout << z2 << endl;
	cout << "×ÈÑËÀ ÏÎÑËÅ ÎÊÐÓÃËÅÍÈß" << endl;

	z1 = int(z1 * 100 + 0.5) / 100.0;
	z2 = int(z2 * 100 + 0.5) / 100.0;
	cout << z1 << endl;
	cout << z2 << endl;
	if (z1 == z2)
	{
		cout << "×èñëà ðàâíû" << endl;
	}
	else
	{
		cout << "×èñëà íå ðàâíû" << endl;
	}
	cin.get();
	cin.get();
	return 0;

}