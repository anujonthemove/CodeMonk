/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerearth
 * @problem_id passing-the-parcel
 * @problem_address https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/passing-the-parcel/
 **/

#include <time.h>
#include <math.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[]){
    int n;
    scanf("%d", &n);
    bool *live = (bool *)malloc(n * sizeof(bool));
    for(int i = 0; i < n; i++){
        live[i] = true;
    }
    char line[1001];
    scanf("%s", line);
    int k = strlen(line), i = 0, now = 0;
    while(true){
        char ch = line[i];
        if(ch == 'b'){
            live[now] = false;
        }
        int next = now;
        while(true){
            next += 1;
            next %= n;
            if(live[next] || next == now){
                break;
            }
        }
        if(next == now){
            break;
        }
        now = next;
        i += 1;
        i %= k;
    }
    printf("%d\n", now + 1);
    return 0;
}
