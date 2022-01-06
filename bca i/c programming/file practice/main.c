#include <stdio.h>
int main()
{
    char name[99];
    int  number;
    FILE *f;
    f = fopen("contacts.txt", "a");
    printf("\nNew contact name: ");
    scanf("%s",name);
    printf("New contact number: ");
    scanf("%i", &number);
    fprintf(f,"%s \t\t%d\n", name, number);
    fclose(f);
    FILE *fp;
    fp=fopen("contacts.txt","r");
    printf("\nname\t\t\t\tnumber");
    while (fscanf(fp,"%s%d",name,&number)!=EOF)
    {
        printf("\n%-10s\t\t\t%d",name,number);
    }
    fclose(fp);
    return 0;
}

