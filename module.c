#include<stdio.h>
#include<string.h>
#include<ctype.h>
int regi(int);
void Login(int);
void Display();
void hotel();
void food();
void Byhotel(char *);
void Byfood(char[]);
void order();
void cancel();
struct swiggy
{
  int price,name,total;
  char email[20],pass[20],food[20];
}a[10000];
struct hotel
{
    int price1,price2,price3,quantity1,quantity2,quantity3;
    char hotel[20],food1[20],food2[20],food3[20];
};
struct hotel b[4]={
    {15,10,20,5,5,5,"SaravanaBhavan","Idly","Omlet","Dosai"},
    {70,130,10,5,5,5,"HyderabadBiryani","ChickenBiryani","MuttonBiryani","Kalaki"},
    {15,30,15,5,5,5,"PalamuthirSoolai","LemonJuice","MuskMelon","PappayaJuice"},
    {10,10,20,5,5,5,"CovaiDeepan","Idly","Omlet","Dosai"}
};
int main()
{
    int op,count=0,p;
    a[0].total=0;
    printf("---Welcome to our Shopping Module---\n");
    do{
    printf("Enter the option\n1=>Register\n2=>Login\n3=>Search Food\n4=>Order Food\n5=>Cancel\n");
    scanf("%d",&op);
    switch(op)
    {
         case 1:
           count=regi(count);
           break;
        case 2:
           Login(count);
           break;
        case 3:
           Display();
           break;
        case 4:
           order();
           break;
        case 5:
          cancel();
          break;
        default:
           printf("Enter the Correct Option\n");
    }
    printf("To Continue Enter 1:\t");
    scanf("%d",&p);
    }while(p==1);
    return 0;
}
int regi(int i)
{
    int j=0,length,passlength,mail=0,pass=0,mail1=0,mail2=1,mail3=0,small=0,cap=0,spec=0,num=0;
    printf("Enter the E-mailId:\t");
    scanf("%s",a[i].email);
    printf("Enter the Password:\t");
    scanf("%s",a[i].pass);
    length=strlen(a[i].email);
    passlength=strlen(a[i].pass);
    if(a[i].email[length-4]==46)
    {
        mail1=1;
    }
    for(j=0;j<length;j++)
    {
       if(a[i].email[j]>=65 &&  a[i].email[j]<=90)
       {
            mail2=0;
       }
       if(a[i].email[j]==64)
       {
           if((isalnum(a[i].email[j-1])!=0) && (isalpha(a[i].email[j+1])!=0))
           {
               mail3=1;
           }
       }
    }
    if(mail1==1 && mail2==1 && mail3==1)
    {
        mail=1;
    }
    else
    {
        printf("Invalid Syntax\n");
    }
    for(j=0;j<passlength;j++)
    {

       if(a[i].pass[j]>=64 &&  a[i].pass[j]<=91)
       {
            cap=1;
       }
       else if(a[i].pass[j]>=97 &&  a[i].pass[j]<=122)
       {
            small=1;
       }
       else if(isdigit(a[i].pass[j])!=0)
       {
            num=1;
       }
       else
       {
           spec=1;
       }
    }
    if(small==1 && cap==1 && num==1 && spec==1)
    {
         pass=1;
    }
    else
    {
        printf("Alteast one small,capital,number and special characters\n");
    }
    if(mail==1 && pass==1)
    {
        printf("--Register Successfully--\n");
        i=i+1;
        return i;
    }
    else
    {
         printf("--Unsuccessfull--\n");
         return i;
    }
}
void Login(int i)
{
    int j=0;
    char email[20],pass[20];
    printf("Enter the E-mailId:\t");
    scanf("%s",email);
    printf("Enter the Password:\t");
    scanf("%s",pass);
    for(j=0;j<=i;j++)
    {
        if(strcmp(email,a[j].email)==0 && strcmp(pass,a[j].pass)==0)
        {
            printf("--Login Succesfully--\n");
            j=1;
            break;
        }
    }
    if(j!=1)
    {
        printf("--Invalid Credentials--\n");
    }
}
void Display()
{
  int i;
  printf("1=>Available Hotels\n2=>Available Foods\n");
  scanf("%d",&i);
  if(i==1)
  {
    hotel();
  }
  if(i==2)
  {
    food();
  }

}
void hotel()
{
   char name[20];
   printf("%s\n",strupr(b[0].hotel));
   printf("%s\n",strupr(b[1].hotel));
   printf("%s\n",strupr(b[2].hotel));
   printf("%s\n",strupr(b[3].hotel));
   puts("Enter the Selected Hotel:");
   scanf("%s",name);
   Byhotel(name);
}
void Byhotel(char *str)
{
    int i,j,hotel=0;
     for(i=0;i<4;i++)
     {
         j=strncmp(strlwr(str),strlwr(b[i].hotel),strlen(str));
         if(j==0)
         {
                hotel=1;
                printf("Available food in ");
                printf("%s\n",strupr(b[i].hotel));
                printf("RS\tFOOD\n");
               if(b[i].quantity1>0)
               {
                 printf("%d\t",b[i].price1);
                 printf("%s\n",b[i].food1);
               }
               if(b[i].quantity2>0)
               {
                 printf("%d\t",b[i].price2);
                 printf("%s\n",b[i].food2);
               }
               if(b[i].quantity3>0)
              {
                printf("%d\t",b[i].price3);
                printf("%s\n",b[i].food3);
              }
         }
   }
    if(hotel!=1)
    {
           printf("Unavailable Hotel\n");

    }

}
void food()
{
    int i=0,k,j=0;
    char name[20];
    printf("RS\tFOOD\n");
            if(b[i].quantity1>0)
            {
              printf("%d\t",b[i].price1);
              printf("%s\n",b[i].food1);
            }
            if(b[i].quantity2>0)
            {
              printf("%d\t",b[i].price2);
              printf("%s\n",b[i].food2);
            }
            if(b[i].quantity3>0)
            {
              printf("%d\t",b[i].price3);
              printf("%s\n",b[i].food3);
            }
    for(i=1;i<4;i++)
    {
      for(k=0;k<i;k++)
      {
          if(strcmp(strlwr(b[i].food1),strlwr(b[k].food1))==0 || strcmp(strlwr(b[i].food1),strlwr(b[k].food2))==0 ||
                       strcmp(strlwr(b[i].food1),strlwr(b[k].food3))==0)
          {
              j=1;
              break;
           }
           else
           {
               j=0;
           }
      }
      if(j!=1)
      {
            if(b[i].quantity1>0)
            {
              printf("%d\t",b[i].price1);
              printf("%s\n",b[i].food1);
            }
            if(b[i].quantity2>0)
            {
              printf("%d\t",b[i].price2);
              printf("%s\n",b[i].food2);
            }
            if(b[i].quantity3>0)
            {
              printf("%d\t",b[i].price3);
              printf("%s\n",b[i].food3);
            }
      }
   }
   puts("Enter the Food:");
   scanf("%s",name);
   printf("Searching Results for ");
   printf("%s\n",name);
   Byfood(name);
}
void Byfood(char str[])
{
    int a,c=0,i;
    for(i=0;i<4;i++)
    {
      a=strncmp(strlwr(str),strlwr(b[i].food1),strlen(str));
      if(a==0)
      {
          c=1;
          printf("%s\n",strupr(b[i].hotel));
      }
      a=strncmp(strlwr(str),strlwr(b[i].food2),strlen(str));
      if(a==0)
      {
          c=1;
          printf("%s\n",strupr(b[i].hotel));
      }
      a=strncmp(strlwr(str),strlwr(b[i].food3),strlen(str));
      if(a==0)
      {
           c=1;
          printf("%s\n",strupr(b[i].hotel));
      }
    }
    if(c!=1)
    {
        printf("Unavailable Food\n");
    }
}
void order()
{
    int quantity,i,order=0,price;
    char food[20],hotel[20];
    printf("Enter the Food item You want to order:\t");
    scanf("%s",food);
    printf("Enter the Quantity:\t");
    scanf("%d",&quantity);
    printf("Enter the Available Hotel For ur Food:\t");
    scanf("%s",hotel);
    for(i=0;i<4;i++)
    {
        if(strcmp(strupr(b[i].hotel),strupr(hotel))==0 && strcmp(strupr(b[i].food1),strupr(food))==0)
        {
            if(b[i].quantity1>0)
            {
                order=1;
                b[i].quantity1=b[i].quantity1-quantity;
                if(b[i].quantity1<0)
                {
                    printf("Unavailable Count\n");
                    b[i].quantity1=b[i].quantity1+quantity;
                    break;
                }
                else
                {
                     printf("Order Suceesfully\n");
                     price=b[i].price1;
                     printf("Bill = %d\n",price*quantity);
                     a[0].total=a[0].total+(price*quantity);
                     printf("Total Bill = %d\n",a[0].total);
                     break;
                }
            }
            else
            {
                 printf("--Food Not Available--\n");
            }
        }
        else if(strcmp(strupr(b[i].hotel),strupr(hotel))==0 && strcmp(strupr(b[i].food2),strupr(food))==0)
        {
            if(b[i].quantity2>0)
            {
                order=1;
                b[i].quantity2=b[i].quantity2-quantity;
                if(b[i].quantity2<0)
                {
                    printf("Unavailable Count\n");
                    b[i].quantity2=b[i].quantity2+quantity;
                    break;
                }
                else
                {
                     printf("Order Suceesfully\n");
                     price=b[i].price2;
                     printf("Bill = %d\n",price*quantity);
                     a[0].total=a[0].total+(price*quantity);
                     printf("Total Bill = %d\n",a[0].total);
                     break;
                }
            }
            else
            {
                 printf("--Food Not Available--\n");
            }
        }
        else if(strcmp(strupr(b[i].hotel),strupr(hotel))==0 && strcmp(strupr(b[i].food3),strupr(food))==0)
        {
            if(b[i].quantity3>0)
            {
                order=1;
                b[i].quantity3=b[i].quantity2-quantity;
               if(b[i].quantity3<0)
                {
                    printf("Unavailable Count\n");
                    b[i].quantity3=b[i].quantity3+quantity;
                    break;
                }
                else
                {
                     printf("Order Suceesfully\n");
                     price=b[i].price3;
                     printf("Bill = %d\n",price*quantity);
                    a[0].total=a[0].total+(price*quantity);
                     printf("Total Bill = %d\n",a[0].total);
                     break;
                }
            }
            else
            {
                 printf("--Food Not Available--\n");
            }
        }
    }
    if(order!=1)
    {
        printf("\nEnter Avaliable Food and Hotel");
    }
}
void cancel()
{
    exit(0);
}
