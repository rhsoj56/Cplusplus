#include <iostream>

double earth_weight;
double mars_weight;
double gravity_earth = 3.73;
double gravity_mars = 9.81;

int main() {

  std::cout << "What is the weight? ";
  std::cin >> earth_weight;

  mars_weight = earth_weight * gravity_earth/gravity_mars;

  std::cout << "The weight on earth is " << earth_weight << "kg, the weight on mars is " << mars_weight << "kg\n";

}