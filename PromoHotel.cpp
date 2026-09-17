#include <iostream>
#include <iomanip>

using namespace std;

int main () {
	double diaria_normal;
	
	cout << "Digite o Valor normal da diaria: R$ ";
	cin >> diaria_normal;
	
	double diaria_promocional = diaria_normal * 0.75;
	
	double arrecadacao_promo = 60 * diaria_promocional;
	
	double arrecadacao_normal = 37.5 * diaria_normal;
	
	double diferenca = arrecadacao_promo - arrecadacao_normal;
	
	cout << fixed << setprecision(2);
	
	cout << "\n--- RESULTADOS ---" << endl;
	cout << "A) Valor da Diaria Promocional!!: R$ " << diaria_promocional << endl;
	cout << "B) Arrecadacao com 80% de Ocupacao (PROMOCIONAL): R$ " << arrecadacao_promo << endl;
	cout << "C) Arrecadacao com 50% de ocupacao (Normal): R$ " << arrecadacao_normal << endl;
	cout << "D) Diferenca entre os valores: R$ " << diferenca << endl;
	
	return 0;
}
