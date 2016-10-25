/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge timus
 * @problem_id 1225
 * @problem_address http://acm.timus.ru/problem.aspx?space=1&num=1225
 **/

#include <time.h>
#include <math.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[]){
    int n;
    scanf("%d", &n);
    long long a = 2, b = 2, res;
    if(n <= 2){
        res = 2;
    }else{
        while(n > 2){
            n -= 1;
            b = a + b;
            a = b - a;
        }
        res = b;
    }
    printf("%lld\n", res);
    return 0;
}
