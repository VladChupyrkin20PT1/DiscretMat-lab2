#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
using namespace std;
int main()
{
	int x, y, z, f1, f2, i, k, l, P, P1;
	int a[4], a1[4], c[4], d[3], e[2], f[4], g[3], h[2];
	i = 0;
	setlocale(LC_ALL, "Russian");
	for (x = 0; x <= 1; x++) { //Значения функции 
		for (y = 0; y <= 1; y++) {
				f1 = (x || y);
				f2 = (x && !y);
				a[i] = f1;
				a1[i] = f2;
				i++;
		}
	}
	for (i = 0; i < 3; i++) {  //Треугольник Паскаля 1 функции
		c[i] = a[i] ^ a[i + 1];
	}
	for (i = 0; i < 2; i++) {
		d[i] = c[i] ^ c[i + 1];
	}
	for (i = 0; i < 1; i++) {
		e[i] = d[i] ^ d[i + 1];
	}
	for (i = 0; i < 3; i++) {  //Треугольник Паскаля 2 функции
		f[i] = a1[i] ^ a1[i + 1];
	}
	for (i = 0; i < 2; i++) {
		g[i] = f[i] ^ f[i + 1];
	}
	for (i = 0; i < 1; i++) {
		h[i] = g[i] ^ g[i + 1];
	}
	cout << "Полином Жегалкина 1 функции:" << " ";
	if (a[0] == 1) {	//Полином Жегалкина 1 функции
		P = 1;
		cout << P << " " << "XOR" << " ";
	}
	if (c[0] == 1) {
		cout << "y" << " " << "XOR" << " ";
	}
	if (d[0] == 1) {
		cout << "x" << " " << "XOR" << " ";
	}
	if (e[0] == 1) {
	cout << "xy" <<endl;
	}
	cout << "Полином Жегалкина 2 функции:" << " ";
	if (a1[0] == 1) {	//Полином Жегалкина 2 функции
		P1 = 1;
		cout << P1 << " " << "XOR" << " ";
	}
	if (f[0] == 1) {
		cout << "y" << " " << "XOR" << " ";
	}
	if (g[0] == 1) {
		cout << "x" << " " << "XOR" << " ";
	}
	if (h[0] == 1) {
		cout << "xy" << endl;
	}
	if ((a[0] == 0) && (a1[0] == 0)) {
		cout << "Функция неполная по T0" << endl;
	} else{
		if ((a[4] = 1) && (a1[4] == 1)) {
			cout << "Функция неполная по T1" << endl;
		} else {
			if (((a[0] == !a[3]) || (a[1] == !a[2])) && (((a1[0] == !a1[3]) || (a1[1] == !a1[2])))) {
				cout<<"Функция неполная по S"<<endl;
			} else {
				if ((e[0] == 1) && (h[0] == 1)) {
					cout << "Функция неполная по L" << endl;
				}
				else {
					for (z = 0; z < 4; z++) {
						if ((a[z] <= a[z + 1]) && (a1[z] <= a1[z + 1])) {
							break;
							cout << "Функция неполная по M" << endl;
						}
						else {
							cout << "Функция полная" << endl;
						}
					}
				}
				
			}
			
		}
	}
}
