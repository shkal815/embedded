#include <stdio.h>

int main()
{
    int number_of_item,the_cost_of_the_items=0,i=0, array_of_items[100], condation_of_order,count =0,condation_of_overnight;
    float price_of_shipping=0;
    printf(" welcome in our shop \n ");
    printf("1:item_1     5$\n 2:item_2     9$\n 3:item_3     11$\n 4:item_4     15$\n 5:item_5     16$\n");
more:
    printf("please enter the number of items you want  \n ");
    scanf(" %i",&number_of_item);
    if(number_of_item>5)
    {
        printf("please enter the correct number between 1 to 5 \n"); // to avoid any human error in input of number of item
        goto more;
    }
    array_of_items[count]=number_of_item;
    count++;// to count the number of items
    switch(number_of_item) //to   cost of shipping
    {
    case 1:
        price_of_shipping+=2;
        the_cost_of_the_items+=5;
        break;
    case 2:
        the_cost_of_the_items+=9;
        price_of_shipping+=2;
        break;
    case 3:
        price_of_shipping+=3;
        the_cost_of_the_items+=11;
        break;
    case 4:
        the_cost_of_the_items+=15;
        price_of_shipping+=3;
        break;
    case 5:
        the_cost_of_the_items+=16;
        price_of_shipping+=3;
        break;

    }

    printf("do you want anything more   yes=1   no=0\n");
error_1:
    scanf(" %i",&condation_of_order);
    if(condation_of_order>1)
    {
        printf("please enter the correct number 1 for yes or 0 for no \n"); // to avoid any human error in input
        goto error_1;
    }

    if(condation_of_order)
    {
        goto more;
    }
    if (count<2)
    {
        printf("i am sorry for that but  you must order at least 2 items \n");
        goto more;
    }

    printf("do you want overnight delivery  yes=1 no=0\n");
error_2:
    scanf("%i",&condation_of_overnight);
    if(condation_of_overnight>1)
    {
        printf("please enter the correct number 1 for yes or 0 for no \n"); // to avoid any human error in input
        goto error_2;
    }

    if(condation_of_overnight)
    {
        price_of_shipping+=5;
    }

    printf("thanks for  your trust in us \n you have ordered \n");
    for(i=0; i<count; i++)
    {
        printf(" the item of code %i\n",array_of_items[i]);


    }
    if(condation_of_overnight)
    {
        printf("you have chosen overnight delivery so  ");
    }
    printf("the cost of the shipping = %.2f and the cost of items = %i \n total Invoice price=%.2f ",price_of_shipping,the_cost_of_the_items,(float)the_cost_of_the_items+price_of_shipping);
    if (count>4)
    {
        price_of_shipping*=.8;
        printf("you have an offer in shipping so\n the cost of the shipping = %.2f and the cost of items = %i \n total Invoice price=%.2f ",price_of_shipping,the_cost_of_the_items,(float)the_cost_of_the_items+price_of_shipping);
    }
    return 0;
}
