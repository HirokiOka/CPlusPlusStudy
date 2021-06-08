struct fractional {
  int num;
  int denom;

  double value() {
    return static_cast<double>(num) / static_cast<double>(denom);
  }
};

int main() {
  fractional x{1, 2};

  std::cout << x.value();
}
