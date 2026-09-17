#include <iostream>
#include <math.h>
#include <clocale>


void calcularSalarioComBonus(double salarioBase) {
	
	double 	valorBonus = salarioBase * 0.35;
	double	salarioTotal = salarioBase + valorBonus;
	
	std::cout << "\n--- Resultado do Calculo ---" << std::endl;
	std::cout << "Salário Base: R$ " << salarioBase << std::endl;
	std::cout << "Valor do Bonus (35%): R$" << valorBonus << std::endl;
	std::cout << "Salário Total: R$ " << salarioTotal << std::endl;
 }
 
 int main () {
 		setlocale(LC_ALL, "Portuguese");
 		
 		double salario;
 		char opcao;
 		
 	do {
	 
 		std::cout << "digite o salario base do funcionário: R$ ";
 		std::cin >> salario;
 		
 	calcularSalarioComBonus(salario);
 		
	 	std::cout << "Deseja calcular outro funcionário? (SIM/NÃO): ";
	 	std::cin >> opcao;
	 	std::cout << std::endl;
	 	
	 } while (opcao == 'S' || opcao == 's');
	 
	 	std::cout << "Programa encerrado. Até Logo!" << std::endl;
	
	 	
 		return 0;
 }
