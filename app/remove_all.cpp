#include "_text.h"

/**
 * Удаляет весь текст
 * 
 * @param txt текст
 * @returns none
 */
void remove_all(text txt)
{

    if (txt == NULL) {
        fprintf(stderr, "The text doesn't exist!\n");
        return;
    }    
    

    if (txt->strs.size() == 0) {
        return;
    }


    txt->strs.clear();
    txt->cursor->position = 0;
}
