#include <stdio.h>
#include <stdlib.h>
struct questions{
    int id;
    char qstn[999];
    char optno[99];
    char optnt[99];
};
int main()
{
    struct questions question;
    printf("enter: ");
    scanf("%d %s %s %s\n",question.id,question.qstn,question.optno,question.optnt);
    FILE *f;
    f=fopen("questions.txt","a");

    fprintf(f,"%d %s %s %s\n",question.id,question.qstn,question.optno,question.optnt);
    fclose(f);
    int i=0;
    char c[1000];
    FILE *fp;
    fp=fopen("questions.txt","r");

    fscanf(fp,"%[^\n]", c);
    printf("\n\nData from the file:\n%s", c);
    fclose(fp);
    return 0;
}
