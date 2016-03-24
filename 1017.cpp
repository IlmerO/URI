#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	double tempo, velMedia;
	cin >> tempo >> velMedia;
	cout << setprecision(3) << fixed << (tempo*velMedia)/12.00 << endl;

}