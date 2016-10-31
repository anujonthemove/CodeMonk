/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerearth
 * @problem_id monk-and-suffix-sort
 * @problem_address https://www.hackerearth.com/codemonk-sorting/algorithm/monk-and-suffix-sort/
 **/

#include <time.h>
#include <math.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int cmp(const void *a, const void *b){
    return strcmp(*(char **)a, *(char **)b);
}

int main(int argc, char *argv[]){
    char word[26];
    int k;
    scanf("%s", word);
    scanf("%d", &k);
    int n = strlen(word);
    char **words = (char **)malloc(n * sizeof(char *));
    for(int i = 0; i < n; i++){
        words[i] = (char *)malloc(26 * sizeof(char));
        for(int j = i; j < n; j++){
            words[i][j - i] = word[j];
        }
        words[i][n - i] = '\0';
    }
    qsort(words, n, sizeof(char *), cmp);
    printf("%s\n", words[k - 1]);
    return 0;
}
