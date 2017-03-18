#include <iostream>

int main()
{
    for(int i = 110; i< 670442572800; i++){
        if(i%20 == 0 && i%19 == 0 && i%18 == 0 && i%17 == 0 && i%16 == 0 && i%15 == 0 && i%14 == 0 && i%13 == 0 &&
        i%12 == 0 && i%11 == 0){
            std::cout << i;
            return 0;
        }
    }
    std::cout << "no matches";
    return 0;
}

//20 2 4 5  //2 3 4 5 6 7 8 9
// 19
// 18 6 3 9
// 17
//16 8
//15
//14 7
//13
//12
//11
//10

//smallest # = 110

/*Euclidean Algorithm https://en.wikipedia.org/wiki/Euclidean_algorithm

long gcd(long a, long b) {
    while (b) {
        int prevB = b;
        b = a % b;
        a = prevB;
    }
    return a;
}

long lcm(long a, long b) {
    return a * (b / gcd(a, b));
}

int main() {
    long result = 20;
    for (long number = result - 1; number > 1; --number) {
        result = lcm(result, number);
    }
    std::cout << result << '\n';
}
*/
