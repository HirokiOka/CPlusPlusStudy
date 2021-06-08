int main() {
  int object = 0;
  object = 123;
  std::cout << object << "\n"s;

  int &reference = object;
  reference = 456;
  std::cout << object << "\n"s;

  object = 789;
  std::cout << reference;
}
