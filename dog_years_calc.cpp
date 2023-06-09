#include <iostream>

int dog_age = 5;
int human_age;
int early_years = 21;
int later_years = (dog_age - 2) * 4;
int human_years = early_years + later_years;


int main() {
  
  std::cout << "My name is Jocko, I am " << human_years << " years old in human years.\n";

  
}