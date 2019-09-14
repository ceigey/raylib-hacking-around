#ifndef SILLY_STRUCTS_H
#define SILLY_STRUCTS_H

#include "raylib.h"

typedef struct _pos {
  int x;
  int y;
} _Pos;

typedef struct _font {
  int size;
  Color color;
} _Font;

typedef struct TextToDraw {
    const char* text;
    _Pos pos;
    _Font font;
} TextToDraw;

#endif