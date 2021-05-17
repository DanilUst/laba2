#include <stdio.h>
#include <string.h>
#include "common.h"
#include <iostream>
#include "text.h"
using namespace std;
/**
 * Загружает содержимое указанного файла
 */
void load(text txt, std::string filename)
{
    std::ifstream f;
    f.open(filename);

    if (!f.good()) {
        std::cerr << "The file " << filename << " cannot be opened\n";
        return;
    }

    
    remove_all(txt);

    std::string buf;

    while (f.good()) {
        f.getline(&buf[0], MAXLINE);
        append_line(txt, buf);
    }

    f.close();
}
    


