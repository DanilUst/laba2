#include <stdio.h>
#include <assert.h>
#include "common.h"
#include <string.h>
#include "text.h"

static void showf_words(int index, std::string contents, int cursor, void *data);

/**
 * Выводит содержимое указанного файла на экран
 */
void showfirstwords(text txt)
{

    process_forward(txt, showf_words, NULL);
}

/**
 * Выводит содержимое указанного файла на экран
 */
static void showf_words(int index, std::string contents, int cursor, void *data)
{

    UNUSED(index);
    UNUSED(cursor);
    UNUSED(data);
    

    int i;

    for(  i = 0; contents[i] == ' '; i++){
        ;
    }

    while((contents[i] != ' ')  && (contents[i] != '\0')){
        
        printf("%c", contents[i]);
        
        i++;
    }

}

