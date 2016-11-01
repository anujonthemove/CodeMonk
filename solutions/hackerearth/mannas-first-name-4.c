/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerearth
 * @problem_id mannas-first-name-4
 * @problem_address https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/mannas-first-name-4/
 **/

#include <time.h>
#include <math.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int count(char *line, char *part, char *extra){
    int c = 0;
    char *head = line;
    while(head = strstr(head, part)){
        if(strlen(extra) > 0){
            if(strstr(head, extra) == head){
                head += strlen(extra);
                continue;
            }
        }
        head += strlen(part);
        c += 1;
    }
    return c;
}

int main(int argc, char *argv[]){
    int T;
    scanf("%d", &T);
    for(int t = 0; t < T; t++){
        char line[151];
        scanf("%s", line);
        int c1 = count(line, "SUVO", "SUVOJIT");
        int c2 = count(line, "SUVOJIT", "");
        printf("SUVO = %d, SUVOJIT = %d\n", c1, c2);
    }
    return 0;
}
