#ifndef COMMON_H
#define COMMON_H

#include "text.h"


#define UNUSED(x) (void)(x)

/**
 * Выводит содержимое указанного файла на экран
 */
void show(text txt);

void showfirstwords(text txt);

/**
 * Загружает содержимое указанного файла
 */
void load(text txt, std::string filename);

/**
 * Сохраняем содержимое в указанный файл (Квист Татьяна)
 */
void save(text txt, std::string filename);

#endif
