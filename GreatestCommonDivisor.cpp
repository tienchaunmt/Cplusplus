#include <iostream>

using namespace std;

int greatestCommonDivisor(int a, int b) {
  a = abs(a); b = abs(b);
  if (b == 0) return a;
  return greatestCommonDivisor(b, a % b);
}

int main() {
  int a, b;
  cin >> a >> b;
  cout << greatestCommonDivisor(a, b);
  return 0;
}