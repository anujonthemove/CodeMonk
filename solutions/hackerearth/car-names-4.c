/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerearth
 * @problem_id car-names-4
 * @problem_address https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/car-names-4/
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
        char name[501];
        scanf("%s", name);
        int n = strlen(name);
        int counts[3] = {0, 0, 0}, count = 0;
        char chs[4];
        char pre;
        bool ok = true;
        for(int i = 0; i <= n; i++){
            char now = name[i];
            if(i > 0){
                if(pre != now){
                    chs[count] = now;
                    counts[count] = 1;
                    count += 1;
                }else{
                    counts[count] += 1;
                }
                if(count == 4){
                    if(i < n){
                        ok = false;
                    }
                    break;
                }
            }
            if(i == 0){
                chs[count] = now;
                counts[count] = 1;
                count += 1;
            }
            pre = now;
        }
        if(ok){
            if(count != 4){
                ok = false;
            }
            if(chs[0] == chs[1] || chs[1] == chs[2] || chs[2] == chs[0]){
                ok = false;
            }
            if(counts[0] != counts[1] || counts[1] != counts[2] | counts[2] != counts[0]){
                ok = false;
            }
        }
        printf("%s\n", ok ? "OK" : "Not OK");
    }
    return 0;
}
