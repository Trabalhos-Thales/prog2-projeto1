#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
  
#define LINESIZE 1024

int openFile(FILE* arq, char* path){

    arq = fopen(path, "r");

    if (!arq){
      
        perror ("Erro ao abrir arquivo x") ;
        return 1;
    
    }
    return 0;
}

void printFile(FILE* arq, char* line){
    int i = 1 ;

    fgets (line, LINESIZE, arq);
    while (!feof(arq)){
    
        printf("%d: %s", i, line);
        fgets(line, LINESIZE, arq);
        i++ ;

    }
 
}
int main(int argc, char** argv){

    char* path = NULL;
    char line[LINESIZE+1];
    int option;

    FILE* arq;
    opterr = 0;

    while ((option = getopt (argc, argv, "d:")) != -1)
    {
        switch (option){
            case 'd':
            path = optarg;
            break;
        }        
    }

    arq = fopen(path, "r");

    if (!arq){
      
        perror ("Erro ao abrir arquivo x") ;
        return 1;
    
    }
    printFile(arq, line);

    
    printf("path = %s\n", path);

    return 0;

}