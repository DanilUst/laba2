#include "_text.h"
#include <string>
#include <list>
#include <iterator>
#include <iostream>

/**
 * Добавляет одну строку к тексту
 * @param txt текст
 * @param contents новая строка
 * @returns none
 */
void append_line(text txt, std::string contents)
{
    txt->strs.push_back(contents);
    txt->cursor->line = txt->strs.end();
    txt->cursor->position = txt->cursor->line->size();

}
