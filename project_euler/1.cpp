// Multiples of 3 and 5
#include <iostream>
using namespace std;

int naive_multiple_sum(int multiple, int bound) {
    int sum = 0;
    for (int i = multiple; i < bound; i += multiple) {
        sum += i;
    }
    return sum;
}

/*
 * multiple = 3
 * bound = 21;
 * 3 6 9 12 15 18
 * bound/multiple = 7;
 * 3+6+9 == (1+2+3)*3
 * sum of first n numbers is (n * (n+1)) / 2
 * multiple that by the multiple
 *
 */
int eff_multiple_sum(int multiple, int bound) {
    int p = bound/multiple;
    return multiple * (p * (p+1)) / 2;
}

int main() {
    //int sum = naive_multiple_sum(3, 1000) + naive_multiple_sum(5, 1000) - naive_multiple_sum(3*5, 1000);
    int sum = eff_multiple_sum(3, 999) + eff_multiple_sum(5, 999) - eff_multiple_sum(3*5, 999);
    cout<<sum<<endl;
}
