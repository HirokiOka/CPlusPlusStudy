
int main() {
  std::vector<int> v = {3, 1, 4, 1, 5, 1, 2, 6, 5};
  std::size_t size = v.size();

  for (std::size_t head = 0; head < size; ++head) {
    std::size_t min = head;

    for (std::size_t index = head+1; index < size; ++index) {
      if (v.at(index) < v.at(min)) min = index;
    }

    auto temp = v.at(head);
    v.at(head) = v.at(min);
    v.at(min) = temp;
  }
  for (std::size_t index = 0; index < size; ++index) {
    std::cout << v.at(index) << " "s;
  }
}
