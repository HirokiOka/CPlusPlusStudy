template <typename Engine>

void f(Engine &e) {
  auto a = e.min();
  auto b = e.max();
  auto r1 = e();
  auto r2 = e();
}

int main() {
  std::default_random_engine e;
  for (int i = 0; i != 10; ++i) {
    std::cout << e() << "\n"sv;
  }

}
