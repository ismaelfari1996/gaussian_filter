#include "../lib/stb_image.h"
extern "C"
{
#define STB_IMAGE_IMPLEMENTATION
#include "../lib/stb_image.h"
#define STB_IMAGE_WRITE_IMPLEMENTATION
#include "../lib/stb_image_write.h"
}
typedef double **stb_image;
class StbImageImplementation
{
private:
    int **img;
    int row;
    int col;
    const char *name;
    char *imgc;

public:
    stb_image imread(const char *absolutPath, int &width, int &height);
    void imshow(const char *absolutPath, stb_image image, int width, int height);
    StbImageImplementation(/* args */);
   // ~StbImageImplementation();
};

stb_image StbImageImplementation::imread(const char *absolutPath, int &width, int &height)
{
    /*
    * absolutPath: recibe la ruta absoluta de la imagen y el nobre de le imagen
    * Ejemplo: /home/user/img/imagen.jpg
    */
    GaussianFilter gaussian;
    int n;
    unsigned char *data = stbi_load(absolutPath, &width, &height, &n, STBI_rgb);
    stb_image img = gaussian.initMatrix(width, height);
    int cont = 0;
    printf("canales: %d\t",n);
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
           // *(*(img + i) + j) = double(*(data + cont));
           int index=(i*width + j)*n;
           double r=(double)data[index];
           double g=(double)data[index +1];
           double b=(double)data[index +2];
           img[i][j]= (r+g+b)/3.0;//(double)data[cont];
            cont++;
        }
    }

    stbi_image_free(data);

    return img;
}
void StbImageImplementation::imshow(const char *absolutePath, stb_image image, int width, int height){
        char *img=new char[width*height];
        int index=0;
        for (short int i = 0; i < height; i++)
        {
            for (short int j = 0; j < width; j++)
            {
                img[index]=char(int(image[i][j])*255);
                index++;
            }
            
        }
        stbi_write_jpg(absolutePath,width,height,1,img,100);
        delete[] img;
        
}

StbImageImplementation::StbImageImplementation(/* args */)
{
}

/*StbImageImplementation::~StbImageImplementation()
{
}*/
