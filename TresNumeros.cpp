#include <iostream>

using namespace std;

int main() {
    double num1, num2, num3;


    cout << "Digite o primeiro numero: ";
    cin >> num1;
    
    cout << "Digite o segundo numero: ";
    cin >> num2;
    
    cout << "Digite o terceiro numero: ";
    cin >> num3;

    cout << "\n--- RESULTADO ---" << endl;

   
    if (num1 > num2 && num1 > num3) {
        double soma = num1 + num2 + num3;
        cout << "O primeiro eh o maior. Soma dos tres: " << soma << endl;
    }
    
    else if (num2 > num1 && num2 < num3) {
        double produto = num2 * num3;
        cout << "O segundo eh maior que o 1o e menor que o 3o. Produto (2o x 3o): " << produto << endl;
    }
   
    else {
        double calculo = (num1 + num3) * num2;
        cout << "Caso contrario. (1o + 3o) x 2o: " << calculo << endl;
    }

    return 0;
}

