#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	long double A, B, C;
	cin >> A >> B >> C;
	cout << "TRIANGULO: " << setprecision(3) << fixed << (C*A)/2 << endl;
	cout << "CIRCULO: " << setprecision(3) << fixed << C*C*3.14159 << endl;
	cout << "TRAPEZIO: " << setprecision(3) << fixed << ((A+B)*C)/2 << endl;
	cout << "QUADRADO: " << setprecision(3) << fixed << B*B << endl;
	cout << "RETANGULO: " << setprecision(3) << fixed << (B*A) << endl; 

}