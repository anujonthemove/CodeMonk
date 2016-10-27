/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerearth
 * @problem_id roys-life-cycle
 * @problem_address https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/roys-life-cycle/
 **/

#include <time.h>
#include <math.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int line_length = 1440;

int coding_time(int a, int b, char *words){
    int best = 0, count = 0;
    for(int i = a; i <= b; i++){
        char now = words[i];
        if(now != 'C'){
            if(count > best){
                best = count;
            }
            count = 0;
        }else{
            count += 1;
        }
    }
    if(count > best){
        best = count;
    }
    return best;
}

int main(int argc, char *argv[]){
    int n;
    scanf("%d", &n);
    char *words = (char *)malloc((n * line_length + 1) * sizeof(char));
    char *line = (char *)malloc((line_length + 1) * sizeof(char));
    int best = 0;
    for(int i = 0; i < n; i++){
        scanf("%s", line);
        strcpy(words + i * line_length, line);
        int line_best = coding_time(0, line_length - 1, line);
        if(line_best > best){
            best = line_best;
        }
    }
    printf("%d %d\n", best, coding_time(0, n * line_length - 1, words));
    return 0;
}
