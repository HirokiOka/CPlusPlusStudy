#include <iostream>

void print() {
  int v[] = {0, 1, 2, 3, 4};
  
  for (auto x : v)
    std::cout << x << "\n";
}

int main() {
  print();
}
