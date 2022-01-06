#include <stdio.h>
#include <stdlib.h>
int lineNumber = 8;
int main()
{

    FILE *file = fopen("nidan.txt", "r");
    int count = 0;

    if ( file != NULL )
    {
        char line[256]; /* or other suitable maximum line size */
        while (fgets(line, sizeof line, file) != NULL) /* read a line */
        {
            if (count == lineNumber)
            {
                //use line or in a function return it
                //            //in case of a return first close the file with "fclose(file);"
            printf("\n str %s ", line);
            fclose(file);
            return 0;

            }
            else
            {
                count++;
            }
        }
        fclose(file);
    }
return 0;

}
