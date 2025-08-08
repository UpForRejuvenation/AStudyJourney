#include<stdio.h>
#include<string.h>

int main() {
    int n;
    char s[101], temp[101];

    scanf("%d\n%s", &n, s);
    while (n) {
        int ch;
        int a, b;

        scanf("%d", &ch);

        if (ch == 1) {
            scanf("%s", temp);
            strcat(s, temp);
            printf("%s\n", s);
        } 
        else if (ch == 2) {
            scanf("%d %d", &a, &b);
            s[a + b] = '\0';        
            strcpy(temp, &s[a]);   
            strcpy(s, temp);         
            printf("%s\n", s);
        } 
        else if (ch == 3) {
            scanf("%d %s", &a, temp);
            strcat(temp, &s[a]);    
            s[a] = '\0';            
            strcat(s, temp);        
            printf("%s\n", s);
        } 
        else if (ch == 4) {
            scanf("%s", temp);
            char* ret = strstr(s, temp);
            printf("%d\n", ret == NULL ? -1 : (int)(ret - s));
        }

        n--;
    }
    return 0;
}
