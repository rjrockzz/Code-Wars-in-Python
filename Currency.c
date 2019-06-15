#include<stdio.h>
int main()
{
    int amount, note_500, note_100, note_50, note_20, note_10, note_5, note_2, note_1;
    printf("Enter the amount please = ");
    scanf("%d", &amount);
    note_500 = amount/500;
    amount = amount%500;
    note_100 = amount/100;
    amount = amount%100;
    note_50 = amount/50;
    amount = amount%50;
    note_20 = amount/20;
    amount = amount%20;
    note_10 = amount/10;
    amount = amount%10;
    note_5 = amount/5;
    amount = amount%5;
    note_2 = amount/2;
    amount = amount%2;
    note_1 = amount;
    printf("The total 500 notes are = %d", note_500);
    printf("\n");
    printf("The total 100 notes are = %d", note_100);
    printf("\n");
    printf("The total 50 notes are = %d", note_50);
    printf("\n");
    printf("The total 20 notes are = %d", note_20);
    printf("\n");
    printf("The total 10 notes are = %d", note_10);
    printf("\n");
    printf("The total 5 notes are = %d", note_5);
    printf("\n");
    printf("The total 2 notes are = %d", note_2);
    printf("\n");
    printf("The total 1 note are = %d", note_1);
}