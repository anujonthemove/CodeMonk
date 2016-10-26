/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerearth
 * @problem_id psychic-powers
 * @problem_address https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/psychic-powers/
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
    int count = 0, best = 0;
    char pre = '\0';
    for(int i = 0; i <= strlen(words); i++){
        char ch = words[i];
        if(ch != pre){
            if(count > best){
                best = count;
            }
            if(ch == '1' || ch == '0'){
                count = 1;
            }else{
                count = 0;
            }
        }else{
            count += 1;
        }
        pre = ch;
    }
    printf("%s\n", best >= 6 ? "Sorry, sorry!" : "Good luck!");
    return 0;
}
