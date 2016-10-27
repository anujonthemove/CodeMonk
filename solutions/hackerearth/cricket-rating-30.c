/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerearth
 * @problem_id cricket-rating-30
 * @problem_address https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/cricket-rating-30/
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
    scanf("%d",&n);
    int count = 0, best = 0;
    for(int i = 0; i < n; i++){
        int num;
        scanf("%d", &num);
        count = count + num;
        if(count < 0){
            count = 0;
        }
        if(count > best){
            best = count;
        }
    }
    printf("%d\n", best);
    return 0;
}
