/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerearth
 * @problem_id the-best-internet-browser-3
 * @problem_address https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/the-best-internet-browser-3/
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
        char line[201];
        scanf("%s", line);
        int count = 0;
        for(int i = 4; i <= strlen(line) - 5; i++){
            char ch = line[i];
            if(!strchr("aeiouAEIOU", ch)){
                count += 1;
            }
        }
        printf("%d/%d\n", count + 4, strlen(line));
    }
    return 0;
}
