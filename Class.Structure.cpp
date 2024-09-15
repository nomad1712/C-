// To run C++ must be done from the command line or from ide executing commands are (g++ filename.cpp) = compiling
// the base library to include is listed below 
#include <iostream>
//library to import for the random number generator 
#include <random> 
// for string fucntionality 
#include <string>
int main()
{
// basic variable types
boolean login = true;
  char ex2= 'c';
  int attempts = 6;
  float= 6.778;
  double =7.66;
  string ans;
  string go= :"yes";

  //print statement line 
std::cout << "Hello world! ; 
  // to execute this code 
std::cout << "(g++ filename.cpp -o fileoutput name) to compile the file in and to execute the file locate the output name and type (./filename)";
  std::cout << Do you want to see a random variable generated? (Type 'yes' to proceed):;
  std::cin >> ans;
  if( ans==go)
  {
// Create a random device to seed the generator
    std::random_device rd;
    
    // Create a generator seeded with the random device
    std::mt19937 gen(rd());

    // Define the range for the random floating-point number
    std::uniform_real_distribution<> distr(0.0, 1.0);  // Generates numbers between 0.0 and 1.0

    // Generate and print the random floating-point number
    double random_float = distr(gen);
    std::cout << "Random Float: " << random_float << std::endl;
  }
  else {
        std::cout << "Input not recognized. Exiting..." << std::endl;
    }
  
std::cout << "thank you ";
//optional statement to confirm the code has executed successsfuly
return 0; 

}
