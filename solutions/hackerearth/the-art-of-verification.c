/**
 * @author yangyanzhan
 * @email yangyanzhan@gmail.com
 * @homepage http://www.yangyanzhan.com
 * @github_project https://github.com/yangyanzhan/CodeMonk
 * @online_judge hackerearth
 * @problem_id the-art-of-verification
 * @problem_address https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/the-art-of-verification/
 **/

#include <time.h>
#include <math.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#define LEN 1000

char username[LEN];
char pwd[LEN];
char profile[LEN];
char role[LEN];
char key[LEN];

char *extract_query(char *url){
    char *query = (char *)malloc(LEN * sizeof(char));
    int i;
    for(i = strlen(url) - 1; i >= 0; i--){
        if(url[i] == '?'){
            break;
        }
    }
    for(int j = i + 1; j < strlen(url); j++){
        query[j - i - 1] = url[j];
    }
    query[strlen(url) - i] = '\0';
    return query;
}

void parse_part(int a, int b, char *query){
    bool found = false;
    char k[LEN], v[LEN];
    int c1 = 0, c2 = 0;
    for(int i = a; i <= b; i++){
        char ch = query[i];
        if(ch == '=' && !found){
            found = true;
            continue;
        }
        if(!found){
            k[c1++] = ch;
        }else{
            v[c2++] = ch;
        }
    }
    k[c1] = '\0';
    v[c2] = '\0';
    if(strcmp("username", k) == 0){
        strcpy(username, v);
    }
    if(strcmp("pwd", k) == 0){
        strcpy(pwd, v);
    }
    if(strcmp("profile", k) == 0){
        strcpy(profile, v);
    }
    if(strcmp("role", k) == 0){
        strcpy(role, v);
    }
    if(strcmp("key", k) == 0){
        strcpy(key, v);
    }
}

void parse_query(char *query){
    int n = strlen(query), times = 0, a = 0, b = 0;
    for(int i = 0; i <= n; i++){
        char now = query[i];
        if(now == '='){
            times += 1;
        }
        if(times == 2 || now == '\0'){
            b = i - 1;
            if(a > b){
                break;
            }
            for(int j = b; j >= a; j--){
                if(query[j] == '&'){
                    b = j - 1;
                    break;
                }
            }
            if(a > b){
                break;
            }
            parse_part(a, b, query);
            i = b + 2;
            a = i;
            times = 0;
        }
    }
}

int main(int argc, char *argv[]){
    char url[LEN];
    scanf("%s", url);
    int n = strlen(url);
    if(url[n - 1] == '\n'){
        url[n - 1] = '\0';
    }
    char *query = extract_query(url);
    // parse_query(query);

    int pw = strstr(query, "pwd=") - query;
    int pr = strstr(query, "profile=") - query;
    int r = strstr(query, "role=") - query;
    int k = strstr(query, "key=") - query;
    parse_part(0, pw - 2, query);
    parse_part(pw, pr - 2, query);
    parse_part(pr, r - 2, query);
    parse_part(r, k - 2, query);
    parse_part(k, strlen(query) - 1, query);

    printf("username: %s\n", username);
    printf("pwd: %s\n", pwd);
    printf("profile: %s\n", profile);
    printf("role: %s\n", role);
    printf("key: %s\n", key);
    return 0;
}
