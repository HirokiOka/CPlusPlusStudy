
int main() {
  std::vector<int> v = {1, 2, 3, 4, 5};
  std::vector<int> ov = {2, 4, 6, 8};

  auto is_all_of_odd = [](auto first, auto last) {
    return std::all_of(first, last, [](auto value){ return value % 2 == 0; });
  };

  for (auto i = std::begin(v), j = std::end(v); i < j; ++i) {
    std::cout << *i;
  }
  std::cout << "\n"s;

  std::for_each(std::begin(v), std::end(v), [](auto value) { std::cout << value; });
  std::cout << "\n"s;

  cout << is_all_of_odd(std::begin(ov), std::end(ov));
}
