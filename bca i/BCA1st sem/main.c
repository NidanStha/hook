/*      program made by using switch case, function and loops to play
        Who Wants to Be a Millionaire? */
#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#define qst 29
int score();
int game();
void admin();

//main function
int main()
{
    int choose,password;
    char decide,term,name[99],lname[99];
    //main menu
    system("cls");
    printf("\n\t\t\t\t\t_____________________________________________\n");
    printf("\n\t\t\t\t\t*\tWHO WANTS TO BE A MILLIONAIRE\t    *\n");
    printf("\t\t\t\t\t_____________________________________________\n");
    printf("\n\n\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t  User Mode\n");
    printf("\n\n\t\t\t\t\t\t\t1. Play Game");
    printf("\n\t\t\t\t\t\t\t2. Score list");
    printf("\n\t\t\t\t\t\t\t3. Admin mode");
    printf("\n\t\t\t\t\t\t\t4. Exit");
    printf("\n\t\t\t\t\t\t\tYour choice: ");
    select:

    //selecting menu option
    scanf("%d",&choose);
    switch(choose)
    {
        case 1:
            printf("\tEnter first name: ");
            fflush(stdin);
            gets(name);
            printf("\tEnter last name: ");
            gets(lname);
            int abc=game();

                //record name and point of game
                FILE *f;
                f = fopen("score.txt", "a");
                fprintf(f,"%s %s\t\t%d\n",name,lname,abc);
                fclose(f);

                printf("\n\n\tResult: \n");
                printf("\tName\t\t\tCash prize\n");
                printf("\t%s %s\t\t\t$%d\n\n",name,lname,abc);
                printf("\n\t\t\t\t\t\t\tyour score has been recorded");

            //decide to return to main menu
            printf("\n\ngoto main menu?[y,n]: ");
            scanf("%s",&decide);
            if(decide=='y' || decide=='Y')
            {
                main();
            }
            else
            {
                goto close;
            }
            break;

        case 2:

            //menu option for viewing score
            score();
            break;

        case 3:
            system("cls");

            //checking for admin Verification
            printf("\n\n\t\t\t\t\t\t User Verification");
            pass:
            printf("\n\n\t\t\t\t\t\t Password: ");
            scanf("%d",&password);
            if(password!=1234){
                printf("\t\t\t\t\t\t\n\n\n\nWrong Password..!!");
                goto pass;
            }
            else{
                printf("");
            }
            admin();
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
            break;

        case 4:

            //exit option
            goto close;
            break;

        default:
            printf("select from the option given: ");
            goto select;
            break;
    }
    close:
    return 0;
}


//view score
int score()
{
    char decide;
    system("cls");
    printf("\n\t\t\t\t\t\tScore list");
    char name[99],lname[99];
    int  points;
    FILE *fp;
    fp=fopen("score.txt","r");
    if(fp==NULL)
    {
        printf("\n\n\tFile not found....!!");
    }
    else
    {
        printf("\n\n\t\t\t\tName\t\t\t\tPoints");
        while (fscanf(fp,"%s%s%d",name,lname,&points)!=EOF)
        {
            printf("\n\t\t\t\t%s %-10s\t\t\t%d",name,lname,points);
        }
        fclose(fp);
    }
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


// game start
int game()
{
    struct asstes
    {
        int id,ans;
        char question[300],optno[20],optnt[20],optnth[20],optnf[20];
    }aset;
    char name[99],decide;   //player's name
    int point=0,bonus=0,r,s,i,answer,correct_answer;

    FILE *fp;
    fp = fopen("questions","rb");
    for(i=1;i<=10;i++)
    {
        system("cls");
        try_again:
        srand(time(0));
        r=(1+rand()%qst);
        if(r==6 || r==8){
            goto try_again;
        }
        else{printf("\n");}
        printf("\t\t\tAnd The Question Goes Like: \n");
        fseek(fp, 0, SEEK_SET);

        //importing question from  questions file
        while(fread(&aset, sizeof(aset), 1, fp))
        {
            s = aset.id;
            if(s == r)
            {
                printf("\n %s",aset.question);
                printf("\n 1. %-10s",aset.optno);
                printf("\t 2. %s",aset.optnt);
                printf("\n 3. %-10s",aset.optnth);
                printf("\t 4. %s",aset.optnf);
                correct_answer=aset.ans;

            }
        }
        again_answer:
        printf("\nAnswer: ");
        scanf("%d",&answer);
        if(answer>=1 && answer<=4)
        {
            if(correct_answer==answer)
            {
                point+=10000;
                printf("\nCorrect answer..!!\n$10000 is added to your account\t\ttotal: $%d",point);
            }
            else
            {
                printf("\nWrong answer, You lose...!!\n\t\t Correct Answer Is %d",correct_answer);
                goto leave;
            }
        }
        else
        {
            goto again_answer;
        }
        printf("\n\n\tReady For next Question?[y,n]: ");
        scanf("%s",&decide);
        if(decide=='y' || decide=='Y')
        {
            printf(" ");
        }
        else
        {
            goto leave;
        }
    }

    leave:
    fclose (fp);
    return point;

}

//admin mode
void admin()
{
    struct asstes
    {
        int id,ans;
        char question[300],optno[20],optnt[20],optnth[20],optnf[20];
    }aset;
    system("cls");
    printf("\n\t\t\t\t\t\tADMIN MODE");
    printf("\n\t\tAdd Questions for Game:\n");
    char decide;
    FILE *fp;
    fp = fopen("questions","ab");
    top_q:
    printf("\nEnter the question id number between 30-100: ");
    scanf("%d",&aset.id);
    if(aset.id<=0)
    {
        printf("\nInvalid ID\n");
        goto top_q;
    }
    else
    {
        if(aset.id>=1 && aset.id<=30)
        {
            printf("\nThis id number is already taken\n");
            goto top_q;
        }
        else
        {
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
        printf("\nInvalid number......should between 1 and 4\n");
        goto correct_opt;
    }
    else
    {
        if(aset.id>=1 && aset.id<=4)
        {
            printf("\nShould between 1 and 4\n");
            goto correct_opt;
        }
        else
        {
            printf("\n");
        }
    }

    //save question to file
    fwrite(&aset, sizeof(aset), 1, fp);
    fclose (fp);
    printf("\nSUCCESSFULLY Added One question To Game...\n");

    printf("ENTER 'Y' TO ADD ANOTHER QUESTIO AND 'N' TO GOTO MAIN MENU");
    scanf("%s",&decide);
    if(decide=='y' || decide=='Y')
    {
        goto top_q;

    }
    else
    {
        main();
    }

    getch();
}
