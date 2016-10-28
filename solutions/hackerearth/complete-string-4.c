/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerearth
 * @problem_id complete-string-4
 * @problem_address https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/complete-string-4/
 **/

#include <time.h>
#include <math.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[]){
    int T;
    scanf("%d", &T);
    for(int t = 0; t < T; t++){
        char line[101];
        scanf("%s", line);
        int c = 0;
        int cs[26];
        for(int i = 0; i < 26; i++){
            cs[i] = 0;
        }
        for(int i = 0; i < strlen(line); i++){
            char ch = line[i];
            if(!cs[ch - 'a']){
                c += 1;
                cs[ch - 'a'] = 1;
            }
        }
        printf("%s\n", c == 26 ? "YES" : "NO");
    }
    return 0;
}
