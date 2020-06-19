#include<stdio.h>
#include<string.h>
struct lib
{
    char title[20];
    char author[20];
    float price;
    int pages;
    int year;
    int bookid;
};

int main()
{
    struct lib l[10];
    int min2=1000;
    int temp;
    char xyz[10];
     int max=l[0].price,min=l[0].price;
     int max1=l[0].pages, min1=l[0].pages;
     char temp1[10];
    int avg=0,total=0;
    int n,i;
    printf("Enter the number of records\n");
    scanf("%d",&n);
    printf("Enter the deatails\n");
    for(i=0;i<n;i++)
    {   printf("Enter the book ID\n");
        scanf("%d",&l[i].bookid);
        printf("Enter title\n");
        scanf("%s",l[i].title);
        printf("Enter author name\n");
        scanf("%s",l[i].author);
        printf("Enter the price(Max price 1000)\n");
        scanf("%f",&l[i].price);
        printf("Enter the number of pages\n");
        scanf("%d",&l[i].pages);
        printf("Enter the year\n");
        scanf("%d",&l[i].year);
    }
    printf("1.Display all records\n");
    printf("2.Display based on unique id");
    printf("3.Display using Title\n");
    printf("4.Average of book prices\n");
    printf("5.Find Min/Max of all prices\n");
    printf("6.Find max number of pages\n");
    printf("7.Min price for a particular author\n");
    printf("8.Book releases in a particular year\n");


    int ch;
    do{
    scanf("Enter choice \n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1: for(i=0;i<n;i++)
                {


            printf("Unique id=%d\n",l[i].bookid);
            printf("Title=%s\n",l[i].title);
            printf("Author name=%s\n",l[i].author);
            printf("price=%d\n",l[i].price);
            printf("year=%d\n",l[i].year);
                }
            break;
        case 2:

            printf("Enter the unique id\n");
            scanf("%d",&temp);
            for(i=0;i<n;i++)
            {
                if(temp==l[i].bookid)
                {
                    printf("Unique id=%d\n",l[i].bookid);
            printf("Title=%s\n",l[i].title);
            printf("Author name=%s\n",l[i].author);
            printf("price=%d\n",l[i].price);
            printf("year=%d\n",l[i].year);
                }
            }
            break;

        case 3:

            printf("Enter the book title\n");
            scanf("%s",xyz);
            for(i=0;i<n;i++)
            {
                if(strcmp(xyz,l[i].title)==0)
                {
                    printf("Unique id=%d\n",l[i].bookid);
            printf("Title=%n",l[i].title);
            printf("Author name=%s\n",l[i].author);
            printf("price=%d\n",l[i].price);
            printf("year=%d\n",l[i].year);
                }
            }
            break;

        case 4:

            for (i=0;i<n;i++)
            {
                total=total+l[i].price;
            }
            avg=total/n;
            printf("The average =%d\n ",avg);
            break;

        case 5:
            max=l[0].price;
            min=l[0].price;
            for(i=0;i<n;i++)
            {
                if(l[i].price>=max)
                {
                    max=l[i].price;
                }
                if(l[i].price<=min)
                {
                    min=l[i].price;
                }
            }
                printf("Maximum price=%d and Minimum price=%d\n",max,min);


            break;
        case 6:
            max1=l[0].pages;
            min1=l[0].pages;
            for(i=0;i<n;i++)
            {
                if(l[i].pages>=max1)
                {
                    max1=l[i].pages;
                }
                if(l[i].pages<=min1)
                {
                    min1=l[i].pages;
                }
            }
                printf("Maximum pages=%d and Minimum pages=%d\n",max1,min1);

            break;

            case 7:



            printf("Enter author name\n");
            scanf("%s",temp1);
            for(i=0;i<n;i++)
            {
                if(strcmp(temp1,l[i].author)==0)
                {

                    if(l[i].price<min2)
                    {
                        min2=l[i].price;
                    }
                }

            }
            printf("The min price for the given author=%d\n",min2);
            break;

            case 8:
                printf("Enter the year\n");
                int cnt=0; int tempy;
                scanf("%d",&tempy);
                for(i=0;i<n;i++)

                {
                    if(tempy==l[i].year)
                    {
                        cnt++;
                    }
                }
                printf("The number of releases for the year=%d\n",cnt);
                break;

    } }while(ch<=8);
    return 0;



}
