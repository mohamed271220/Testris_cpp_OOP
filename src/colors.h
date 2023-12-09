#pragma once
#include <raylib.h>
#include <vector>

extern const Color darkGray; // extern provides the ability to declare a variable that is defined externally
extern const Color green;
extern const Color red;
extern const Color orange;
extern const Color yellow;
extern const Color purple;
extern const Color cyan;
extern const Color blue;
extern const Color lightBlue;
extern const Color darkBlue;

std::vector<Color> GetCellColors();