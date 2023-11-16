#include <iostream>

long long power(long long base, long long exponent) {
  if (exponent < 0) {
    return 1 / power(base, -exponent);
  } else if (exponent == 0) {
    return 1;
  } else if (exponent % 2 == 0) {
    long long half_pow = power(base, exponent / 2);
    return half_pow * half_pow;
  } else {
    long long half_pow = power(base, (exponent - 1) / 2);
    return half_pow * half_pow * base;
  }
}

int main()
{
    long long base, exponent;
    std::cout << "Enter the base: ";
    std::cin >> base;
    std::cout << "Enter the exponent: ";
    std::cin >> exponent;

    long long result = power(base, exponent);
    std::cout << base << " raised to the power " << exponent << " is " << result << std::endl;

    return 0;
}