/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerearth
 * @problem_id 2-fast-2-furious
 * @problem_address https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/2-fast-2-furious/
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
    int pre, now, gap_a = 0, gap_b = 0;
    for(int i = 0; i < n; i++){
        scanf("%d", &now);
        if(i > 0){
            int gap = now - pre;
            if(gap < 0){
                gap = -gap;
            }
            if(gap > gap_a){
                gap_a = gap;
            }
        }
        pre = now;
    }
    for(int i = 0; i < n; i++){
        scanf("%d", &now);
        if(i > 0){
            int gap = now - pre;
            if(gap < 0){
                gap = -gap;
            }
            if(gap > gap_b){
                gap_b = gap;
            }
        }
        pre = now;
    }
    int best;
    char *name;
    if(gap_a > gap_b){
        name = "Dom";
        best = gap_a;
    }else if(gap_a < gap_b){
        name = "Brian";
        best = gap_b;
    }else{
        name = "Tie";
        best = gap_a;
    }
    printf("%s\n%d\n", name, best);
    return 0;
}
