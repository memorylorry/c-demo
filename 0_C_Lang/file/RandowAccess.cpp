#include<stdio.h>
// #include<string.h>
#include<stdlib.h>

int main(){
    char* filepath = "./test.txt";
    char* s1 = "Fortran";
    char* s2 = "Basic";


    FILE* fp;
    
    if((fp = fopen(filepath,"w+")) == NULL)
        printf("Cannot open this file!\n"),exit(0);
    
    fwrite(s1,sizeof(char),7,fp);
    fseek(fp,-2L,SEEK_END);
    fwrite(s2,sizeof(char),5,fp);
    fclose(fp);

    return 0;
}