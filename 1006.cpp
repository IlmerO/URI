#include <iostream>
#include <iomanip>

using namespace std;
int main(){
double a, b, c;
cin >> a >> b >> c;
cout << "MEDIA = " << setprecision(1) << fixed << (a*2+b*3+c*5)/10 << endl;

}