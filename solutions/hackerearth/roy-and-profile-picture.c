/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerearth
 * @problem_id roy-and-profile-picture
 * @problem_address https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/roy-and-profile-picture/
 **/

#include <time.h>
#include <math.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[]){
    int l, n;
    scanf("%d", &l);
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        int w, h;
        scanf("%d", &w);
        scanf("%d", &h);
        if(w < l || h < l){
            printf("UPLOAD ANOTHER\n");
        }else if(w == h){
            printf("ACCEPTED\n");
        }else{
            printf("CROP IT\n");
        }
    }
    return 0;
}
