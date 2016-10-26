/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerearth
 * @problem_id monk-and-his-friend
 * @problem_address https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/monk-and-his-friend/
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
        unsigned long long a, b;
        scanf("%llu", &a);
        scanf("%llu", &b);
        unsigned long long c = a ^ b;
        int res = 0;
        while(c > 0){
            res += c % 2;
            c /= 2;
        }
        printf("%d\n", res);
    }
    return 0;
}
