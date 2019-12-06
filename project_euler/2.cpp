#include <iostream>
using namespace std;

/*
 * 0 1 1 2 3 5 8 13 21 ...
 *
 *
 *
 */
int sum_even_fib(int bound) {
    int f1 = 1;
    int f2 = 2;
    int sum = 0;
    while (f2 < bound) {
        if (f2 % 2 == 0) sum += f2;
        int temp = f1+f2;
        f1 = f2;
        f2 = temp;
    }
    return sum;
}

int main() {
    cout<<sum_even_fib(4000000)<<endl;
}
