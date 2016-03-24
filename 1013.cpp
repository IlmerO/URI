#include <iostream>
#include <cmath>

using namespace std;
int main(){
	int a, b, c, maior, maiorP;
	cin >> a >> b >> c;
	maiorP = (a+b + abs(a-b))/2;
	maior = (maiorP+c + abs(maiorP-c))/2;
	cout << maior << " eh o maior" << endl;
}