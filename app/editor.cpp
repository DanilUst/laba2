#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "text.h"
#include "common.h"

#define MAXLINE 255

int main()
{
    char cmdline[MAXLINE + 1];
    char *cmd;
    char *arg;
    char *arg2;
    

    text txt = create_text();


    while (1) {
        printf("ed > ");
        

        fgets(cmdline, MAXLINE, stdin);


        if ((cmd = strtok(cmdline, " \n")) == NULL) {
            continue;
        }


        

        if (strcmp(cmd, "quit") == 0) {
            fprintf(stderr, "Bye!\n");
            break;
        }


        if (strcmp(cmd, "load") == 0) {
            if ((arg = strtok(NULL, " \n")) == NULL) {
                fprintf(stderr, "Usage: load filename\n");
            } else {
                load(txt, arg);
            }


            if (m(txt, 0, 0) != 0) {
                fprintf(stderr, "Can't move to zero\n");
            }
            continue;
        }


        if (strcmp(cmd, "show") == 0) {
            show(txt);
            continue;
        }
        if(strcmp(cmd, "rn") == 0){
            if((arg = strtok(NULL, " \n")) == NULL) {
                fprintf(stderr, "Usage: m line position\n");
            }else{
                    int num_str;
                    if(sscanf(arg, "%d", &num_str) > 0){
                        rn(txt, num_str);
                    }else{
                        fprintf(stderr, "m arguments should be integers\n");
                }
            }
            continue;
        }

	

		if (strcmp(cmd, "mwef") == 0) {
			mwef(txt);
			continue;
		}
		


        if (strcmp(cmd, "save") == 0) {
            if ((arg = strtok(NULL, " \n")) == NULL) {
                fprintf(stderr, "Usage: save filename\n");
            } else {
                save(txt, arg);
            }
            continue;
        }



        if (strcmp(cmd, "m") == 0) {
            if ((arg = strtok(NULL, " \n")) == NULL ) {
                fprintf(stderr, "Usage: m line_number cursor\n");
            } else {
                if ((arg2 = strtok(NULL, " \n")) == NULL ) {
                    fprintf(stderr, "Usage: m line_number cursor\n");
                } else {
                    if (m(txt, atoi(arg), atoi(arg2)) != 0) {
                        fprintf(stderr, "Invalid arguments\n");
                    }
                }
            }
            continue;
        }


        

        fprintf(stderr, "Unknown command: %s\n", cmd);
    }


    return 0;
}
