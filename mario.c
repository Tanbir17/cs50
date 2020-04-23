#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;

    //Ask for height
    do
    {
        height = get_int("Height: "); 
    }
    
    //Checks if height is between 1 and 8
    while (height < 1 || height > 8); 

    //Loop for each row until desired height
    for (int row = 0; row < height; row++)
    {
        //Left side of pyramid
        for (int left = 0; left < height; left++) 
        {
            if(row + left < height - 1) //Add space to left of pyramid and # at the height
                printf(" ");
            else
                printf("#");
        }

        printf("  "); //Add 2 spaces in the middle

        //Right side of pyramid
        for (int right = 0; right < height; right++) 
        {
            if (height - row < right + 2) //Add # to the right of pyramid
                printf("#");
        }

        printf("\n");
    }
}
