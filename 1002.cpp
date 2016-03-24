#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	double r, a;
	cin >> r;
	a = 3.14159*r*r;
	cout <<"A=" << setprecision(4) << fixed << a << endl;/*setpreciion que controla 
	a quantidade de casas decimais a seremexibidas*/
}