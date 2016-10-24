/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge timus
 * @problem_id 1910
 * @problem_address http://acm.timus.ru/problem.aspx?space=1&num=1910
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
    long pre, now, next;
    scanf("%ld", &pre);
    scanf("%ld", &now);
    long total, best = 0;
    int res;
    for(int i = 2; i <= n - 1; i++){
        scanf("%ld", &next);
        total = pre + now + next;
        if(total > best){
            best = total;
            res = i;
        }
        pre = now;
        now = next;
    }
    printf("%ld %d\n", best, res);
    return 0;
}
