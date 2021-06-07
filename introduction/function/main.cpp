
std::string comp(std::string foo, std::string bar) {
  return foo + bar;
}

int main() {

  auto print = [](auto x) {
    std::cout << x << "\n"s;
  };

  auto doNothing = [](){};

  auto plus = [](auto x, auto y) {
    return x + y;
  };

  print("Hello");
  print(24);
  print(3.14);
  doNothing();
  std::cout << plus(2, 2) << "\n"s << comp("吾輩は", "猫である") << "\n"s;
}
