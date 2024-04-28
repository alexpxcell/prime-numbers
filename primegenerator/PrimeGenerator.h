#ifndef PRIME_GENERATOR_H
#define PRIME_GENERATOR_H

#include <vector>
#include <iostream>

class PrimeGenerator
{
protected:
    int primesWanted;
    std :: vector<int> primesFound;
public:
    PrimeGenerator(){};
    PrimeGenerator(int a): primesWanted(a){};
    void findPrimes();
    void printPrimes();
};

bool check_if_prime(int a);

#endif
