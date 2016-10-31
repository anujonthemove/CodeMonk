/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerearth
 * @problem_id monk-and-modulo-based-sorting
 * @problem_address https://www.hackerearth.com/codemonk-sorting/algorithm/monk-and-modulo-based-sorting/
 **/

#include <time.h>
#include <math.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Item{
    int val;
    int pos;
}Item;

int n, k;

int cmp(const void *a, const void *b){
    Item item1 = *(Item *)a;
    Item item2 = *(Item *)b;
    int k1 = item1.val % k;
    int k2 = item2.val % k;
    if(k1 != k2){
        return k1 - k2;
    }
    return item1.pos - item2.pos;
}

int main(int argc, char *argv[]){
    scanf("%d", &n);
    scanf("%d", &k);
    Item *items = (Item *)malloc(n * sizeof(Item));
    for(int i = 0; i < n; i++){
        scanf("%d", &items[i].val);
        items[i].pos = i;
    }
    qsort(items, n, sizeof(Item), cmp);
    for(int i = 0; i < n; i++){
        printf("%d%s", items[i], i == n - 1 ? "\n" : " ");
    }
    return 0;
}
