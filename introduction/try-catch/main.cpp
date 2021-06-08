
int main() {
  try {
    //throw 123;
    throw 3.14;
  } catch (int e) {
    std::cout << e;
  }

  std::cout << "resumed.\n"s;
}
