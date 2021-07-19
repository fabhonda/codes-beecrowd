#include <stdio.h>
#include <string.h>
 
 
int main() {
 
    char a1[1000],a2[1000]; scanf("%s",&a1); scanf("%s",&a2);
    if(strlen(a1)>=strlen(a2)) printf("go\n");
    else printf("no\n");
 
    return 0;
}
