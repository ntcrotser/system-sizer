#include <stdio.h>
#include <stdlib.h>

int main()
{


     printf("  ╔══════════════════════════════════════════════════════════════════════╗ \n");
     printf("  ║                    Welcome to the System Sizer                       ║ \n");
     printf("  ║                          (v. 20220928b)                              ║ \n");
     printf("  ╠══════════════════════════════════════════════════════════════════════╣ \n");
     printf("  ║ This application's source is available under the MIT License and is  ║ \n");
     printf("  ║            provided AS-IS with NO WARRANTIES of ANY KIND!            ║ \n");                 
     printf("  ║     For more information, consult LICENSE.txt that accompanied       ║ \n");
     printf("  ║                             this program.                            ║ \n");
     printf("  ╠══════════════════════════════════════════════════════════════════════╣ \n");
     printf("  ║        System Sizer © 2022 N.T. Crotser - ntc@crotsertech.co         ║ \n");
     printf("  ╚══════════════════════════════════════════════════════════════════════╝ \n\n");



          double multiply;
          double capacity;
     double f3;
     double hardness;
     double salt;
     double fe;
     double mg;
// Formula is SIZE * MODE / HARNESS + IRON + MANGANESE * RESERVE
// Translated is "f3 * salt / hardness + fe + mg * reserve"

     char sentinel = ' '; // sentinel for while loop

     while(sentinel != 'q') // Use while loop instead of goto
     {

     printf("Enter system size in cubic feet (f3):   ");
     scanf("%lf", &f3);
     printf("\n\n");

     
          
     //     printf("Enter the Salt Mode setting in grains");
          printf("        ╔════════Quick Reference════════╗\n");
          printf("        ║     High Efficiency = 15000   ║\n");  // 15000 grains per @ 3lb/cuft regenerant per HT89UF/DF spec diagram.
          printf("        ║        Standard = 25000       ║\n"); // 25000 grains per @ 6lb/cuft regenerant per HT89UF/DF spec diagram.
          printf("        ║     High Capacity = 30000     ║\n");  // 30000 grains per @ 10lb/cuft regenerant per HT89UF/DF spec diagram.
          printf("        ╚═══════════════════════════════╝\n");
          printf("Enter the Salt Mode Setting in grains: "); // Need to add functionality to just select mode rather than input number.
     scanf("%lf", &salt);
     printf("\n\n");

        printf("        Iron Result:   ");
        scanf("%lf", &fe);
     printf("\n\n");

                printf("        Manganese Result:   ");
        scanf("%lf", &mg);
     printf("\n\n");

       printf("        Enter the RAW water hardness:   ");
       scanf("%lf", &hardness);
       multiply = f3 * salt / hardness + fe * 4 + mg * 8 * .10;
     printf("\n\n");


            capacity = f3 * salt ;
       multiply = hardness + fe * 4 + mg * 8;
       float gal = (capacity / multiply * 0.90 ); // System capacity PLUS compensation of 10% for system reserve.


       printf("*This system's capacity is: %.0f gallons.*\n\n", gal);  // TRUE system capacity.

       printf("Press 'q' to Quit otherwise ⬎ "); // Illusory choice, 'q' is the only recognized choice
       scanf("%c", &sentinel);
            printf("\n\n");
     }
}
