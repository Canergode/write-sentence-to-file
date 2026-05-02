#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file;
    char sentence[30];
    int N,i;

    // Open file in write mode
    file=fopen("output.txt","w");

    if(file==NULL)
    {
        printf("File could not be created.");
    }
    else
    {
        // Get sentence and line count from user
        printf("Enter a sentence:\n");
        gets(sentence);

        printf("How many lines to write:\n");
        scanf("%d",&N);

        // Write sentence N times with line numbers
        for(i=1;i<=N;i++)
        {
            fprintf(file,"Line %d:%s\n",i,sentence);
        }
        fclose(file);
        printf("Data written to file successfully.");
    }
    return 0;
}
