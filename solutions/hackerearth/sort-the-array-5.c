/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerearth
 * @problem_id sort-the-array-5
 * @problem_address https://www.hackerearth.com/practice/algorithms/sorting/bucket-sort/practice-problems/algorithm/sort-the-array-5/
 **/

#include <time.h>
#include <math.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Item{
    int x;
    int raw;
}Item;

int cmp(const void *a, const void *b){
    Item *i1 = (Item *)a;
    Item *i2 = (Item *)b;
    if(i1->x != i2->x){
        return i2->x - i1->x;
    }
    return i1->raw - i2->raw;
}

int main(int argc, char *argv[]){
    int n, k;
    scanf("%d", &n);
    scanf("%d", &k);
    Item *items = (Item *)malloc(n * sizeof(Item));
    for(int i = 0; i < n; i++){
        scanf("%d", &items[i].raw);
        items[i].x = items[i].raw % k;
    }
    qsort(items, n, sizeof(Item), cmp);
    for(int i = 0; i < n; i++){
        printf("%d%s", items[i].raw, i == n - 1 ? "\n" : " ");
    }
    return 0;
}
