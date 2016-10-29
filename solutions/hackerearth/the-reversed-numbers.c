/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerearth
 * @problem_id the-reversed-numbers
 * @problem_address https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/the-reversed-numbers/
 **/

#include <time.h>
#include <math.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int reverse(int n){
    int res = 0;
    while(n > 0){
        res = res * 10 + n % 10;
        n /= 10;
    }
    return res;
}

int main(int argc, char *argv[]){
    int T;
    scanf("%d", &T);
    for(int t = 0; t < T; t++){
        int a, b;
        scanf("%d", &a);
        scanf("%d", &b);
        printf("%d\n", reverse(reverse(a) + reverse(b)));
    }
    return 0;
}
