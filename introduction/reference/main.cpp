int main() {
  auto swap = [](auto &a, auto &b) {
    auto temp = a;
    a = b;
    b = temp;
  };

  int a = 1;
  int b = 2;

  swap(a, b);

  cout << a << "," << b;
}
