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

int dodawnie(x, y)
{
    return x+y;
}

int main() {
    struct Point pts[10]; // deklaracja nowej tablicy
    struct Line line = {2.5, 7};
    //
    for (int i = 0; i < 10; ++i) {
        pts[i].x = i;
        pts[i].y = line.a * i + line.b;
        printf("%f %f \n", pts[i].x, pts[i].y);
    }

    return 0;
}

//struct Segment{
//    struct Point{
//        int x, y;
//    } p1, p2;
//};
//
//int compare(struct Segment* wsk1, struct Segment* wsk2){
//    double val_1 = len(wsk1);
//    double val_2 = len(wsk2);
//
//    if(val_1 > val_2)
//        return 0;
//    else
//        return 1;
//}
//int len(struct Segment* wsk){
//    wsk -> p1.x;
//    double len = sqrt(pow(wsk -> p1.x - wsk -> p2.x , 2) + pow(wsk -> p1.y - wsk -> p2.y, 2));
//    return len;
//
//}
//int main(){
//    srand(time(NULL));
//    struct Segment tab[10];
//    for (int i = 0; i < 10; ++i) {
//        tab[i].p1.x = rand()%11;
//        tab[i].p1.y = rand()%11;
//
//        tab[i].p2.x = rand()%11;
//        tab[i].p2.y = rand()%11;
//    }
//
//    for (int i = 0; i < 10; ++i) {
//        printf("%d %d %d %d", tab[i].p1.x, tab[i].p1.y, tab[i].p2.x, tab[i].p2.y);
//    }
//
//
//    for (int i = 0; i < 9; ++i) {
//        for (int j = 0; j < 9; ++j) {
//            if(compare(&tab[j], &tab[j + 1]) == 0)
//            {
//                struct Segment temp = tab[j];
//                tab[j] = tab[j + 1];
//                tab[j + 1] = temp
//            }
//
//        }
//
//    }
//    printf("\n");
//    for (int i = 0; i < 10; ++i) {
//        printf("%d %d %d %d", tab[i].p1.x, tab[i].p1.y, tab[i].p2.x, tab[i].p2.y);
//    }
//    return 0;
//}





//Zadanie 4
//enum Format {NUMER, IMIE};
//struct Student{
//    enum Format format;
//    union{
//        int number;
//        char imie[30];
//    };
//    int oceny[3];
//};
//
//void display(struct Student* tab[4]){
//    for (int i = 0; i < 4; ++i) {
//        if(tab[i] -> format == NUMER)
//        {
//            printf("%d %d %d %d \n",
//                   tab[i]-> number,
//                   tab[i]-> oceny[0],
//                   tab[i]-> oceny[1],
//                   tab[i]-> oceny[2]);
//        }
//
//        else{
//            printf("%s %d %d %d \n",
//                   tab[i]-> imie,
//                   tab[i]-> oceny[0],
//                   tab[i]-> oceny[1],
//                   tab[i]-> oceny[2]);
//        }
//    }
//}
//int main() {
//    struct Student s1 = {NUMER, .number=1, .oceny={3,4,5}};
//    struct Student s2 = {IMIE, .imie="Adam Ab", .oceny={1,2,3}};
//    struct Student s3 = {NUMER, .imie="Maciek Iwan", .oceny={4,2,4}};
//    struct Student s4 = {NUMER, .number=4, .oceny={5,2,1}};
//
//    struct Student* tab[4]={&s1, &s2, &s3, &s4};
//    display(tab);
//    return 0;
//}


























































