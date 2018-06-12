#include <iostream>
using namespace std;

int main() {
    int height, width;
    while (true) {
        cin>>height>>width;
        if (height == 0 || width == 0) break;
        int pos_heights[width];
        int pos_height;
        for (int i = 0; i < width; i++) {
            cin>>pos_height;
            pos_heights[i] = pos_height; 
        }

        int n = height - pos_heights[0];
        for (int i = 1; i < width; i++) {
            if (pos_heights[i] < pos_heights[i-1]) {
                n += pos_heights[i-1] - pos_heights[i];
            } 
        }

        cout<<n<<endl;
    }
}
