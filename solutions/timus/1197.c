/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge timus
 * @problem_id 1197
 * @problem_address http://acm.timus.ru/problem.aspx?space=1&num=1197
 **/

#include <time.h>
#include <math.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int movable(int x, int y){
    return (0 <= x && x < 8 && 0 <= y && y < 8) ? 1 : 0;
}

int attacked(int x, int y){
    int res = 0;
    res += movable(x - 2, y + 1);
    res += movable(x - 2, y - 1);
    res += movable(x - 1, y + 2);
    res += movable(x - 1, y - 2);
    res += movable(x + 1, y + 2);
    res += movable(x + 1, y - 2);
    res += movable(x + 2, y + 1);
    res += movable(x + 2, y - 1);
    return res;
}

int main(int argc, char *argv[]){
    int n;
    scanf("%d\n", &n);
    char line[4];
    for(int i = 0; i < n; i++){
        fgets(line, 4, stdin);
        printf("%d\n", attacked(line[0] - 'a', line[1] - '1'));
    }
    return 0;
}
