#include <bits/stdc++.h>
 
char LFCL(char *);     
 
int main(){

char string[10000], letter;
 
    scanf("%s", string);                       //ввожу строку
    letter = LFCL(string);

    if (letter == 0) { printf("-1"); }

    else { printf("%c\n", letter); }          // вывожу заглавну

    return 0;
    }


    char LFCL(char *string){
        static int i = 0;
        if (i < strlen(string))
        {
            if (isupper(string[i]))
            {
                return string[i];
            }
            else
            {
                i = i + 1;
                return LFCL(string);
            }
        }
        else return 0;
    }