/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerearth
 * @problem_id little-shino-and-coins-3
 * @problem_address https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/little-shino-and-coins-3/
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
    char words[5001];
    scanf("%s", words);
    int n = strlen(words);
    long long res = 0;
    int counts[26];
    for(int i = 0; i < n; i++){
        int end = i + k - 1;
        if(end >= n){
            break;
        }
        for(int j = 0; j < 26; j++){
            counts[j] = 0;
        }
        int count = 0;
        for(int j = i; j < end; j++){
            char now = words[j];
            if(!counts[now - 'a']){
                count = count + 1;
                counts[now - 'a'] = 1;
            }
        }
        for(int j = end; j < n; j++){
            char now = words[j];
            if(!counts[now - 'a']){
                count = count + 1;
                counts[now - 'a'] = 1;
                if(count > k){
                    break;
                }
            }
            if(count == k){
                res = res + 1;
            }
        }
    }
    printf("%lld\n", res);
    return 0;
}
