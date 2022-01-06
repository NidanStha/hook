/*      program made by using switch case, function and loops to do
        simple mathematical solution, quiz game, display different type of pyramid */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void pyramid(int);
int main()
{
    int ch0 /* first selection variable */,
        pyra_type/* choose pyramid type*/,
        c/*pyramid variable*/,
        ch1/* calculation variable */,
        point=0/* for quiz */,
        quz/* for quiz */,
        i,j,k/*for loop*/;
    float num /* calculation variable */;
    char decide /* program repeating variable ,yes or no*/;

    printf("\t\tWelcome to our Project \n\t\t\terror X\n");
    top:
    printf("\n\n1. Mathematical Calculations\n");
    printf("2. Play Quiz\n");
    printf("3. Display Pyramid\n");
    printf("4. untitled\n");
    printf("\nSelect any one from above: ");
    scanf("%d",&ch0);
    switch(ch0)
    {
        case 1:
        printf("\t1. find sin value\n");
        printf("\t2. find cos value\n");
        printf("\t3. find tan value\n");
        printf("\t4. find sinh value\n");
        printf("\t5. find cosh value\n");
        printf("\t6. find tanh value\n");
        printf("Select any one from above: ");
        scanf("%d",&ch1);
        switch(ch1)
        {
            case 1:
                printf("Enter a number: ");
                scanf("%f",&num);
                printf("sin value of %.2f is %f",num,sin(num));
                break;

            case 2:
                printf("Enter a number: ");
                scanf("%f",&num);
                printf("cos value of %.2f is %f",num,cos(num));
                break;

            case 3:
                printf("Enter a number: ");
                scanf("%f",&num);
                printf("tan value of %.2f is %f",num,tan(num));
                break;

            case 4:
                printf("Enter a number: ");
                scanf("%f",&num);
                printf("sinh value of %.2f is %f",num,sinh(num));
                break;

            case 5:
            printf("Enter a number: ");
            scanf("%f",&num);
            printf("cosh value of %.2f is %f",num,cosh(num));
            break;

            case 6:
            printf("Enter a number: ");
            scanf("%f",&num);
            printf("tanh value of %.2f is %f",num,tanh(num));
            break;

        }
        goto bottom;
        case 2:
        printf("\nLet's start the Quiz...!!\n\n");
        printf("# ## ### #### ##### ###### ##### #### ### ## #\n\n\a");
            printf("\ti. Who is the Father of Internet?");
            printf("\n\t1. Tim Berners Lee");
            printf("\t\t2. Vint Cerf");
            printf("\nAnswer: ");
            scanf("%d",&quz);
            switch(quz)
            {
                case 1:
                    printf("\t\twrong\n\n");
                    break;

                case 2:
                    printf("\t\tgood\n\n");
                    point++;
                    break;

                default:
                    printf("choose from the option given!!\n\n");
                    break;
            }

            printf("\tii. The Ozone layer lies in____");
            printf("\n\t1. Stratosphere");
            printf("\t\t2. Troposphere");
            printf("\nAnswer: ");
            scanf("%d",&quz);
            switch(quz)
            {
                case 2:
                    printf("\t\twrong\n\n");
                    break;

                case 1:
                    printf("\t\tgood\n\n");
                    point++;
                    break;

                default:
                    printf("choose from the option given!!\n\n");
                    break;
            }

            printf("\tiii. Who invented current electricity and current battery?");
            printf("\n\t1. Thomas Edison");
            printf("\t\t2. Volta");
            printf("\nAnswer: ");
            scanf("%d",&quz);
            switch(quz)
            {
                case 1:
                    printf("\t\twrong\n\n");
                    break;

                case 2:
                    printf("\t\tgood\n\n");
                    point++;
                    break;

                default:
                    printf("choose from the option given!!\n\n");
                    break;
            }

            printf("\tiv. Who is the author of 'Conversation with Myself'");
            printf("\n\t1. Barak Obama");
            printf("\t\t2. Nelson Mandela");
            printf("\nAnswer: ");
            scanf("%d",&quz);
            switch(quz)
            {
                case 1:
                    printf("\t\twrong\n\n");
                    break;

                case 2:
                    printf("\t\tgood\n\n");
                    point++;
                    break;

                default:
                    printf("choose from the option given!!\n\n");
                    break;
            }

            printf("\tv. World war I commenced in");
            printf("\n1. 1914");
            printf("\t\t2. 1916");
            printf("\nAnswer: ");
            scanf("%d",&quz);
            switch(quz)
            {
                case 2:
                    printf("\t\twrong\n\n");
                    break;

                case 1:
                    printf("\t\tgood\n\n");
                    point++;
                    break;

                default:
                    printf("choose from the option given!!\n\n");
                    break;
            }

            printf("\tvi. World smallest country is___");
            printf("\n\t1. Vatican City");
            printf("\t\t2. Bhutan");
            printf("\nAnswer: ");
            scanf("%d",&quz);
            switch(quz)
            {
                case 2:
                    printf("\t\twrong\n\n");
                    break;

                case 1:
                    printf("\t\tgood\n\n");
                    point++;
                    break;

                default:
                    printf("choose from the option given!!\n\n");
                    break;
            }

            printf("\tvii. World largest church is___");
            printf("\n\t1. St. Paul's Cathedral");
            printf("\t\t2.  c.St.Peter");
            printf("\nAnswer: ");
            scanf("%d",&quz);
            switch(quz)
            {
                case 1:
                    printf("\t\twrong\n\n");
                    break;

                case 2:
                    printf("\t\tgood\n\n");
                    point++;
                    break;

                default:
                    printf("choose from the option given!!\n\n");
                    break;
            }

            printf("\tviii. Where was the first Asian Games held?");
            printf("\n\t1. India");
            printf("\t\t2. China");
            printf("\nAnswer: ");
            scanf("%d",&quz);
            switch(quz)
            {
                case 2:
                    printf("\t\twrong\n\n");
                    break;

                case 1:
                    printf("\t\tgood\n\n");
                    point++;
                    break;

                default:
                    printf("choose from the option given!!\n\n");
                    break;
            }

            printf("\tix. Who is the first Scientist of Nepal?");
            printf("\n\t1. Ramu Khatri");
            printf("\t\t2. Gehendra sumsher");
            printf("\nAnswer: ");
            scanf("%d",&quz);
            switch(quz)
            {
                case 1:
                    printf("\t\twrong\n\n");
                    break;

                case 2:
                    printf("\t\tgood\n\n");
                    point++;
                    break;

                default:
                    printf("choose from the option given!!\n\n");
                    break;
            }

            printf("\tx. How many states are there in USA?");
            printf("\n\t1. 40");
            printf("\t\t2. 50");
            printf("\nAnswer: ");
            scanf("%d",&quz);
            switch(quz)
            {
                case 1:
                    printf("\t\twrong\n\n");
                    break;

                case 2:
                    printf("\t\tgood\n\n");
                    point++;
                    break;

                default:
                    printf("choose from the option given!!\n\n");
                    break;
            }
        printf("\n\t\tScore:%d",point);
        break;

        case 3:
        printf("\t1. Right angled half pyramid\n");
        printf("\t2. Right angled half pyramid flipped\n");
        printf("\t3. Full pyramid\n");
        printf("\t4. Inverse full pyramid\n");
        printf("\t5. Double pyramid\n");
        printf("\t\tSelect type of pyramid: ");
        scanf("%d",&pyra_type);
            switch(pyra_type)
            {
                case 1:
                    printf("Number of rows: ");
                    scanf("%d",&c);
                    for(i=0;i<c;i++)
                    {
                        for(j=0;j<=i;j++)
                        {
                            printf("*");
                        }
                        printf("\n");
                    }
                    break;

                case 2:
                    printf("Number of rows: ");
                    scanf("%d",&c);
                    for(i=0;i<=c;i++)
                    {
                        for(j=c;j>i;j--)
                        {
                           printf(" ");
                        }
                        for(k=0;k<=i;k++)
                        {
                            printf("*");
                        }
                        printf("\n");
                    }
                    break;

                case 3:
                    printf("Number of rows: ");
                    scanf("%d",&c);
                    for(i=0;i<=c;i++)
                    {
                        for(j=c;j>i;j--)
                        {
                           printf(" ");
                        }
                        for(k=0;k<=i*2;k++)
                        {
                            printf("*");
                        }
                        printf("\n");
                    }
                    break;

                case 4:
                printf("Number of rows: ");
                    scanf("%d",&c);
                    for(i=c; i>=1;--i)
                    {
                        for(k=0;k<c-i;++k)
                        {
                            printf("  ");
                        }
                        for(j=i;j<=2*i-1;++j)
                        {
                            printf("* ");
                        }
                        for(j=0;j<i-1;++j)
                        {
                          printf("* ");
                        }
                        printf("\n");
                    }
                    break;

                case 5:
                    againp:
                    printf("pyramid size less than or equal to 60: ");
                    scanf("%d",&c);
                    if(c>60)
                    {
                        goto againp;
                    }
                    else
                    {
                        pyramid(c);
                    }
                    break;

                default:
                    printf("choose from the option given!!\n\n");
                    break;
            }

        break;

        default:
            printf("Are u not interested in my project........select from the given options myan...!!!");
            break;
    }
    bottom:
    printf("\n\n\tDo you want to continue?[y/n]: ");
    scanf("%s",&decide);
    if(decide=='y')
    {
        goto top;
    }
    else
    {
        return 0;
    }
}

void pyramid(int c)
{
    int space,x,b,a;
    space=c;
    for(a=0;a<=c;a++){
        for(x=0;x<space;x++){
            printf(" ");
        }
        for(b=0;b<=a*2;b++){
            printf("*");
        }
        printf("\n");
        space--;
    }
    space = 0;
    for(a=c-1;a>=0;a--){
        for(x=0;x<=space;x++){
            printf(" ");
        }
        for(b=0;b<=a*2;b++){
            printf("*");
        }
        printf("\n");
        space++;
    }
    return 0;
}
