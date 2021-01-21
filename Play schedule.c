#include<stdio.h>

funSc()

{
    char CSE,cse,EEE,eee,BBA,bba,ME,me,IPE,ipe,civil,CIVIL,Cse,Eee,Bba,Me,Civil,Ipe;
    char team[100];
    printf("TO FIND YOUR GAME PLEASE ENTER YOUR TEAM NAME : ");
    scanf("%s",team);
    if(strcmp(team,"CSE") == 0 || strcmp(team,"cse")==0)
    {
        printf("\nCSE department will play with those teams on these dates :\n\n",team);
        printf("CSE VS EEE\twill held on 28th march at 3.00 pm\n",team);
        printf("CSE VS BBA\twill held on 15th march at 4.00 pm\n",team);
        printf("CSE VS ME\twill held on 14th march at 4.00 pm\n",team);
        printf("CSE VS IPE\twill held on 12th march at 4.00 pm\n",team);
    }
    else if(strcmp(team,"EEE")==0||strcmp(team,"eee")==0)
    {
        printf("\nEEE department will play with those teams on these dates :\n",team);
        printf("EEE VS CSE\twill held on 28th march at 3.00 pm\n",team);
        printf("EEE VS BBA\twill held on 12th march at 4.00 pm\n",team);
        printf("EEE VS ME\twill held on 9th march at 4.00 pm\n",team);
        printf("EEE VS IPE\twill held on 15th march at 4.00 pm\n",team);
    }
    else if(strcmp(team,"BBA")==0||strcmp(team,"bba")==0)
    {
        printf("\nBBA department will play with those teams on these dates :\n",team);
        printf("BBA VS CSE\twill held on 15th march at 3.00 pm\n",team);
        printf("BBA VS EEE\twill held on 12th march at 4.00 pm\n",team);
        printf("BBA VS ME\twill held on 518th march at 4.00 pm\n",team);
        printf("BBA VS IPE\twill held on 13th march at 4.00 pm\n",team);
    }
    else if(strcmp(team,"IPE")==0||strcmp(team,"ipe")==0)
    {
        printf("\nIPE department will play with those teams on these dates :\n",team);
        printf("IPE VS CSE\twill held on 12th march at 3.00 pm\n",team);
        printf("IPE VS BBA\twill held on 15th march at 4.00 pm\n",team);
        printf("IPE VS ME\twill held on 21th march at 4.00 pm\n",team);
        printf("IPE VS EEE\twill held on 15th march at 4.00 pm\n",team);
    }
    else if(strcmp(team,"ME")==0||strcmp(team,"me")==0)
    {
        printf("\nME department will play with those teams on these dates :\n",team);
        printf("ME VS CSE\twill held on 14th march at 3.00 pm\n",team);
        printf("ME VS BBA\twill held on 9th march at 4.00 pm\n",team);
        printf("ME VS EEE\twill held on 18th march at 4.00 pm\n",team);
        printf("ME VS IPE\twill held on 21th march at 4.00 pm\n",team);
    }
    printf("\n\n\n### Semi-final & finals date will depend on circumstances...\n");
}
