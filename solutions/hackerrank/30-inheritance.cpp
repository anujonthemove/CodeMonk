/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerrank
 * @problem_id 30-inheritance
 * @problem_address https://www.hackerrank.com/challenges/30-inheritance
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
  protected:
    string firstName;
    string lastName;
    int id;

  public:
    Person(string firstName, string lastName, int identification) {
        this->firstName = firstName;
        this->lastName = lastName;
        this->id = identification;
    }
    void printPerson() {
        cout << "Name: " << lastName << ", " << firstName << "\nID: " << id
             << "\n";
    }
};

class Student : public Person {
  private:
    vector<int> scores;

  public:
    Student(string firstName, string lastName, int id, vector<int> scores)
        : Person(firstName, lastName, id) {
        this->scores = scores;
    }
    char calculate() {
        double score = 0;
        for (int i = 0; i < scores.size(); i++) {
            score += scores[i];
        }
        score /= scores.size();
        if (score < 40) {
            return 'T';
        } else if (score < 55) {
            return 'D';
        } else if (score < 70) {
            return 'P';
        } else if (score < 80) {
            return 'A';
        } else if (score < 90) {
            return 'E';
        } else {
            return 'O';
        }
    }
};

int main(int argc, char *argv[]) {
    string firstName;
    string lastName;
    int id;
    int numScores;
    cin >> firstName >> lastName >> id >> numScores;
    vector<int> scores;
    for (int i = 0; i < numScores; i++) {
        int tmpScore;
        cin >> tmpScore;
        scores.push_back(tmpScore);
    }
    Student *s = new Student(firstName, lastName, id, scores);
    s->printPerson();
    cout << "Grade: " << s->calculate() << "\n";
    return 0;
}
