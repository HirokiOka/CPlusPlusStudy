struct Person {
  std::string name;
  int age;
};

int main() {
  Person tanaka;
  tanaka.name = "tanaka";
  tanaka.age = 32;

  std::cout << tanaka.name;
}
