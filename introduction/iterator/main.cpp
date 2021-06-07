int main() {

  std::vector<int> v = {1, 2, 3, 4, 5};
  auto i = std::begin(v);

  int x = *i;

  *i = 0;

  for (int i = 0; i < v.size(); ++i) {
    std::cout << v.at(i) << ","s;
  }

}
