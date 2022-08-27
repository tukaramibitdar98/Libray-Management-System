/*  Create a structure Book with data members as bname, id, author, price. 
	Accept the values of all these members from user and display them
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Book
{
	char bookname[30];
	int id;
	char author[30];
	double price;
}Book;

void main()
{
	Book b1[100];

   	char bookname[30];
   	int i,j, keepcount;
   	i=j=keepcount = 0;
   	int c,p;
   	
   	do
   	{
        printf("\n\n ***************************************************** ");
     	printf("\n 1. Add book information");
     	printf("\n 2. Display book information");
     	printf("\n 3. No of books in the library");
     	printf("\n 4. Search the book in the library");
      	//printf("\n 5. Exit");
      	printf("\n\n ***************************************************** ");
     	
		printf("\n\n Choose one option from above : ");
		scanf("\n%d",&c);
	
		printf("\n You selected option : %d \n",c);
		
		if(c==1)
		{
			printf("\n\n Add book information ");
            printf ("\n\n Enter book name = ");
            scanf ("%s",&b1[i].bookname);
            printf ("\n Enter book ID = ");
            scanf ("%d",&b1[i].id);
            printf ("\nEnter author name = ");
            scanf ("%s",&b1[i].author);
            printf ("\nEnter price = ");
            scanf ("%f",&b1[i].price);
            keepcount++;
            i++;
		}
		else if(c==2)
		{	
		 printf("you have entered the following information\n");
            for(i=0; i<keepcount; i++)
			{
				printf("\n\n------------------------------------------------------");
				printf("\n Book no. : %d ", i);
               	printf ("\n\t Book name = %s\n",b1[i].bookname);
               	printf ("\t Book ID = %d\n",b1[i].id);
				printf ("\t Author name = %s\n",b1[i].author);
                printf ("\t Price = %f\n",b1[i].price);
                printf("\n\n------------------------------------------------------");
            }
            
		}
		else if(c==3)
		{
			printf("\n\n------------------------------------------------------");
            printf("\n No of books in library : %d", keepcount);
            printf("\n\n------------------------------------------------------");
            
		}
		else if(c==4)
		{
		//searching code
            
		}
		else if(c==5)
		{
			 exit (0);
		}	
	
		
      else
		printf("\n Please enter correct choice \n");
	
	printf("\n Do you want to continue : \n If yes enter y , and if no enter n : ");
	scanf("\n%c",&p);
	}while(p=='y');
	
	printf("\n\n\n");
}

/*
Output :
 Enter book name : Quantitative

 Enter book id : 118

 Enter book author name : RSAgarwal

 Enter book price : 800


 -------- Book Information --------------------
 Book Name              : Quantitative
 Enter Book id          : 118
 Enter Book author name : RSAgarwal
 Enter Book price       : Rs. 800.000000

*/
