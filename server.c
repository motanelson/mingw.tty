#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
///usr/bin/i686-w64-mingw32-gcc terminal.c -o terminal.exe 
char *ttys="CNCA3";
int main(){
    FILE *f2;
    char c[4096]="";
    printf("033c\033[43;30m\nwait.....\n");
    
    while(1){
        f2=fopen(ttys,"r");
        fgets(c,4095,f2);
        fclose(f2);

        if(c!=NULL)printf("%s\r\n",c);
        sleep(5);
    }
    
    
    
    return 0;
}