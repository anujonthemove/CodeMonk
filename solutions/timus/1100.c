/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge timus
 * @problem_id 1100
 * @problem_address http://acm.timus.ru/problem.aspx?space=1&num=1100
 **/

#include <time.h>
#include <math.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Record{
    int id;
    int pos;
    int score;
}Record;

int cmp(const void *a, const void *b){
    Record *r1 = (Record *)a;
    Record *r2 = (Record *)b;
    if(r1->score != r2->score){
        return r2->score - r1->score;
    }
    return r1->pos - r2->pos;
}

int main(int argc, char *argv[]){
    Record records[150000];
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        int id, score;
        scanf("%d %d", &id, &score);
        records[i].id = id;
        records[i].pos = i;
        records[i].score = score;
    }
    qsort(records, n, sizeof(Record), cmp);
    for(int i = 0; i < n; i++){
        printf("%d %d\n", records[i].id, records[i].score);
    }
    return 0;
}
