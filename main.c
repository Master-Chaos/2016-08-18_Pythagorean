#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
    double side1 = 10; //INPUT FOR SIDE A (IN GERMAN THIS IS ANKATHETE)
    double side2 = 10; //INPUT FOR SIDE A (IN GERMAN THIS IS GEGENKATHETE)
    double hypotenuse; //VARIABLE FOR RESULTS OF CALCULATION

    hypotenuse = (side1 * side1) + (side2 * side2); //CALCULATE SQUARE ROOT OF BOTH SIDES AND ADD BOTH SIDES
    return sqrt(hypotenuse); //RETURN RESULT BY CALUCLATE THE ROOT OF HYPOTENUSE
}
