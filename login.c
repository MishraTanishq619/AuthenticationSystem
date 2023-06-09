// authentication system
// login


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char un[30],un2[30];
    char pw[30],pw2[30];

    FILE *unf;
    FILE *pwf;
    
    unf = fopen("un.txt", "rb");
    // fread(un, sizeof(un), 1 , unf);
    fgets(un, sizeof(un),unf);

    pwf = fopen("pw.txt", "rb");
    // fread(pw, sizeof(pw), 1 , pwf);
    fgets(pw, sizeof(pw), pwf);

    printf("%s  %s \n",un,pw);



    printf("Type your Username :");
    scanf("%s",&un2);
    printf("Enter your password : ");
    scanf("%s",&pw2);

    // printf("%d  %d \n",strcmp(un2,un),strcmp(pw2,pw));



    if(strcmp(un,un2)!=0){
        printf("Incorrect Username");
    }else if(strcmp(pw,pw2)!=0){
        printf("Incorrect Password");
    }else{
        printf("Authenticated");
    }


    fclose(unf);
    free(unf);
    
    fclose(pwf);
    free(pwf);
}