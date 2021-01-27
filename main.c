#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
struct Line{
    float a;
    float b;
};
struct Point{
    float x;
    float y;
};



int main() {
    struct Point pts[10]; // deklaracja nowej tablicy
    struct Line line = {2.5, 7};
    //
    printf("Mam na imie Maciej");
    for (int i = 0; i < 10; ++i) {
        pts[i].x = i;
        pts[i].y = line.a * i + line.b;
        printf("%f %f \n", pts[i].x, pts[i].y);
    }

    return 0;
}


























































