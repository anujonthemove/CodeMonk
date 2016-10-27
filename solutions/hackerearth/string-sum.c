/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerearth
 * @problem_id string-sum
 * @problem_address https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/string-sum/
 **/

#include <time.h>
#include <math.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[]){
    char words[1001];
    scanf("%s", words);
    int res = 0;
    for(int i = 0; i < strlen(words); i++){
        char ch = words[i];
        res += (ch - 'a' + 1);
    }
    printf("%d\n", res);
    return 0;
}
