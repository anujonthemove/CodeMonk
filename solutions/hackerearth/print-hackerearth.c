/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerearth
 * @problem_id print-hackerearth
 * @problem_address https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/print-hackerearth/
 **/

#include <time.h>
#include <math.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[]){
    int n;
    scanf("%d", &n);
    char *words = (char *)malloc((n + 1) * sizeof(char));
    scanf("%s", words);
    int h = 0, a = 0, c = 0, k = 0, e = 0, r = 0, t = 0;
    for(int i = 0; i < n; i++){
        char ch = words[i];
        switch(ch){
            case 'h':
                h += 1;
                break;
            case 'a':
                a += 1;
                break;
            case 'c':
                c += 1;
                break;
            case 'k':
                k += 1;
                break;
            case 'e':
                e += 1;
                break;
            case 'r':
                r += 1;
                break;
            case 't':
                t += 1;
                break;
        }
    }
    h /= 2;
    e /= 2;
    a /= 2;
    r /= 2;
    int res = h;
    if(a < res){
        res = a;
    }
    if(c < res){
        res = c;
    }
    if(k < res){
        res = k;
    }
    if(e < res){
        res = e;
    }
    if(r < res){
        res = r;
    }
    if(t < res){
        res = t;
    }
    printf("%d\n", res);
    return 0;
}
