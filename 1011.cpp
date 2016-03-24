#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	long double volume, raio;
	cin >> raio;
	volume = raio*raio*raio*3.14159*(4.0/3);
	cout << "VOLUME = " << setprecision(3) << fixed << volume << endl;
}