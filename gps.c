#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "libfiles.h"

int main(int argc, char** argv){

    char* path = NULL;
    int option;

    opterr = 0;

    while ((option = getopt (argc, argv, "d:")) != -1)
    {
        switch (option){
            case 'd':
            path = optarg;
            break;
        }        
    }

    DIR *dirstream = opendir(path);
    readDirectoryFiles(dirstream,path);

    return 0;

}