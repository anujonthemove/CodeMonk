/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerrank
 * @problem_id 30-class-vs-instance
 * @problem_address https://www.hackerrank.com/challenges/30-class-vs-instance
 **/

#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <iterator>
#include <map>
#include <regex>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>

using namespace std;

class Person {
  private:
    int age;

  public:
    Person(int age);
    void yearPasses();
    void amIOld();
};

Person::Person(int age) {
    if (age < 0) {
        age = 0;
        cout << "Age is not valid, setting age to 0." << endl;
    }
    this->age = age;
}

void Person::yearPasses() { age++; }

void Person::amIOld() {
    if (age < 13) {
        cout << "You are young." << endl;
    } else if (age < 18) {
        cout << "You are a teenager." << endl;
    } else {
        cout << "You are old." << endl;
    }
}

int main(int argc, char *argv[]) {
    int t;
    int age;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> age;
        Person p(age);
        p.amIOld();
        for (int j = 0; j < 3; j++) {
            p.yearPasses();
        }
        p.amIOld();

        cout << '\n';
    }
    return 0;
}
