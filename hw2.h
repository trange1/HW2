//
// Created by Admin on 14.05.2023.
//
#include <iostream>
#include <list>
#include <string>
#include <fstream>
#ifndef HW2PICTURES_HW2_H
#define HW2PICTURES_HW2_H
using namespace std;
struct Img{
    int* srcImg;
    int width;
    int height;
    int x_c;
    int y_c;
    Img();
    Img(int w, int h);
    Img(const int* src, int w, int h);
    ~Img();
};

class ImageProcess{
private:
    Img* srcImg;
    Img* processedImg;
    Img* mask;
public:
    ImageProcess();
    ImageProcess(int w, int h);
    ImageProcess(const Img* img); // with copy
    ImageProcess(const char* fileName);
    ~ImageProcess();

    int UpdateMask(const Img& mask);
    int UpdateSrcImg(); //reload
    int Dilatation(int point=1);
    int Erosion(int point=1);
    int LoadImgFromFile(const char* fileName, int format=1);
    int SaveImgToFile(const char* fileName, int format=1);
};
#endif //HW2PICTURES_HW2_H
