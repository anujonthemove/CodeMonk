/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerearth
 * @problem_id little-jhool-and-brute-force-18
 * @problem_address https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/little-jhool-and-brute-force-18/
 **/

#include <time.h>
#include <math.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

long nums[35] = {1729,4104,13832,20683,32832,39312,40033,46683,64232,65728,110656,110808,134379,149389,165464,171288,195841,216027,216125,262656,314496,320264,327763,373464,402597,439101,443889,513000,513856,515375,525824,558441,593047,684019,704977};

int main(int argc, char *argv[]){
    int T;
    scanf("%d", &T);
    for(int t = 0; t < T; t++){
        long num;
        scanf("%ld", &num);
        long res = -1;
        for(int i = 34; i >= 0; i--){
            long p = nums[i];
            if(p < num){
                res = p;
                break;
            }
        }
        printf("%ld\n", res);
    }
    return 0;
}
