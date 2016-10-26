/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge timus
 * @problem_id 1493
 * @problem_address http://acm.timus.ru/problem.aspx?space=1&num=1493
 **/

#include <time.h>
#include <math.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int lucky(int n){
    if(n < 0 || n >= 1000000){
        return 0;
    }
    int a = 0, b = 0;
    for(int i = 0; i < 3; i++){
        a += n % 10;
        n /= 10;
    }
    for(int i = 0; i < 3; i++){
        b += n % 10;
        n /= 10;
    }
    return a == b;
}

int main(int argc, char *argv[]){
    int n;
    scanf("%d", &n);
    int r = lucky(n - 1) || lucky(n + 1);
    printf("%s\n", r ? "Yes" : "No");
    return 0;
}
