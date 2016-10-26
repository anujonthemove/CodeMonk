/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerearth
 * @problem_id count-divisors
 * @problem_address https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/count-divisors/
 **/

#include <time.h>
#include <math.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[]){
    int l, r, k;
    scanf("%d", &l);
    scanf("%d", &r);
    scanf("%d", &k);
    int a = (int)ceil(l / (k + 0.0));
    int b = (int)floor(r / (k + 0.0));
    int res = 0;
    if(a <= b){
        res = b - a + 1;
    }
    printf("%d\n", res);
    return 0;
}
