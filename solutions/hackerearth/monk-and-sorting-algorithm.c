/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerearth
 * @problem_id monk-and-sorting-algorithm
 * @problem_address https://www.hackerearth.com/codemonk-sorting/algorithm/monk-and-sorting-algorithm/
 **/

#include <time.h>
#include <math.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Item{
    long long x;
    long long y;
    long long raw;
    long long pos;
}Item;

long long base = 100000;

int cmp(const void *A, const void *B){
    Item *a = (Item *)A;
    Item *b = (Item *)B;

    if(a->y < b->y){
        return -1;
    }else if(a->y > b->y){
        return 1;
    }

    if(a->pos < b->pos){
        return -1;
    }else{
        return 1;
    }
}

int main(int argc, char *argv[]){
    long long n;
    scanf("%lld", &n);
    Item *items = (Item *)malloc(n * sizeof(Item));
    for(long long i = 0; i < n; i++){
        long long num;
        scanf("%lld", &num);
        items[i].x = num;
        items[i].y = num % base;
        items[i].pos = i;
        items[i].raw = num;
    }
    while(true){
        qsort(items, n, sizeof(Item), cmp);
        for(long long i = 0; i < n; i++){
            items[i].pos = i;
            printf("%lld%s", items[i].raw, i == n - 1 ? "\n" : " ");
        }
        bool has_positive_y = false;
        for(long long i = 0; i < n; i++){
            items[i].x /= base;
            items[i].y = items[i].x % base;
            if(items[i].y > 0){
                has_positive_y = true;
            }
        }
        if(!has_positive_y){
            break;
        }
    }
    return 0;
}
