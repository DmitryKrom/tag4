#include<stdio.h>
#include<windows.h>

main()
{
    system("chcp 1252");
    system("cls");

    int zahl;

    printf("Geben Sie bitte eine ganze Zahl ein: ");
    fflush(stdin);
    scanf("%d", &zahl);

    if (zahl != 0)
    {
        if (zahl < 0)
        {
            printf("\nIhre Eingabe %d ist eine negative Zahl.\n", zahl);
        }
        if (zahl > 10)
        {
            printf("\nIhre Eingabe %d ist eine positive Zahl.", zahl);
            printf("\nIhre Eingabe %d liegt sogar oberhalb von 10!\n", zahl);
        }
       if (zahl > 0 && zahl < 11)
       {
           printf("\nIhre Eingabe %d ist eine positive Zahl.\n", zahl);
       }
    }
    else
    {
        printf("\nIhre Eingabe %d ist Null!\n", zahl);
    }


}
