#include <stdio.h>
#include <stdlib.h>

int main()
{


     printf("  ╔══════════════════════════════════════════════════════════════════════╗ \n");
     printf("  ║                    Welcome to the System Sizer                       ║      \n");
     printf("  ║                          (v. 20220928)                               ║ \n");
     printf("  ╠══════════════════════════════════════════════════════════════════════╣            \n");
     printf("  ║ This application's source is available under the MIT License and is  ║ \n");
     printf("  ║            provided AS-IS with NO WARRANTIES of ANY KIND!            ║ \n");                 
     printf("  ║     For more information, consult LICEENSE.txt that accompanied      ║ \n");
     printf("  ║                             this program.                            ║ \n");
     printf("  ╠══════════════════════════════════════════════════════════════════════╣ \n");
     printf("  ║        System Sizer © 2022 N.T. Crotser - ntc@crotsertech.co         ║ \n");
     printf("  ╚══════════════════════════════════════════════════════════════════════╝ \n\n");



          double multiply;
     double people;
     double hardness;
     double iron;
     double manganese;

     char sentinel = ' '; // sentinel for while loop

     printf("Number of People in Home:   ");
     scanf("%lf", &people);

     while(sentinel != 'q') // Use while loop instead of goto
     {
        printf("Iron Result:   ");
        scanf("%lf", &iron);

                printf("Manganese Result:   ");
        scanf("%lf", &manganese);

       printf("Enter the RAW water hardness:   ");
       scanf("%lf", &hardness);
       multiply = people * 75 * hardness + iron * 4 + manganese * 8;

       /* printf("The Item's List Price is: %f\n", listprice); */

       printf("*Your Target is: %.0f grains *\n\n", multiply);  // Limit trailing zeros

       printf("Press 'q' to Quit otherwise → "); // Illusory choice, 'q' is the only recognized choice
       scanf("%c", &sentinel);
     }
}
