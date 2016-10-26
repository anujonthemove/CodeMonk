/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerearth
 * @problem_id rot13-modified
 * @problem_address https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/rot13-modified/
 **/

#include <time.h>
#include <math.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

void rot(char *words){
    int disps[26];
    for(int i = 0; i < 26; i++){
        disps[i] = 13;
    }
    for(int i = 0; i < strlen(words); i++){
        char ch = words[i];
        int disp = disps[ch - 'a'];
        disps[ch - 'a'] += 1;
        disps[ch - 'a'] %= 26;
        ch = (ch - 'a' + disp) % 26 + 'a';
        words[i] = ch;
    }
}

int main(int argc, char *argv[]){
    int n;
    scanf("%d", &n);
    char *words = (char *)malloc(1001 * sizeof(char));
    for(int i = 0; i < n; i++){
        scanf("%s", words);
        rot(words);
        printf("%s\n", words);
    }
    return 0;
}
