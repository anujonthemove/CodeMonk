/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge timus
 * @problem_id 1991
 * @problem_address http://acm.timus.ru/problem.aspx?space=1&num=1991
 **/

#include <time.h>
#include <math.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[]){
    int n, k;
    scanf("%d %d", &n, &k);
    int a = 0, b = 0;
    for(int i = 0; i < n; i++){
        int num;
        scanf("%d", &num);
        if(num > k){
            a += num - k;
        }else{
            b += k - num;
        }
    }
    printf("%d %d\n", a, b);
    return 0;
}
