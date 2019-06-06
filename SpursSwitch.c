#include<stdio.h>
int main(){
    int a,x,y,sum;
    char ch;
    do{
        printf("To dare is to do! #COYS");
        printf("\nEnter the player number (0-11) = ");
        scanf("%d", &a);
        switch (a) {
            case 1:
                printf("Hugo Lloris");
                break;
            case 2:
                printf("Kieran Trippier");
                break;
            case 3:
                printf("Danny Rose");
                break;
            case 4:
                printf("Toby Alderweireld");
                break;
            case 5:
                printf("Jan Vertonghen");
                break;
            case 6:
                printf("Davinson Sanchez");
                break;
            case 7:
                printf("Heung Min Son");
                break;
            case 8:
                printf("Harry Winks");
                break;
            case 9:
                printf("Vincent Janssen");
                break;
            case 10:
                printf("Harry Kane!");
            case 11:
                printf("Erik Lamela");
                break;
            default:
                break;
        }
        printf ("\nDo you want to continue: y/n");
        scanf (" %c", &ch);
    } while(ch == 'y');
}