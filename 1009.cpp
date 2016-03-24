#include <iostream>
#include <iomanip>
using namespace std;
int main(){
char nome[100];
double salario, vendas;
cin >> nome;
cin >> salario >> vendas;
cout << "TOTAL = R$ " << setprecision(2) << fixed << salario+(vendas*0.15) << endl;
}