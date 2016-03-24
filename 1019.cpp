#include <iostream>
using namespace std;

int main(){
	int tempo, hor, min, seg, t;
	cin >> tempo;
	hor = tempo/3600;
	t = tempo%3600;
	min = t/60;
	seg = t%60;
	cout << hor << ":" << min << ":" << seg << endl;
}