#include <iostream>
#include <stdio.h>

/*  program uses pascals triangle to find
    what the number of total paths are
    e.x. for a 2 dimensional square the
    total number of paths would be 6

     1 1 1
     1 2 3
     1 3 6

     problem can also be solved in one line with
     combinatorics n choose k: n!/k!(n-k)! */

using namespace std;

long long latticePaths(int square){
    int i, x, y;

    long long arr[square+1][square+1];

    for(i=0; i<square+1; i++){ //filling sides with 1's
        arr[0][i] = 1;
        arr[i][0] = 1;
    }

    for(x = 1; x < square+1; x++){
        for(y = 1; y < square+1; y++){
            arr[x][y] = arr[x-1][y] + arr[x][y-1];
        }
    }
    return arr[square][square];
}

int main()
{
    cout << latticePaths(20);
    return 0;
}