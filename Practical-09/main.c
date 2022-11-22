#include<stdio.h>
#include<stdio.h>
#include<stdlib.h>
#include"magic_square.h"
#define MAX_FILE_NAME 100

//To get total number of lines
int get_num_lines(char filename[MAX_FILE_NAME])
{
    FILE *fp;
    fp=fopen(filename, "r");
    int ch_read;
    int count=0;
    while ((ch_read = fgetc(fp)) != EOF)
    //while loop until end of file is found
    {
        if (ch_read == '\n')
        {
            //increasing the counter for each new line
            count++;
        }

    }
    printf("Number of lines is: %d\n", count);
    //closing the file 
    fclose(fp);
    return count;
}

int main()
{
        FILE *f;
        char filename[MAX_FILE_NAME];
        //get filename from the user as an input
        printf("Enter file name: ");
        scanf("%s", filename);

        int n = get_num_lines(filename);
        f=fopen(filename,"r");

        int i;
        int **magicsquare = malloc(n * sizeof(int *));
        for (i=0;i<n;i++)
        {
                //allocate memory for each array 
                magicsquare[i]= malloc(n*sizeof(int));
        }

        int j;
        for(i=0;i<n;i++)
        //read the magic square array
        {
                for(j=0;j<n;j++)
                {
                        fscanf(f,"%d",&magicsquare[i][j]);
                }
        }
        //check if magic
        int flag=isMagicSquare(magicsquare,n);
        if(flag == 1)
        {
                printf("The square is magic!\n");
        }
        else
        {
                printf("The square is not magic!\n");
        }
         // deallocate each entry
        for(i=0;i<n;i++)
        { 
            free(magicsquare[i]);
        }
        // decallocate array
        free(magicsquare);
        fclose(f);
        return 0;
}