#include <stdio.h>


    //Function declaration
    float areaOfcircle (float radius_circle);
    
    // function definition to calculate area of circle
    float areaOfcircle (float radius_circle) {
      float area_circle;
      area_circle = 3.14 * radius_circle * radius_circle;
    
      return area_circle;
    }
    
    
    int
    main ()
    {
      float radius;
    
      printf ("Enter the radius of circle : ");
      scanf ("%f", &radius);
    
      printf ("Area of circle : %.2f", areaOfcircle (radius));
      printf ("\n");
    
      return 0;
}