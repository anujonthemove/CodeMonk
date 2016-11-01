/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerearth
 * @problem_id rest-in-peace-21-1
 * @problem_address https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/rest-in-peace-21-1/
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
    for(int i = 0; i < n; i++){
        int num;
        scanf("%d", &num);
        char word[100];
        sprintf(word, "%d", num);
        if(strstr(word, "21") || num % 21 == 0){
            printf("The streak is broken!\n");
        }else{
            printf("The streak lives still in our heart!\n");
        }
    }
    return 0;
}
