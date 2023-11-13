#include <iostream>
#include <vector>
using namespace std;

int main() {
    int x;
    cout << "Enter an integer: ";
    cin >> x;
    
    cout << "Primes to " << x << " are: ";
    for (int num = 2; num <= x; num++) {
        bool isPrime = true;

  for (int i = 2; i*i <= num; i++) {
    if (num % i == 0) {
      isPrime = false;
      break;
    }
}
     if (isPrime) {
         cout << num << " ";
     }
    }
 
return 0;
}
