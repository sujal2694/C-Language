#include <stdio.h>

int main()
{
    FILE *fpData, *fpOdd, *fpEven;
    int num;

    // Open data file for reading
    fpData = fopen("data.txt", "r");
    if (fpData == NULL)
    {
        printf("Error: Cannot open file 'data'\n");
        return 1;
    }

    // Open output files
    fpOdd = fopen("odd", "w");
    fpEven = fopen("even", "w");

    // Read integers and separate them
    while (fscanf(fpData, "%d", &num) != EOF)
    {
        if (num % 2 == 0)
            fprintf(fpEven, "%d ", num);
        else
            fprintf(fpOdd, "%d ", num);
    }

    fclose(fpData);
    fclose(fpOdd);
    fclose(fpEven);

    // Display contents of odd file
    printf("\nOdd numbers:\n");
    fpOdd = fopen("odd", "r");
    if (fpOdd != NULL)
    {
        while (fscanf(fpOdd, "%d", &num) != EOF)
        {
            printf("%d ", num);
        }
        fclose(fpOdd);
    }

    // Display contents of even file
    printf("\n\nEven numbers:\n");
    fpEven = fopen("even", "r");
    if (fpEven != NULL)
    {
        while (fscanf(fpEven, "%d", &num) != EOF)
        {
            printf("%d ", num);
        }
        fclose(fpEven);
    }

    return 0;
}