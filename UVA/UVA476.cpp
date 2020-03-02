#include <iostream>
#include <vector>
#include <stdio.h>
using namespace std;

class Rectangle {
    public:
        double rx1;
        double ry1;
        double rx2;
        double ry2;
        Rectangle(double rx1, double ry1, double rx2, double ry2) {
            this->rx1 = rx1;
            this->ry1 = ry1;
            this->rx2 = rx2;
            this->ry2 = ry2;
        }
};

class Point {
    public:
        double x;
        double y;
        Point(double x, double y) {
            this->x = x;
            this->y = y;
        }

        bool isWithin(double rx1, double ry1, double rx2, double ry2) {
            bool isWithinX = false;
            bool isWithinY = false;
            if (this->x > rx1 && this->x < rx2) isWithinX = true;
            if (this->x > rx2 && this->x < rx1) isWithinX = true;
            if (this->y > ry1 && this->y < ry2) isWithinY = true;
            if (this->y > ry2 && this->y < ry1) isWithinY = true;

            return isWithinX && isWithinY;
        }
};

int main() {
    string type;
    double rx1, ry1, rx2, ry2;
    double px, py;
    vector<Rectangle> recs;
    while (true) {
        cin>>type;
        if (type == "*") break;
        cin>>rx1>>ry1>>rx2>>ry2;
        Rectangle rec(rx1, ry1, rx2, ry2);
        recs.push_back(rec);
    }
    vector<Point> points;
    while(cin>>px>>py) {
        if (px == 9999.9 && py == 9999.9) break;
        Point p(px, py);
        points.push_back(p);
    }

    for (int i = 0; i < points.size(); i++) {
        bool isWithin = false;
        for (int j = 0; j < recs.size(); j++) {
            if (points[i].isWithin(recs[j].rx1, recs[j].ry1, recs[j].rx2, recs[j].ry2)) {
                printf("Point %d is contained in figure %d\n", i+1, j+1);
                isWithin = true;
            }
        }
        if (!isWithin) {
            printf("Point %d is not contained in any figure\n", i+1);
        }
    }
}
