/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerearth
 * @problem_id acronym-2
 * @problem_address https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/acronym-2/
 **/

#include <time.h>
#include <math.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[]){
    int k;
    scanf("%d", &k);
    char **hates = (char **)malloc(k * sizeof(char *));
    for(int i = 0; i < k; i++){
        hates[i] = (char *)malloc(101 * sizeof(char));
        scanf("%s", hates[i]);
    }
    int n;
    scanf("%d", &n);
    char word[101];
    char res[101], count = 0;
    for(int i = 0; i < n; i++){
        scanf("%s", word);
        int found = 0;
        for(int j = 0; j < k; j++){
            if(strcmp(word, hates[j]) == 0){
                found = 1;
                break;
            }
        }
        if(found){
            continue;
        }
        if(strlen(word) > 0){
            res[count++] = toupper(word[0]);
        }
    }
    for(int i = 0; i < count; i++){
        printf("%c%s", res[i], i == count - 1 ? "\n" : ".");
    }
    return 0;
}
