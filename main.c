#include <stdio.h>
#include <string.h>

int main()
{
    int i;
     char a[100];
        printf("\n\tWelcome.\n\tPlease let us know what do you want ? ");
        gets(a);
        fflush(stdin);

    for(i=0;; i++)
    {
        if(strcmp(a,"schedule") == 0)
        {
            funSc();

        }
        else if(strcmp(a,"individual")==0)
        {
            funIn();
        }
        else if(strcmp(a,"all")==0)
        {
            funAl();
        }

        printf("\nAnything else about your team ?\n");
        char Y,N,n;
        fflush(stdin);
        scanf("%c",&Y);
        fflush(stdin);


        if(Y!='Y'&& Y!='y')
        {
            printf("Thank you for your query.Peep on if needed.");
            return 0;
        }

        printf("Enter your query : ");
        gets(a);
    }
}
