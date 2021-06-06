int input() {
  std::cout << ">"s;
  int x;
  std::cin >> x;
  return x;
}

void hello_n(int n) {
  if (n < 0) return;
  int i = 0;
  while (i != n) {
    std::cout << "hello\n"s;
    ++i;
  }
}

int main() {
  int x = input();
  hello_n(x);
}
