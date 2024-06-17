
#include <iostream>
using namespace std;

int fibonacci(int n) {
  if (n <= 0) {
    return 0;
  }
  else if (n == 1) {
    return 1;
  }
  else {
    return fibonacci(n - 1) + fibonacci(n - 2);
  }
}

void printFibonacciSequence(int n) {
  for (int i = 0; i < n; i++) {
    cout << fibonacci(i) << " ";
  }
  cout << endl;
}

int main() {
  int num;
  cout << "Enter a number: ";
  cin >> num;

  cout << "Fibonacci sequence: ";
  printFibonacciSequence(num);

  return 0;
}