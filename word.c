#include <stdio.h>
#include <stdlib.h>
void group();
int main()
{
    printf("20 DONS\n");
    group();
}
void group()
{
    int i,j;
    for(i=0;i<9;i++)
    {
          for(j=0;j<60;j++)
          {
              //2
              if(j<=8)
              {
                if((j!=8) && (i==0))
                {
                    printf("* ");
                }
                else if((j==8) && (i==0))
                {
                    printf("  ");
                }
                else if(i==8 && j!=0)
                {
                    printf("* ");
                }
                else if(i==8 && j==0)
                {
                    printf("  ");
                }
                else if(i==4 && j!=0 && j!=8)
                {
                    printf("* ");
                }
                else if(i==4 && (j==0 || j==8))
                {
                    printf("  ");
                }
                else if((j==8 && i<=4) || (j==0 && i>4))
                {
                    printf("* ");
                }
                else{
                    printf("  ");
                }
              }
              //0
              else if(j<=17)
              {
                if(j!=9 && (i==0 || i==8))
                {
                   printf("* ");
                }
                else if(j==9 && (i==0 || i==8))
                {
                   printf(" ");
                }
                else if(j==9 || j==17)
                {
                   printf("* ");
                }
                else
                {
                   printf("  ");
                }
             }
             else if(j<=19)
             {
                printf("  ");
             }
             //D
             else if(j<=28)
             {
                if((j!=28) && (i==0 || i==8))
                {
                   printf("* ");
                }
                else if((j==28) && (i==0 || i==8))
                {
                  printf("  ");
                }
                else if(j==21 || j==27)
                {
                  printf("* ");
                }
                else
                {
                  printf("  ");
                }
           }
           //O
           else if(j<=37)
           {
              if(j!=29 && (i==0 || i==8))
              {
                   printf("* ");
              }
               else if(j==29 && (i==0 || i==8))
              {
                   printf("  ");
              }
              else if(j==29 || j==37)
              {
                   printf("* ");
              }
              else
              {
                   printf("  ");
              }
            }
            //N
          else if(j<=46)
          {
              if((i==0 || i==8) && (j==38 || j==46))
              {
                printf(" *");
              }
              else if(j==38 || j==46)
              {
                printf("* ");
              }
              else if((i+38)==j)
              {
                 printf("* ");
              }
              else
              {
                 printf("  ");
              }
          }

          //S
          else if(j<=55)
          {
             if((j!=47) && (i==0 || i==4 || i==8))
             {
                  printf("* ");
             }
             else if(j==47 && i==0)
             {
                 printf("  ");
             }
             else if((j==47) && (i==4 || i==8))
             {
                 printf(" ");
             }
             else if(j==47 && i<=4)
             {
               printf("*");
             }
             else if(j==55 && i>4)
            {
                printf("*");
            }
            else
            {
               printf("  ");
             }
          }
         }
           printf("\n");
    }
    printf("\n");
}
