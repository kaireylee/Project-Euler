#include <iostream>
#include <cmath>

using namespace std;
// brute force
/*int main()
{
    int squared = 0;
    int sum = 0;
    int answer;

    for(int i = 1; i < 101; i++){
        sum += i;
        squared += i*i;
    }

    sum *= sum;
    answer = sum - squared;
    cout << answer;
    return 0;
}*/
//execution time : 0.034 s

//using functions
//The sum of the squares of the first n natural numbers is: ((x)*(x+1)*(2*x+1))/6
//https://trans4mind.com/personal_development/mathematics/series/sumNaturalSquares.htm
//Sum of the first natural numbers
//https://cseweb.ucsd.edu/groups/tatami/kumo/exs/sum/

unsigned int summate(int);
unsigned int sumofSqrs(int);

int main(){
    cout << summate(100)*summate(100) - sumofSqrs(100);
}

unsigned int summate(int x){
    long answer = (x*(x+1))/2;
    return answer;
}

unsigned int sumofSqrs(int x){
    int answer = ((x)*(x+1)*(2*x+1))/6;
    return answer;
}

//execution time : 0.307 s
