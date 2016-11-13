/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerrank
 * @problem_id 30-abstract-classes
 * @problem_address https://www.hackerrank.com/challenges/30-abstract-classes
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

class Book {
  protected:
    string title;
    string author;

  public:
    Book(string t, string a) {
        title = t;
        author = a;
    }
    virtual void display() = 0;
};

class MyBook : public Book {
  private:
    int price;

  public:
    MyBook(string t, string a, int p) : Book(t, a) { price = p; }
    void display() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
    }
};

int main(int argc, char *argv[]) {
    string title, author;
    int price;
    getline(cin, title);
    getline(cin, author);
    cin >> price;
    MyBook novel(title, author, price);
    novel.display();
    return 0;
}
