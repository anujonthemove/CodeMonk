/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerearth
 * @problem_id modify-the-string
 * @problem_address https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/modify-the-string/
 **/

#include <time.h>
#include <math.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[]){
    char *words = (char *)malloc(101 * sizeof(char));
    scanf("%s", words);
    for(int i = 0; i < strlen(words); i++){
        char ch = words[i];
        if(islower(ch)){
            ch = toupper(ch);
        }else{
            ch = tolower(ch);
        }
        words[i] = ch;
    }
    printf("%s\n", words);
    return 0;
}
