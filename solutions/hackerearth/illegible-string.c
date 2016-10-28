/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerearth
 * @problem_id illegible-string
 * @problem_address https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/illegible-string/
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
    char *word = (char *)malloc((n + 1) * sizeof(char));
    scanf("%s", word);
    int min = 0, max = 0, remains = 0;
    for(int i = 0; i < n; i++){
        char now = word[i];
        if(now == 'w'){
            max += 2;
        }else{
            max += 1;
        }
        if(now == 'v'){
            if(remains > 0){
                min += 1;
                remains -= 1;
            }else{
                remains += 1;
            }
        }else if(now == 'w'){
            min += 1;
        }else{
            min += 1;
            min += remains;
            remains = 0;
        }
    }
    min += remains;
    printf("%d %d\n", min, max);
    return 0;
}
