/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerearth
 * @problem_id palindrome-check-2
 * @problem_address https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/palindrome-check-2/
 **/

#include <time.h>
#include <math.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[]){
    char words[101];
    scanf("%s", words);
    int n = strlen(words);
    bool is_palin = true;
    for(int i = 0; i < n / 2; i++){
        if(words[i] != words[n - 1 - i]){
            is_palin = false;
            break;
        }
    }
    printf("%s\n", is_palin ? "YES" : "NO");
    return 0;
}
