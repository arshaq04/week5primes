#include <iostream>
#include <vector>

using namespace std;

int main() {
    int x;
    cout << "Enter an integer: ";
    cin >> x;

    bool isPrime = true;
  for (int i = 2; i*i <=number; i++) 
    if (number % i == 0) {
      isPrime = false;
      break;
    }
     if (number <= 1) {
        isPrime = false; 
  }
  if (isPrime)
    cout << "Prime" << endl;
  else
    cout << "Not prime" << endl;
return 0;
}
