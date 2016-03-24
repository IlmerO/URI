#include <iostream>
#include <iomanip>

using namespace std;
int main(){
	long double X, Y;
	cin >> X >> Y;
	cout << setprecision(3) << fixed << X/Y << " km/l" << endl;

}