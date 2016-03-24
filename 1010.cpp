#include <iostream>
#include <iomanip>
using namespace std;

struct peca{
	int codigo;
	int numero;
	double valorUnitario;
};

int main(){
peca pecas[2];
double totalPagar;
cin >> pecas[0].codigo >> pecas[0].numero >> pecas[0].valorUnitario;
cin >> pecas[1].codigo >> pecas[1].numero >> pecas[1].valorUnitario;
totalPagar = (pecas[0].numero*pecas[0].valorUnitario)+(pecas[1].numero*pecas[1].valorUnitario);
cout << "VALOR A PAGAR: R$ " << setprecision(2) << fixed << totalPagar << endl;
}