#include <iostream>

double pesos;
double reais;
double soles;
double usd;

int main() {
  
  std::cout << "Enter number of Colombian Pesos: ";
  std::cin >> pesos;

  std::cout << "Enter number of Brazilian Reais: ";
  std::cin >> reais;

  std::cout << "Enter number of Peruvian Soles: ";
  std::cin >> soles;

// pesos to usd = 1usd is 0.058
// reais to usd = 1usd is 0.21
// soles to usd = 1usd is 0.27

  usd = (0.058 * pesos) + (0.21 * reais) + (0.27 * soles);

  std::cout << "US Dollars = $" << usd << "\n";
  
  
}