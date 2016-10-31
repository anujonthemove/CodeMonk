/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerearth
 * @problem_id the-best-player-1
 * @problem_address https://www.hackerearth.com/practice/algorithms/sorting/bubble-sort/practice-problems/algorithm/the-best-player-1/
 **/

#include <time.h>
#include <math.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Fan{
    char *name;
    long long power;
}Fan;

int cmp(const void *a, const void *b){
    Fan fan1 = *(Fan *)a;
    Fan fan2 = *(Fan *)b;
    if(fan1.power > fan2.power){
        return -1;
    }else if(fan1.power < fan2.power){
        return 1;
    }
    return strcmp(fan1.name, fan2.name);
}

int main(int argc, char *argv[]){
    int n, m;
    scanf("%d", &n);
    scanf("%d", &m);
    Fan *fans = (Fan *)malloc(n * sizeof(Fan));
    for(int i = 0; i < n; i++){
        char *name = (char *)malloc(21 * sizeof(char));
        scanf("%s", name);
        long long power;
        scanf("%lld", &power);
        fans[i].name = name;
        fans[i].power = power;
    }
    qsort(fans, n, sizeof(Fan), cmp);
    for(int i = 0; i < m; i++){
        printf("%s\n", fans[i].name);
    }
    return 0;
}
