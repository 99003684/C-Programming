#include <stdio.h>
#include<string.h>
#include <ctype.h>
#include <stdint.h>
#include<stdlib.h>

typedef struct  
{
    int uniq_id;
    int length;
    int breadth;
    int height;
    char colour[50];
    int weight;
}colour_box;  

// void read(colour_box box[], int num);
// void display(colour_box box[], int num);
// int find_id(colour_box box[], int num, int id);

int main()
{
    int num, choice, id, ret;
    printf("Enter number of boxes\n");
    scanf("%d",&num);
    colour_box *box = malloc(sizeof(colour_box)+num);
    read(box, num);
    printf("Enter choice\n 1- Display state of all boxes \n 2- find the box with given id \n 3 - count all boxes with specified colour \n 4 - Find average volume \n 5- Find the differennce between min and max volume \n 6 - Find the box with maximum height \n 7 - Update the weight of box \n 8 - Remove the box with given id \n 9 - Add a box at the end of array\n\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            display(box, num);
            break;
        case 2:
            printf("Enter the Unique id of the box to be found\n");
            scanf("%d", id);
            find_id(box, num, id);
            // if(ret == -1)
            // {
            //     printf("Box with given id not found");
            // }
            // else 
            // {
            //     printf("The box with id %d is Box %d", id, ret);
            // }
            break;

    }
   


    // int* box; 
    // int n, i; 
  
    // // Dynamically allocate memory using malloc() 
    // box = (struct*)malloc(5 * sizeof(struct)); 
  
    // // Check if the memory has been successfully allocated by malloc or not 
    // if (box == NULL) { 
    //     printf("Memory not allocated.\n"); 
    //     exit(0); 
    // } 
    // else
    // { 
    //     // Memory has been successfully allocated 
    //     printf("Memory successfully allocated using malloc.\n"); 
    //     struct colour_box *box[5];
    //     for(i = 0; i<5; i++)
    //     {
    //         read(colour_box *box);
    //     }
    // }

return 0;
}

void read(colour_box box[], int num)
{
    int i;
    for(i = 0; i <num; i++)
    {
        printf("\n\n*********Enter Details for Box %d*********%d\n", (i+1));
        printf("Enter the unique id\n");
        scanf("%d",&box[i].uniq_id);
        printf("Enter the length\n");
        scanf("%d",&box[i].length);
        printf("Enter the breadth\n");
        scanf("%d",&box[i].breadth);
        printf("Enter the height\n");
        scanf("%d",&box[i].height);
        printf("Enter the colour\n");
        scanf("%s",box[i].colour);
        printf("Enter the weight\n");
        scanf("%d",&box[i].weight);
    }
}


void display(colour_box box[], int num)
{
    int i;
    for(i = 0; i <num; i++)
    {
        printf("\n\n*********Details for Box %d*********\n", (i+1));
        printf("unique id - %d\n", box[i].uniq_id);
        printf("length - %d\n", box[i].length);
        printf("breadth - %d\n", box[i].breadth);
        printf("height - %d\n", box[i].height);
        printf("colour - %s\n", box[i].colour);
        printf("weight - %d\n\n", box[i].weight);
    }

}

void find_id(colour_box box[], int num, int id)
{
    int i;
    for(i = 0; i <num; i++)
    {
        if(box[i].uniq_id == id)
        {
            printf("the box is %d", i);
            break;
        }
    }
}

// void count_colour()
// {

// }
// void avg_vol()
// {

// }
// void diff()
// {

// }
// void maxheight()
// {

// }
// void update_weight()
// {

// }

// void add()
// {

// }
// void remove()
// {

// }
