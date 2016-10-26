/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerearth
 * @problem_id final-destination-cakewalk
 * @problem_address https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/final-destination-cakewalk/
 **/

#include <time.h>
#include <math.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[]){
    int x = 0, y = 0;
    char commands[100001];
    scanf("%s", commands);
    for(int i = 0; i < strlen(commands); i++){
        char ch = commands[i];
        switch(ch){
            case 'L':
                x = x - 1;
                break;
            case 'R':
                x = x + 1;
                break;
            case 'U':
                y = y + 1;
                break;
            case 'D':
                y = y - 1;
                break;
        }
    }
    printf("%d %d\n", x, y);
    return 0;
}
