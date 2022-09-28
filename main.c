#include <stdio.h>
#include <stdlib.h>

int main()
{

     printf("  TTTTTTTT   HH    HH   HH    HH    EEEEE   WW  WW  WW    AA   YY   YY\n");
     printf("     TT      HH    HH   HH    HH    EE       WW WW WW   AA  AA  YY  YY\n");
     printf("     TT      HHHHHHHH   HHHHHHHH    EEEEE     WWWWWW    AAAAAA   YYYYY\n");
     printf("     TT      HH    HH   HH    HH    EE        WW  WW    AA  AA      YY\n");
     printf("     TT      HH    HH   HH    HH    EEEEE     WW  WW    AA  AA   YYYYY\n");
     printf("\n");
     printf("                                                   OOO   FFFF  IIII  LL\n");
     printf("                                                  OO OO  FF     II   LL\n");
     printf("                                                  OO OO  FFFF   II   LL\n");
     printf("                                                   OOO   FF    IIII  LLLL\n");
     printf("   ---------------------------------------------------------------------------");
     printf("      This application's source is available under the GLL version 0.3      \n");
     printf("           and is provided AS-IS with NO WARRANTIES of ANY KIND!            \n");
     printf("    For more information, consult LICENSE.txt that accompanied this program \n");
     printf("                      System Sizer © 2019 N.T. Crotser                      \n\n");


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
