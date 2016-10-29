/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerearth
 * @problem_id prateek-and-his-friends
 * @problem_address https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/prateek-and-his-friends/
 **/

#include <time.h>
#include <math.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

long long nums[1000001];

int main(int argc, char *argv[]){
    int T;
    scanf("%d", &T);
    for(int t = 0; t < T; t++){
        long long n, x;
        scanf("%lld %lld", &n, &x);
        long long total = 0;
        long long s = 0;
        bool can = false;
        for(long long i = 0; i < n; i++){
            long long num;
            scanf("%lld", &num);
            nums[i] = num;
        }
        for(long long i = 0; i < n; i++){
            long long num = nums[i];
            if(total + num == x){
                can = true;
                break;
            }
            if(total + num > x){
                total -= nums[s];
                s += 1;
                i -= 1;
            }else{
                total += num;
            }
        }
        printf("%s\n", can ? "YES" : "NO");
    }
    return 0;
}
