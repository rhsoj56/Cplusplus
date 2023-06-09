#include <iostream>
#include <cmath>

double a;
double b;
double c;
double root1;
double root2;

int main() {
  
  std::cout << "Enter a: ";
  std::cin >> a;

  std::cout << "Enter b: ";
  std::cin >> b;

  std::cout << "Enter c: ";
  std::cin >> c;

  root1 = (-b + std::sqrt(b*b - 4*a*c)) / (2*a);
  root2 = (-b - std::sqrt(b*b - 4*a*c)) / (2*a);

  std::cout << "Root 1 is " << root1 << "\n" << "Root 2 is " << root2 << "\n";
  
}