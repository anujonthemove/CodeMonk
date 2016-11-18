/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerrank
 * @problem_id box-it
 * @problem_address https://www.hackerrank.com/challenges/box-it
 **/

#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <iterator>
#include <map>
#include <queue>
#include <regex>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>

using namespace std;

class Box {
  private:
    int l;
    int b;
    int h;

  public:
    Box() {
        l = 0;
        b = 0;
        h = 0;
    }
    Box(int l, int b, int h) {
        this->l = l;
        this->b = b;
        this->h = h;
    }
    Box(const Box &box) {
        l = box.getLength();
        b = box.getBreadth();
        h = box.getHeight();
    }
    int getLength() const { return l; }
    int getBreadth() const { return b; }
    int getHeight() const { return h; }
    long long CalculateVolume() const {
        long long res = l;
        res *= b;
        res *= h;
        return res;
    }
};

ostream &operator<<(ostream &os, const Box &box) {
    return os << box.getLength() << " " << box.getBreadth() << " "
              << box.getHeight();
}

bool operator<(const Box &box1, const Box &box2) {
    int l1 = box1.getLength(), b1 = box1.getBreadth(), h1 = box1.getHeight();
    int l2 = box2.getLength(), b2 = box2.getBreadth(), h2 = box2.getHeight();
    if (l1 < l2) {
        return true;
    } else if (l1 == l2) {
        if (b1 < b2) {
            return true;
        } else if (b1 == b2) {
            if (h1 < h2) {
                return true;
            }
        }
    }
    return false;
}

void check2() {
    int n;
    cin >> n;
    Box temp;
    for (int i = 0; i < n; i++) {
        int type;
        cin >> type;
        if (type == 1) {
            cout << temp << endl;
        }
        if (type == 2) {
            int l, b, h;
            cin >> l >> b >> h;
            Box NewBox(l, b, h);
            temp = NewBox;
            cout << temp << endl;
        }
        if (type == 3) {
            int l, b, h;
            cin >> l >> b >> h;
            Box NewBox(l, b, h);
            if (NewBox < temp) {
                cout << "Lesser\n";
            } else {
                cout << "Greater\n";
            }
        }
        if (type == 4) {
            cout << temp.CalculateVolume() << endl;
        }
        if (type == 5) {
            Box NewBox(temp);
            cout << NewBox << endl;
        }
    }
}

int main(int argc, char *argv[]) {
    check2();
    return 0;
}
