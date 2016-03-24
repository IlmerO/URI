#include <iostream>
#include <iomanip>
using namespace std;
int main(){
double valorHora;
int num, horasTrabalhadas;
cin >> num >> horasTrabalhadas >> valorHora;
cout << "NUMBER = " << num << endl;
cout << "SALARY = U$ " << setprecision(2) << fixed << valorHora*horasTrabalhadas << endl;
}