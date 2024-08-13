#include<stdio.h>
int main()
{
    int i=1;
    char colour,signal;
    printf("     Madurai Traffic signal     \n");
    printf("Enter the colour\n");
    scanf("%c",&signal);
    printf("Enter the seconds\n");
    scanf("%d",&i);
    switch(signal)
    {

        case'R':

        if(i<=30)
        {
            printf("Red\n");
            printf("stop the vehicle\n");
        }
              else
              {

              printf("Go next signal\n");


        }
    i++;
        break;

    case 'Y':

        if(i<=30)
        {
            printf("Yelllow\n");
            printf("vehicle is Ready\n");
        }
               else
               {

               printf("Go next signal\n");
    }
       i++;
          break;
    case'G':
        if(i<=30)
        {
            printf("Green\n");
            printf("vehicle is go\n");
        }
        else
        {
            printf("signal is not work\n");

}
}       }






