#include <iostream>
#include "hw2.h"
int main() {
    ImageProcess a;
    int* ar =new int[9]{0,1,0,1,1,1,0,1,0};
    Img* m = new Img{ar, 5,5};
    a.UpdateMask( *m);
    a.LoadImgFromFile("MyFile.txt");
    a.Dilatation(1);
    a.SaveImgToFile("MyFile1.txt", 1);
    return 0;
}
