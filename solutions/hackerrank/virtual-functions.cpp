/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerrank
 * @problem_id virtual-functions
 * @problem_address https://www.hackerrank.com/challenges/virtual-functions
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

class Person {
  protected:
    string name;
    int age;

  public:
    virtual void getdata() {}
    virtual void putdata() {}
};

class Professor : public Person {
  private:
    int id;
    int pub;

  public:
    static int count;
    Professor() {
        count++;
        id = count;
    }
    void getdata() {
        cin >> name;
        cin >> age;
        cin >> pub;
    }
    void putdata() {
        cout << name << " " << age << " " << pub << " " << id << endl;
    }
};

class Student : public Person {
  private:
    int id;
    double scores[6];
    double totalScore;

  public:
    static int count;
    Student() {
        count++;
        id = count;
    }
    void getdata() {
        cin >> name;
        cin >> age;
        totalScore = 0;
        for (int i = 0; i < 6; i++) {
            cin >> scores[i];
            totalScore += scores[i];
        }
    }
    void putdata() {
        cout << name << " " << age << " " << totalScore << " " << id << endl;
    }
};

int Professor::count = 0;
int Student::count = 0;

int main(int argc, char *argv[]) {
    int n, val;
    cin >> n; // The number of objects that is going to be created.
    Person *per[n];

    for (int i = 0; i < n; i++) {

        cin >> val;
        if (val == 1) {
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        } else
            per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.
    }

    for (int i = 0; i < n; i++)
        per[i]->putdata(); // Print the required output for each object.
    return 0;
}
