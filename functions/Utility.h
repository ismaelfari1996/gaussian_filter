typedef int ** utility;
class Utility
{
private:
    /* data */
public:
    utility double2int(double ** matrix, short int width, short int height);
    Utility(/* args */);
   // ~Utility();
};

utility Utility::double2int(double **matrix, short int width, short int height){
   /*
    ** matrix: matriz de datos origen
	** height: número de filas de la matriz
	** width: número de columnas de la matriz
	** Nota: Esta función retorna la una copia de la matriz mat.
	*/
    utility result=new int* [height];
	for (short int i = 0; i < height; ++i)
	{
        result[i]=new int[width];
		for (short int j = 0; j < width; ++j)
		{
			result[i][j]=matrix[i][j];
		}
	}

	return result;

}
Utility::Utility(/* args */)
{
}
/*
Utility::~Utility()
{
}*/
