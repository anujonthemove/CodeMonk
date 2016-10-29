/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerearth
 * @problem_id little-jhool-and-his-breakup
 * @problem_address https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/little-jhool-and-his-breakup/
 **/

#include <time.h>
#include <math.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[]){
    char line[101];
    scanf("%s", line);
    int n = strlen(line);
    bool found = false;
    for(int i = 0; i < n; i++){
        char now = line[i];
        if(now == 'l'){
            for(int j = i + 1; j < n; j++){
                char now = line[j];
                if(now == 'o'){
                    for(int k = j + 1; k < n; k++){
                        char now = line[k];
                        if(now == 'v'){
                            for(int l = k + 1; l < n; l++){
                                char now = line[l];
                                if(now == 'e'){
                                    found = true;
                                    break;
                                }
                            }
                            break;
                        }
                    }
                    break;
                }
            }
            break;
        }
    }
    printf("%s\n", found ? "I love you, too!" : "Let us breakup!");
    return 0;
}
