/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerearth
 * @problem_id palindromic-ciphers
 * @problem_address https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/palindromic-ciphers/
 **/

#include <time.h>
#include <math.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

bool is_palin(char *word){
    int n = strlen(word);
    for(int i = 0; i < n / 2; i++){
        if(word[i] != word[n - 1 - i]){
            return false;
        }
    }
    return true;
}

long long sum(char *word){
    int n = strlen(word);
    long long res = 1;
    for(int i = 0; i < n; i++){
        char ch = word[i];
        long long num = ch - 'a' + 1;
        res *= num;
    }
    return res;
}

int main(int argc, char *argv[]){
    int n;
    scanf("%d", &n);
    char line[11];
    for(int i = 0; i < n; i++){
        scanf("%s", line);
        if(is_palin(line)){
            printf("Palindrome\n");
        }else{
            printf("%lld\n", sum(line));
        }
    }
    return 0;
}
