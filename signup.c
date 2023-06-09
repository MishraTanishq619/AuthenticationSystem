// authentication system
// signup


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char un[30];
    char pw[30];

    FILE *unf;
    FILE *pwf;
    
    unf = fopen("un.txt", "wb");
    pwf = fopen("pw.txt", "wb");
    
    printf("Type your Username :");
    scanf("%s",&un);
    printf("Enter your password : ");
    scanf("%s",&pw);


    fputs(un,unf);
    
    fputs(pw,pwf);

    printf("Done\n");


    fclose(unf);
    free(unf);

    fclose(pwf);
    free(pwf);

}