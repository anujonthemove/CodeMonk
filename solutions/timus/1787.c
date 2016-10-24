/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge timus
 * @problem_id 1787
 * @problem_address http://acm.timus.ru/problem.aspx?space=1&num=1787
 **/

#include <time.h>
#include <math.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[]){
    int k, n;
    scanf("%d %d", &k, &n);
    int remains = 0, cars;
    for(int i = 0; i < n; i++){
        scanf("%d", &cars);
        remains += cars;
        if(remains <= k){
            remains = 0;
        }else{
            remains -= k;
        }
    }
    printf("%d\n", remains);
    return 0;
}
