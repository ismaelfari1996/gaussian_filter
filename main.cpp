// #include <iostream>
#include "include.h"
int main()
{
    GaussianFilter gaussian;
    StbImageImplementation stb;
    int width,height;
    kernel img=stb.imread("/home/ismael/Documents/programs/gaussfilter_generator/img/cat.jpg",width,height);
    stb.imshow("/home/ismael/Documents/programs/gaussfilter_generator/img/charge.jpg",img,width,height);
    kernel gaussianAplyImage=gaussian.gaussianFilter(img,width,height,2.5);
    stb.imshow("/home/ismael/Documents/programs/gaussfilter_generator/img/result.jpg",gaussianAplyImage,width,height);
 
    
    return 0;
}