/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge timus
 * @problem_id 1785
 * @problem_address http://acm.timus.ru/problem.aspx?space=1&num=1785
 **/

#include <time.h>
#include <math.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[]){
    int num;
    scanf("%d", &num);
    if(num <= 4){
        printf("few");
    }else if(num <= 9){
        printf("several");
    }else if(num <= 19){
        printf("pack");
    }else if(num <= 49){
        printf("lots");
    }else if(num <= 99){
        printf("horde");
    }else if(num <= 249){
        printf("throng");
    }else if(num <= 499){
        printf("swarm");
    }else if(num <= 999){
        printf("zounds");
    }else {
        printf("legion");
    }
    return 0;
}
