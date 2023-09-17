//
// Created by Egor Mitrofanov on 17.09.2023.
//

#include <stdio.h>
#include "error.h"

void yyerror(const char *s) {
    fprintf(stderr, "Ошибка: %s\n", s);
}