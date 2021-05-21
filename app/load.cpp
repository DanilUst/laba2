#include <stdio.h>
#include <string.h>
#include "common.h"
#include "text.h"
using namespace std;
/**
 * Загружает содержимое указанного файла
 */
void load(text txt, string filename)
{
     FILE *f;

    char buf[MAXLINE+1];
     

    if ((f = fopen(filename.c_str(), "r")) == NULL) {
        printf("The file cannot be opened\n");
        return;
    }

    remove_all(txt);

    while (fgets(buf, MAXLINE, f)) {

        append_line(txt, buf);
    }


    fclose(f);
}


