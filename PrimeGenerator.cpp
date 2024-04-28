
#include "PrimeGenerator.h"
#include <iostream>

void PrimeGenerator :: findPrimes()
{
    int lLimit = 0, uLimit = 10, primesCount = 0;
    int diff = primesWanted - primesCount;
    int temp;
    while(diff>0){
        for(int i = lLimit; i<uLimit; i++){
            if(i<10){
                if(i==2)     { primesFound.push_back(2); primesCount++;}
                else if(i==3){ primesFound.push_back(3); primesCount++;}
                else if(i==5){ primesFound.push_back(5); primesCount++;}
                else if(i==7){ primesFound.push_back(7); primesCount++;}
            }
            else if(i>10){
                if(i%2!=0 && i%3!=0 && i%5!=0 && i%7!=0){
                    primesFound.push_back(i); primesCount++;
                }
            }
        }
        diff = diff - primesCount + temp;
        temp = primesCount;
        lLimit+=10;
        uLimit+=10;
    }
}

void PrimeGenerator::printPrimes()
{
    if(primesFound.size()==0){
        this->findPrimes();
    }
    int count = 0;
    for(int n:primesFound){
        if(::check_if_prime(n) == true)
            std :: cout << n << ", ";
            count++;
            if(count==primesWanted){ break;}
    }
}

bool check_if_prime(int a)
{
    bool _is_a_prime;
    if(a<10)
        _is_a_prime = (a==2 || a==3 || a== 5 || a==7)? true : false ;
    else
        _is_a_prime = (a%2!=0 && a%3!=0 && a%5!=0 && a%7!=0)? true : false;

    return _is_a_prime;
}