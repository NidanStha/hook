#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    char decide;
    system("cls");
    printf("\n\t\t\t\t\t\tScore list");
    char name[99],ohb[99],ohh[9];
    fflush(stdin);
    gets(ohh);
    int  points;
    FILE *fp;
    fp=fopen("score.txt","r");
    printf("\n\n\t\t\t\tName\t\t\t\tPoints");
    while(fread(&ohb, sizeof(ohb), 1, fp))
    {
        if(ohb==ohh)
        {
            printf("\nyesss..");
        }
        else{
            printf("\nnoo");
        }
    }
    fclose(fp);
    printf("\n\n\tgoto main menu?[y,n]: ");
    scanf("%s",&decide);
    if(decide=='y' || decide=='Y')
    {
        main();
    }
    else
    {
        return 0;
    }
}
