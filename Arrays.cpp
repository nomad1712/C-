// This goes over array the difference between arrrays and vectors are modifiable for size 
#include <iostream>

// Define name_x_times() below:
void name_x_times(std::string name, int x) {
  
  while (x > 0) {
    
    std::cout << name;
    x--;
    
  }
  
}

int main() {
  int myNumbers[5] = {10, 20, 30, 40, 50};
  std::string my_name = "Add your name here!";
  int some_number = 5; // Change this if you like!
  // Call name_x_times() below with my_name and some_number
  name_x_times(my_name, some_number);
  
}
