/* ONLY WRITE THE ANSWER TO THE QUESTIONS IN THE CORRESPONDING METHODS */

#ifndef LABFILE_HPP
#define LABFILE_HPP

#include <iostream>

using namespace std;

double fahrenheitToKelvin(double fahrenheit) {
    double kelvin = ((fahrenheit - 32) * 5 / 9) + 273.15;
    return kelvin;
}

bool isPrime(int n) {
    bool primeNumber = true;
    if (n == 1 or n == 0) {
        primeNumber = false;
    }
    else {
        for (int i = 1; i <= n; i++) {
            if (n % i == 0 && (i != n or i != 1)){
                primeNumber = false;
            }
            else {
                primeNumber = true;
                i = n + 1;
            }
        }
    }
    return primeNumber;
}

int sumOfPrimes(int limit) {
    return 0;
}

int reverseInteger(int num) {
    return 0;
}

void printInvertedHalfStarPyramid(int rows) {

}


#endif
