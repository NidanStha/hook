#include<stdio.h>
int main(){
    int num;
    char name[99];
    FILE *f;
    f = fopen("list.txt", "a");
    printf("get name: ");
    fflush(stdin);
    gets(name);
    printf("get num: ");
    scanf("%d",&num);
    fprintf(f,"%s\t\t%d\n",name,num);
    fclose(f);

    FILE *fp;
    fp=fopen("list.txt","r");
    printf("\n\nsaved list:\n");
    while (fscanf(fp,"%s%d",name,&num)!=EOF)
    {
        printf("\n\t\t\t\t%-10s\t\t\t%d",name,num);
    }
    fclose(fp);
    return 0;
}
/*int num;
    char name[99];
    FILE *f;
    f = fopen("list.txt", "a");
    scanf("%s",name);
    scanf("%d",&num);
    fprintf(f,"%s\t\t%d\n",name,num);
    fclose(f);

    FILE *fp;
    fp=fopen("list.txt","r");
    printf("\n\nsaved list:\n");
    while (fscanf(fp,"%s%d",name,&num)!=EOF)
    {
        printf("\n\t\t\t\t%-10s\t\t\t%d",name,num);
    }
    fclose(fp);
    return 0;*/
