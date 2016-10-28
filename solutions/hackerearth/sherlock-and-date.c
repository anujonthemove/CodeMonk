/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerearth
 * @problem_id sherlock-and-date
 * @problem_address https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/sherlock-and-date/
 **/

#include <time.h>
#include <math.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

bool leap_y(int year){
    if(year % 4 == 0){
        if(year % 100 == 0){
            if(year % 400 == 0){
                return true;
            }
        }else{
            return true;
        }
    }
    return false;
}

int dates_m_y(int month, int year){
    switch(month){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            return 31;
        case 2:
            if(leap_y(year)){
                return 29;
            }else{
                return 28;
            }
    }
    return 30;
}

void p(int date, int month, int year){
    char names[12][20] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    printf("%d %s %d\n", date, names[month - 1], year);
}

int main(int argc, char *argv[]){
    char names[12][20] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int T;
    scanf("%d", &T);
    for(int t = 0; t < T; t++){
        int date, month, year;
        char name[20];
        scanf("%d", &date);
        scanf("%s", name);
        scanf("%d", &year);
        for(int i = 0; i < 12; i++){
            if(strcmp(name, names[i]) == 0){
                month = i + 1;
                break;
            }
        }
        if(date - 1 >= 1){
            date -= 1;
        }else if(month - 1 >= 1){
            date = dates_m_y(month - 1, year);
            month -= 1;
        }else{
            month = 12;
            year -= 1;
            date = dates_m_y(month, year);
        }
        p(date, month, year);
    }
    return 0;
}
