/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerearth
 * @problem_id warcakewalk
 * @problem_address https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/warcakewalk/
 **/

#include <time.h>
#include <math.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[]){
    int T;
    scanf("%d", &T);
    for(int t = 0; t < T; t++){
        int n;
        scanf("%d", &n);
        int a = 0, b = 0;
        for(int i = 0; i < n; i++){
            int num;
            scanf("%d", &num);
            if(num > a){
                a = num;
            }
        }
        for(int i = 0; i < n; i++){
            int num;
            scanf("%d", &num);
            if(num > b){
                b = num;
            }
        }
        if(a == b){
            printf("Tie\n");
        }else if(a > b){
            printf("Bob\n");
        }else{
            printf("Alice\n");
        }
    }
    return 0;
}
