void hello_n( int n ) {
  if (n < 0) return;
  int i = 0;
loop:
  if ( i != n ) {
    std::cout << "hello\n"s;
    ++i;
    goto loop;
  }
}

int main() {
  int n;
  std::cin >> n;
  hello_n(n);
}
