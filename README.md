# Filtro Gaussiano
Esta desarrollado en C/C++. El kernel gaussiano se calcula de acuerdo al valor de la desviacion estandar.
El tamaño del kernel puede ser definido, sino es el caso el tamaño se ajusta de acuerdo al valor de la 
desviación estandar.
# Instalación.
Para utilizar clone el repositorio e incluya en su proyecto al archivo <strong>gaussianFilter.cpp</strong>. 
Llamada a la función.
```
#include "gaussianFilter.cpp"
  GaussianFilter gaussian;
  gaussian.gauassianFilter(image, width, height, sigma);
  ```
  <strong>Nota:</strong> El valor de sigma es la desviación estandar.
 # Resultados
 <p float="left">
  <h2>Original</h2>
 <img width="573" alt="image" src="https://github.com/ismaelfari1996/gaussian_filter/assets/66229891/a7fecabe-4e03-48d8-a581-93535137f195">
 <h2>Aplicado filtro con gama=2</h2>
 <img width="575" alt="image" src="https://github.com/ismaelfari1996/gaussian_filter/assets/66229891/72954b2b-ea94-4052-ba32-e65e11689b35">
 </p>



 
