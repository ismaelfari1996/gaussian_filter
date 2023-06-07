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
   /* kernel g=new double*[4];
    int cont=1;
    for (size_t i = 0; i < 4; i++)
    {
        g[i]=new double[4];
        for (size_t j = 0; j < 4; j++)
        {
            g[i][j]=cont;
            cont++;
        }
    }
  kernel r=  gaussian.gaussianFilter(g,4,4,1.3);

  for (size_t i = 0; i < 4; i++)
  {
    for (size_t j = 0; j < 4; j++)
    {
        printf("%f\t",r[i][j]);
    }
    printf("\n");
  }
  */
    

    
    return 0;
}