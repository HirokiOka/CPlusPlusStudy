
int main() {

  auto status = [](auto bmi) {
    if (bmi < 18.5)
      return "Underweight\n"s; 
    else if (bmi < 25.0)
      return "Normal\n"s;
    else if (bmi < 30.0)
      return "Overweight\n"s;
    else
      return "Obese\n"s;
  };

  double height;
  std::cout << "height(m)>";
  std::cin >> height;

  double mass;
  std::cout << "mass(kg)>";
  std::cin >> mass;

  double bmi = mass / (height * height);
  std::cout << "BMI: "s << bmi << "\n"s;

  std::cout << status(bmi);
}
