/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerearth
 * @problem_id what-is-the-string-made-of-2
 * @problem_address https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/what-is-the-string-made-of-2/
 **/

#include <time.h>
#include <math.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[]){
    int nums[] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    char line[101];
    scanf("%s", line);
    int res = 0, n = strlen(line);
    for(int i = 0; i < n; i++){
        char ch = line[i];
        res += nums[ch - '0'];
    }
    printf("%d\n", res);
    return 0;
}
