
#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0)
            return false
    }
    return true;
}

void getTwoValues(int& begin, int& end) {
    do {
        cout << "Enter two integer values (begin and end): ";
        cin >> begin >> end;
    } while (begin >= end);
}

int getNextPrime(int begin) {
    int nextPime = begin + 1;
    while (!isPrime(nextPrime)) {
        nextPrime++;
    }
    return nextPrime;
}

int getPrevPrime(int end) {
    int prevPrime = end - 1;
    while (!isPrime(prevPrime)) {
        prevPrime--;
    
    return prevPrime
}