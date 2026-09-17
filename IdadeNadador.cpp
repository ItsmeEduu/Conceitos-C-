#include <iostream>
using namespace std;

int main () {
	int idade;
	
	cout << "Digite a idade do Nadador: ";
	cin >> idade;
	
	if (idade < 5) {
		cout << "Idade minima permitida e 5 anos." << endl;
	}
	else if (idade >= 5 && idade <= 7) {
		cout << "Categoria: Pre-mirim" << endl;
	}
	else if (idade >= 8 && idade <= 10) {
		cout << "Categoria: Mirim" << endl;
	}
	else if (idade >= 11 && idade <= 13) {
		cout << "Categoria: Infantil" << endl;
	}
	else if (idade >= 14 && idade <= 17) {
		cout << "Categoria: Infanto-juvenil" << endl;
	}
	else if (idade >= 18 && idade <= 17) {
		cout << "Categoria: Juvenil" << endl;	
	}
	else {//maiores de 21 anos (idade >= 21)
		cout << "Categoria: Adulto" << endl;
	}
	
	return 0;
}
