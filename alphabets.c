#include <stdio.h>
#include <stdlib.h>
void CapitalA();
void CapitalB();
void CapitalC();
void CapitalD();
void CapitalE();
void CapitalF();
void CapitalG();
void CapitalH();
void CapitalI();
void CapitalJ();
void CapitalK();
void CapitalL();
void CapitalM();
void CapitalN();
void CapitalO();
void CapitalP();
void CapitalQ();
void CapitalR();
void CapitalS();
void CapitalT();
void CapitalU();
void CapitalV();
void CapitalX();
void CapitalY();
void CapitalZ();
int main()
{
    CapitalA();
    CapitalB();
    CapitalC();
    CapitalD();
    CapitalE();
    CapitalF();
    CapitalG();
    CapitalH();
    CapitalI();
    CapitalJ();
    CapitalK();
    CapitalL();
    CapitalM();
    CapitalN();
    CapitalO();
    CapitalP();
    CapitalQ();
    CapitalR();
    CapitalS();
    CapitalT();
    CapitalU();
    CapitalV();
    CapitalX();
    CapitalY();
    CapitalZ();
    return 0;
}
void CapitalA()
{
    printf("\n");
    int i,j,k;
    for(i=4,k=4;i>=0;i--,k++)
    {
        for(j=0;j<9;j++)
        {
            if(j==i)
            {
                printf("* ");
            }
            if(j==k && j>3)
            {
                 printf("* ");
            }
             else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    for(i=0;i<5;i++)
    {
       for(j=0;j<=9;j++)
       {
          if(i==0)
          {
                printf("* ");
          }
          else if((j==0 || j==9))
          {
               printf("* ");
          }
          else
          {
                   printf("  ");
          }
       }
       printf("\n");
    }
}
void CapitalB()
{
    printf("\n");
    int i,j;
    for(i=0;i<9;i++)
    {
       for(j=0;j<9;j++)
       {
          if((j!=8) && (i==0 || i==8  || i==4))
          {
                printf("* ");
          }
          else if((j==8) && (i==0 || i==8  || i==4))
          {
                printf(" ");
          }
          else if(j==0 || j==8)
          {
               printf("* ");
          }
          else
          {
                   printf("  ");
          }
       }
       printf("\n");
    }
}
void CapitalC()
{
    int i,j;
    printf("\n");
    for(i=0;i<9;i++)
    {
       for(j=0;j<8;j++)
       {
         if((j!=0) && (i==0 || i==8))
         {
                printf("* ");
         }
         else if((j==0) && (i==0 || i==8))
         {
           printf(" ");
         }
         else if(j==0)
         {
             printf("* ");
         }
         else
         {
             printf("  ");
         }
       }
       printf("\n");
    }
}
void CapitalD()
{
    printf("\n");
    int i,j;
    for(i=0;i<9;i++)
    {
       for(j=0;j<9;j++)
       {
          if((j!=8) && (i==0 || i==8))
          {
                printf("* ");
          }
          else if((j==8) && (i==0 || i==8))
          {
                printf(" ");
          }
          else if(j==1 || j==8)
          {
                printf("* ");
          }
          else
          {
                printf("  ");
          }
       }
       printf("\n");
    }
}
void CapitalE()
{
    printf("\n");
    int i,j;
    for(i=0;i<9;i++)
    {
      for(j=0;j<9;j++)
      {
          if(i==0 || i==8  || i==4)
          {
                printf("* ");
          }
          else if(j==0)
         {
           printf("* ");
         }
     }
       printf("\n");
   }
}
void CapitalF()
{
    printf("\n");
    int i,j;
    for(i=0;i<9;i++)
    {
      for(j=0;j<9;j++)
      {
        if(i==0 || i==4)
        {
           printf("* ");
        }
       else if(j==0)
       {
           printf("* ");
       }
      }
      printf("\n");
    }
}
void CapitalG()
{
     printf("\n");
    int i,j;
    for(i=0;i<=9;i++)
    {
          for(j=0;j<9;j++)
          {
              if((j!=0) && (i==0 || i==9 || (i==4 && j>4)))
              {
                   printf("* ");
              }
               else if(j==0 && (i==0 || i==9))
              {
                   printf(" ");
              }
              else if(j==0 || (j==8 && i>4))
              {
                   printf("* ");
              }
              else
              {
                   printf("  ");
              }
          }
           printf("\n");
    }
}
void CapitalH()
{
    printf("\n");
    int i,j;
    for(i=0;i<9;i++)
    {
       for(j=0;j<9;j++)
       {
          if(i==4)
          {
                printf("* ");
          }
          else if(j==0 || j==8)
          {
                printf("* ");
          }
          else
          {
                 printf("  ");
          }
       }
           printf("\n");
       }
}
void CapitalI()
{
    printf("\n");
    int i,j;
    for(i=0;i<9;i++)
    {
       for(j=0;j<9;j++)
       {
          if(i==0 || i==8)
          {
                printf("* ");
          }
          else if(j==4)
          {
                printf("* ");
          }
          else
          {
                printf("  ");
          }
        }
           printf("\n");
     }
}
void CapitalJ()
{
     printf("\n");
    int i,j,k;
    for(i=0;i<9;i++)
    {
       for(j=0;j<9;j++)
       {
         if(i==0)
         {
             printf("* ");
         }
         else if(i==8)
         {
            for(k=0;k<4;k++)
            {
                printf("* ");
            }
            break;
        }
        else if(j==4)
        {
            printf("*");
        }
        else
        {
            printf("  ");
        }
      }
           printf("\n");
       }
}
void CapitalK()
{
    int i,j;
    printf("\n");
    for(i=0;i<9;i++)
    {
       for(j=0;j<9;j++)
       {
          if(j==3)
          {
             printf("* ");
          }
          else if((j==i && i>3) || (j==8-i && i<4))
          {
           printf("* ");
          }
          else
          {
              printf("  ");
          }
       }
        printf("\n");
    }
}
void CapitalL()
{
   int i,j;
    printf("\n");
    for(i=0;i<9;i++)
    {
       for(j=0;j<9;j++)
       {
          if(i==8)
          {
             printf("* ");
          }
          else if(j==0)
          {
           printf("*");
          }
       }
        printf("\n");
    }
}
void CapitalM()
{
   int i,j;
    printf("\n");
    for(i=0;i<9;i++)
    {
       for(j=0;j<9;j++)
       {
          if(j==0 || j==8)
          {
             printf("* ");
          }
          else if((i==j || j==8-i) && i<=4)
          {
           printf("* ");
          }
          else
          {
              printf("  ");
          }
       }
        printf("\n");
    }
}
void CapitalN()
{
   int i,j;
    printf("\n");
    for(i=0;i<9;i++)
    {
       for(j=0;j<9;j++)
       {
          if(j==0 || j==8)
          {
             printf("* ");
          }
          else if(i==j)
          {
           printf("* ");
          }
          else
          {
              printf("  ");
          }
       }
        printf("\n");
    }
}
void CapitalO()
{
    printf("\n");
    int i,j;
    for(i=0;i<=9;i++)
    {
          for(j=0;j<9;j++)
          {
              if(j!=0 && (i==0 || i==9))
              {
                   printf("* ");
              }
               else if(j==0 && (i==0 || i==9))
              {
                   printf(" ");
              }
              else if(j==0 || j==8)
              {
                   printf("* ");
              }
              else
              {
                   printf("  ");
              }
          }
           printf("\n");
    }
}
void CapitalP()
{
     printf("\n");
    int i,j;
    for(i=0;i<=9;i++)
    {
      for(j=0;j<9;j++)
      {
         if((j!=8) && (i==0 || i==4))
         {
            printf("* ");
         }
         else if((j==8) && (i==0 || i==4))
         {
            printf(" ");
         }
         else if((j==8) && (i<4) )
         {
            printf("* ");
         }
         else if(j==0)
         {
            printf("* ");
         }
         else
         {
             printf("  ");
         }
      }
       printf("\n");
    }
}
void CapitalQ()
{
printf("\n");
    int i,j;
    for(i=0;i<9;i++)
    {
          for(j=0;j<9;j++)
          {
              if(j!=0 && (i==0 || i==8))
              {
                   printf("* ");
              }
               else if(j==0 && (i==0 || i==8))
              {
                   printf(" ");
              }
              else if(j==0 || j==8)
              {
                   printf("* ");
              }
              else if(j==i && i>4)
              {
                   printf("* ");
              }
              else
              {
                   printf("  ");
              }
          }
           printf("\n");
    }
}
void CapitalR()
{
     printf("\n");
    int i,j;
    for(i=0;i<=9;i++)
    {
      for(j=0;j<9;j++)
      {
         if((j!=8) && (i==0 || i==4))
         {
            printf("* ");
         }
         else if((j==8) && (i==0 || i==4))
         {
            printf(" ");
         }
         else if( j==0 || j==8 )
         {
            printf("* ");
         }
         else
         {
             printf("  ");
         }
      }
       printf("\n");
    }
}
void CapitalS()
{
    printf("\n");
    int i,j;
    for(i=0;i<9;i++)
    {
      for(j=0;j<9;j++)
      {
         if((j!=0) && (i==0 || i==4 || i==8))
         {
            printf("* ");
         }
         else if((j==0) && (i==0 || i==4 || i==8))
         {
            printf(" ");
         }
         else if(j==0 && i<=4)
         {
             printf("*");
         }
         else if(j==8 && i>4)
         {
             printf("*");
         }
         else
         {
             printf("  ");
         }
      }
       printf("\n");
    }
}
void CapitalT()
{
    printf("\n");
    int i,j;
    for(i=0;i<9;i++)
    {
       for(j=0;j<9;j++)
       {
          if(i==0)
          {
                printf("* ");
          }
          else if(j==4)
          {
                printf("* ");
          }
          else
          {
                printf("  ");
          }
        }
           printf("\n");
     }
}
void CapitalU()
{
    printf("\n");
    int i,j;
    for(i=0;i<=9;i++)
    {
          for(j=0;j<9;j++)
          {
              if(j!=0 && (i==9))
              {
                   printf("* ");
              }
               else if(j==0 && (i==9))
              {
                   printf(" ");
              }
              else if(j==0 || j==8)
              {
                   printf("* ");
              }
              else
              {
                   printf("  ");
              }
          }
           printf("\n");
    }
}
void CapitalX()
{
    printf("\n");
    int i,j;
    for(i=0;i<9;i++)
    {
          for(j=0;j<9;j++)
          {
                if(i==j)
                {
                    printf("* ");
                }
                else if(j==8-i)
                {
                    printf("* ");
                }
                else{
                    printf("  ");
                }
          }
           printf("\n");
    }
}
void CapitalV()
{
    printf("\n");
    int i,j;
    for(i=0;i<5;i++)
    {
          for(j=0;j<9;j++)
          {
                if((i==j && j<5) || (j==8-i && j>=5))
                {
                    printf("* ");
                }
                else{
                    printf("  ");
                }
          }
           printf("\n");
    }
}
void CapitalY()
{
    printf("\n");
    int i,j;
    for(i=0;i<9;i++)
    {
          for(j=0;j<9;j++)
          {
                if(i==j && i<4)
                {
                    printf("* ");
                }
                else if(j==8-i)
                {
                    printf("* ");
                }
                else{
                    printf("  ");
                }
          }
           printf("\n");
    }
}
void CapitalZ()
{
    printf("\n");
    int i,j;
    for(i=0;i<9;i++)
    {
          for(j=0;j<9;j++)
          {
                if(i==0 || i==8)
                {
                    printf("* ");
                }
                else if(j==8-i)
                {
                    printf("* ");
                }
                else{
                    printf("  ");
                }
          }
           printf("\n");
    }
}
