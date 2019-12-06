#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

class BigInteger {
    private:
        string integer;
        vector<string> adds;
    public:
        BigInteger(string integer) {
            this->integer = integer;
        }

        string multiply(BigInteger other) {
            string n1 = this->getString();
            string n2 = other.getString();
            int numzeros = 0;
            int maxlength = 0;
            char z = 0 + '0';
            for (int i = this->length() -1; i >= 0; i--) {
                int num1 = n1[i] - '0';
                int carry = 0;
                string curr = "";
                for (int k = 0; k < numzeros; k++) {
                    curr += z;
                }
                numzeros++;
                for (int j = other.length() - 1; j >= 0; j--) {
                    int num2 = n2[j] - '0';
                    int mult = num1 * num2 + carry;
                    if (mult > 9) {
                        carry = mult/10;
                        mult %= 10;
                    } else {
                        carry = 0;
                    }

                    char multchar = mult + '0';
                    curr = multchar + curr;
                }

                if (carry > 0) {
                    char carrychar = carry + '0';
                    curr = carrychar + curr;
                }

                adds.push_back(curr);
                maxlength = max(maxlength, (int)curr.length());
            }

            for (int i = 0; i < adds.size(); i++) {
                int lengthdiff = maxlength - adds[i].length();
                if (lengthdiff > 0) {
                    for (int j = 0; j < lengthdiff; j++) {
                        adds[i] = z + adds[i];
                    }
                }
            }
            int carry = 0;
            string sum = "";
            for (int i = maxlength - 1; i >= 0; i--) {
                int linesum = 0;
                for (int j = 0; j < adds.size(); j++) {
                    int sumnum = adds[j][i] - '0';
                    linesum += sumnum;
                }
                linesum += carry;
                if (linesum > 9) {
                    carry = linesum/10;
                    linesum %= 10;
                } else {
                    carry = 0;
                }

                char sumchar = linesum + '0';
                sum = sumchar + sum;
            }

            if (carry > 0) {
                char carrychar = carry + '0'; 
                sum = carrychar + sum;
            }

            bool allZeros = true;
            for (int i = 0; i < sum.length(); i++) {
                if (sum[i] != '0') {
                    allZeros = false;
                    break;
                }
            }

            if (allZeros) sum = "0";

            return sum;
        }

        int length() {
            return this->integer.length();
        }

        string getString() {
            return this->integer;
        }
};

int main() {
    string s, t;
    while(cin>>s>>t) {
        BigInteger b1(s);
        BigInteger b2(t);
        cout<<b1.multiply(b2)<<endl;
    }
}

