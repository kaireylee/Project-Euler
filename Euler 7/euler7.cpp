#include <iostream>
#include <math.h>

using namespace std;

bool isPrime (int num){
    if(num <= 1)
        return false;
    else if(num <= 3)
        return true;
    else if(num%2 == 0 || num%3 == 0)
        return false;

    int i = 5;
    while(i*i <= num){
        if(num%i ==0 || num%(i+2) == 0)
            return false;
        i+=6;
    }
    return true;
}

int main(){
    int i = 3;
    int count = 1;

    while(count < 10001){
        if(isPrime(i)){
            count++;
        }
        if(count == 10001){
            cout << i;
            return 0;
        }
        i+=2;
    }
}
