#include<iostream>

int factorial(int x, int n) {
  if (n > 0)
    return x * factorial(x, n - 1);
  else
    return 1;
}

int main(){
  std::cout << factorial(2, 4) << std::endl;
}
