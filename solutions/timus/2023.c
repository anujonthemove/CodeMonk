/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge timus
 * @problem_id 2023
 * @problem_address http://acm.timus.ru/problem.aspx?space=1&num=2023
 **/

#include <time.h>
#include <math.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int move(char *name){
    switch(name[0]){
        case 'A':
        case 'P':
        case 'O':
        case 'R':
            return 0;
        case 'B':
        case 'M':
        case 'S':
            return 1;
        case 'D':
        case 'G':
        case 'J':
        case 'K':
        case 'T':
        case 'W':
            return 2;
    }
    return 0;
}

int main(int argc, char *argv[]){
    char names[27][10] = {"Alice", "Ariel", "Aurora", "Phil", "Peter", "Olaf", "Phoebus", "Ralph", "Robin", "Bambi", "Belle", "Bolt", "Mulan", "Mowgli", "Mickey", "Silver", "Simba", "Stitch", "Dumbo", "Genie", "Jiminy", "Kuzko", "Kida", "kenai", "Tarzan", "Tiana", "Winnie"};

    int n, pos = 0, res = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        char *name = (char *)malloc(10 * sizeof(char));
        scanf("%s", name);
        int target = move(name);
        int dist = pos - target;
        if(dist < 0){
            dist = -dist;
        }
        res += dist;
        pos = target;
    }
    
    printf("%d\n", res);
    return 0;
}
