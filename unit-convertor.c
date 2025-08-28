#include <stdio.h>

int main()
{
    // Define Variables
    float km, lengthConversion;
    float kilograms, pounds;
    float hours, minutes;
    char choice;
    int choose;
    int count = 0;

    // Create  while loop
    while (choice)
    {
        // Select menu

        printf("Select a conversion type:\n");
        printf("1.Length (Kilometers to Miles)\n");
        printf("2.Weight(Kilograms to Pounds)\n");
        printf("3.Time(Hours to Minutes)\n");
        printf("Enter your choice: ");
        scanf("%d", &choose);

        // Logical Conditions
        if (choose == 1)
        {
            // length conversion;
            printf("Enter the distance in kilometers: ");
            scanf("%f", &km);
            lengthConversion = km * 0.621317;

            // Converted distance
            printf("Converted distance : %.2lf miles \n\n", lengthConversion);
            count++;
        }
        else if (choose == 2)
        {
            // weight conversion
            printf("Enter the weight in kilograms :");
            scanf("%f", &kilograms);
            pounds = kilograms * 2.20462;

            // Converted weight
            printf("Converted weight : %.2lf pounds \n\n", pounds);
            count++;
        }
        else if (choose == 3)
        {

            printf("Enter the time in hours : ");
            scanf("%f", &hours);
            minutes = hours * 60;

            // Converted time
            printf("Converted time : %.2lf minutes \n\n", minutes);
            count++;
        }
        else
        {
            printf("Please choose one number form the menu.");
        }

        // print message for a new conversion
        printf("Do you want to perform another conversion?(y/n):");
        scanf(" %c", &choice);

        // Create if statement for choice variables value.
        if (choice == 'n' || choice == 'N')
        {

            printf("You performed %d conversion %s.\n", count, count == 1 ? "" : "s");
            return 1;
        }
        choice++;
    }

    return 0;
}
