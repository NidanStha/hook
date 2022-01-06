#include <time.h>
#include <stdio.h>
#include <stdlib.h>
struct asstes{
    int id,ans;
    char question[300],optno[20],optnt[20],optnth[20],optnf[20];
}aset;
int main()
{

    int nid,temp,s;
    FILE *fp;
    fp = fopen("questions","ab");
    top_q:
    printf("Enter the question id number between 30-100: ");
    scanf("%d",&aset.id);
    if(aset.id<=0)
    {
        printf("\ninvalid number\n");
        goto top_q;
    }
    else
    {
        if(aset.id>=1 || aset.id<=30)
        {
            printf("\nThis id number is already taken\n");
            goto top_q;
        }
        else{
            printf(" ");
        }
    }
    fflush(stdin);
    printf("Enter the question: ");
    gets(aset.question);
    printf("Enter first option: ");
    gets(aset.optno);
    printf("Enter second option: ");
    gets(aset.optnt);
    printf("Enter third option: ");
    gets(aset.optnth);
    printf("Enter fourth option: ");
    gets(aset.optnf);
    correct_opt:
    printf("Enter the id of correct answer: ");
    scanf("%d",&aset.ans);
    if(aset.id<=0)
    {
        printf("\ninvalid number......should between 1 and 4\n");
        goto correct_opt;
    }
    else
    {
        if(aset.id>=1 && aset.id<=4)
        {
            printf("\n");
        }
        else{
            printf("\nshould between 1 and 4\n");
            goto correct_opt;
        }
    }
    fwrite(&aset, sizeof(aset), 1, fp);
    fclose (fp);
    printf("\nsuccess...\n");

    printf("ENTER 'Y' TO ADD ANOTHER QUESTIO AND 'N' TO EXIT");
    scanf("%d",&nid);
    if(nid==1){goto top_q;}else{ //extra for inserting question


    /*
    system("cls");
    printf("/n/ngoto printer:::::");
    scanf("%d",&nid);

    if(nid==1)
    {
    srand(time(0));
    FILE *fp;
    int r, s;
    printf("Enter the id number to search: \n");
    r=1;//(1+rand()%29);
    printf("%d is id number...",r);
        fp = fopen("questions","rb");
         fseek(fp, 0, SEEK_SET);
        while(fread(&aset, sizeof(aset), 1, fp))
        {
            s = aset.id;
            if(s == r)
            {
                printf("%d questions",aset.id);
                printf("\n%d",aset.id);
                printf(" %s",aset.question);
                printf("\noption1: %s",aset.optno);
                printf("\noption2: %s",aset.optnt);
                printf("\noption3: %s",aset.optnth);
                printf("\noption4: %s",aset.optnf);

            }
        }
        fclose (fp);
    }
    else
    {
        return 0;
    }*/
    return 0;
    }

}


/*
FILE *fp;
   fp = fopen("Record","ab");

    printf("Enter the roll number: ");
    scanf("%d", &stud.roll);
    fflush(stdin);
    printf("Enter name: ");
    gets(stud.name);
        fwrite(&stud, sizeof(stud), 1, fp);
        fclose (fp);
        return 0;
*/
/*
FILE *fp;
    int r, s;
    printf("Enter the roll number to search: ");
    scanf("%d", &r);
        fp = fopen("Record","rb");
        while(fread(&stud, sizeof(stud), 1, fp))
        {
            s = stud.roll;
            if(s == r)
            {
                printf("\nRoll: %d",stud.roll);
                printf("\nNoll: %s",stud.name);
            }
        }
        fclose (fp);*/
