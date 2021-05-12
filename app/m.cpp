
#include <stdio.h>
#include <string.h>
#include "_text.h"

int m(text txt, int line_num, int cursor_pos)
{

    if (line_num < 0 || cursor_pos < 0){
        return -1;
    }


    std::list<std::string>::iterator current = txt->strs.begin();
    int index = 0;



    bool find_flag = false;
    while (current != txt->strs.end()) {
        if (line_num == index) {
            find_flag = true;
            break;
        }
        current++;
        index++;
    }


    if (!find_flag){
        return -1;
    }


    if ((*current).length() < (long unsigned int) cursor_pos){
        cursor_pos = (*current).length();
    }


    txt->cursor->line = current;
    txt->cursor->position = cursor_pos;

    return 0;
}
