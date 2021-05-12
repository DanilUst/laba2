#include <stdio.h>
#include "common.h"
#include "text.h"
#include <assert.h>

void save_line(int index, std::string line, int cursor, void *f);

/**
 * Загружает содержимое указанного файла
 */
void save(text txt, std::string filename)
{
    FILE *f;


    if ((f = fopen(filename.c_str(), "w")) == NULL) {
        printf("The file %s cannot be opened\n", filename.c_str());
        return;
    }

    process_forward(txt, save_line, (void *) f);

    fclose(f);
}

void save_line(int index, std::string line, int cursor, void *f)
{

    UNUSED(index);
    UNUSED(cursor);


    fprintf((FILE *) f, "%s", line.c_str());
}
