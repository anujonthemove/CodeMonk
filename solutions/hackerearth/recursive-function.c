/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerearth
 * @problem_id recursive-function
 * @problem_address https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/recursive-function/
 **/

#include <time.h>
#include <math.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int f(int x, int y){
    x %= 1000;
    y %= 1000;
    if(x == 0){
        return (y + 1) % 1000;
    }
    if(y == 0){
        return f(x - 1, 1) % 1000;
    }
    return f(x - 1, f(x, y - 1)) % 1000;
}

int main(int argc, char *argv[]){
    int n = 4, m = 1000;
    int map[5][1001];
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= 1000; j++){
            int x = i % 1000, y = j % 1000;
            if(x == 0){
                map[i][j] = (y + 1) % 1000;
            }else if(y == 0){
                map[i][j] = map[x - 1][1] % 1000;
            }else{
                map[i][j] = map[x - 1][map[x][y - 1] % 1000] % 1000;
            }
        }
    }
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%03d\n", map[x % 1000][y % 1000] % 1000);
    return 0;
}
