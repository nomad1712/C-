#include <iostream> 
#include <vector>
int main() {
for (int i =0 ; i <5 ; i++)
  {
    std::cout << i;
}
// while(){}
  // to create a vector 
   
  std::vector<double> subway_adult = {800, 1200, 1500};
  
  std::vector<double> subway_child = {400, 600, 750};
  
  // What number at index 2 of subway_child?
  std:: cout << subway_child[2]<<"\n";
  // to add an element 
  subway_child.push_back(233);
  // to remove from the  back .pop_back()
std::cout << subway_child.size() << "\n";
  
  std::vector<double> delivery_order;
  
  delivery_order.push_back(8.99);
  delivery_order.push_back(3.75);
  delivery_order.push_back(0.99);
  delivery_order.push_back(5.99);
  
  // Calculate the total using a for loop:
  
  double total = 0.0;
  
  for (int i = 0; i < delivery_order.size(); i++) {

    total = total + delivery_order[i];
  
  }
  
  std::cout << "Total: $" << total << "\n";
  
}
