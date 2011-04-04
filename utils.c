// Standard Includes
#include <stdlib.h>
#include <math.h>

// Bacon includes
#include "utils.h"

// -----------------------------------------------------------------------------

// Sin & cos tables.
int sin_ready, cos_ready = 0;
float sin_table[UTILS_LOOKUP_SIZE], cos_table[UTILS_LOOKUP_SIZE];

// -----------------------------------------------------------------------------

float Utils_Random(float min, float max) {
    return (((float)rand() / (float)RAND_MAX) * (max-min)) + min;
}

float Utils_Sin(float theta) {
    // Check if the table is ready
    if (sin_ready == 0) {
        // Make the table
        for (int i = 0; i < UTILS_LOOKUP_SIZE; i++)
            sin_table[i] = sinf((i / (float)UTILS_LOOKUP_SIZE) * PI * 2);

        // Function is ready
        sin_ready = 1;
    }

    // Calculate index and return.
    int index = abs((int)(UTILS_LOOKUP_SIZE * fmod(theta, PI) / PI));
    return sin_table[index];
}

int Utils_Snap(float i, int snap_size) {
    return (int)(i / snap_size) * snap_size;
}
int Utils_Snap(float i) { return Utils_Snap(i, UTILS_SNAP); }