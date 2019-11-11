#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 33
 
 
 
int areAnags(const char *str1,const char *str2){
    int i,temp;
    int count1[256] = {0};
    int count2[256] = {0};
    int len1 = strlen(str1), len2 = strlen(str2);
 
    if(len1 != len2) return 0;  
 
    for(i=0;i<len1;i++){
        temp = (int)str1[i];
        count1[temp]++;
    }
    for(i=0;i<len2;i++){
        temp = (int)str2[i];
        count2[temp]++;
    }
 
    for(i=97;i<=122;i++){
        if(count1[i] != count2[i]) return 0;    
    }
     
    return 1;
}
 
int isInside(char **array, char *string, int s){
    int i=0,in;
 
    while(i<s){
        if(areAnags(array[i], string) == 1){
            in = 1;
            break;
        }else{
            in = 0;
        }
        i++;
    }
 
    return in;
}
 
int main(void){
    char input[MAX];
    int count = 0,i,a_size=1;
    char **anagram;
     
    anagram = malloc(sizeof(*anagram));
    anagram[0] = malloc(MAX * sizeof(*anagram[0]));
     
    if(anagram == NULL || anagram[0] == NULL){
        printf("Insufficient memory available.\n");     
        return EXIT_FAILURE;
    }
 
 
    while(scanf("%s", input) != EOF){   
        if(isInside(anagram, input, a_size) == 0){
            anagram = realloc(anagram, (count+1) * sizeof(*anagram));
            anagram[count] = malloc((strlen(input)+1) * sizeof(*anagram[count]));
 
            if(anagram == NULL || anagram[count] == NULL){
                    printf("Insufficient memory available.\n");     
                    return EXIT_FAILURE;        
            }
                 
            strncpy(anagram[count], input, strlen(input)+1);
            count++;
            a_size = count;
            printf("%s<--\n", anagram[count-1]);
        }
    }
 
    printf("%d\n", a_size);
     
    for(i=0;i<count-1;i++)
        free(anagram[i]);
    free(anagram);
    return 0;
}