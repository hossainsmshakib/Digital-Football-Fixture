#include<stdio.h>

funIn()
{
    char CSE,cse,EEE,eee,BBA,bba,ME,me,IPE,ipe,civil,CIVIL,Cse,Eee,Bba,Me,Civil,Ipe;
    char team[100];
    printf("TO FIND YOUR GAME PLEASE ENTER YOUR TEAM NAME : ");
    scanf("%s",team);
    if(strcmp(team,"CSE") == 0 || strcmp(team,"cse")==0)
    {
         printf("\n\tplayer name     scored\n",team);
        printf("\t-----------     ------\n");
        printf("\tRonaldinho      :    5    \n",team);
        printf("\tD.Maradona      :    5    \n",team);
        printf("\tXavier          :    0    \n",team);
        printf("\tZ.Zidane        :    2    \n",team);
    }
    else if(strcmp(team,"EEE")==0||strcmp(team,"eee")==0)
    {
        printf("\n\tplayer name     scored\n",team);
        printf("\t-----------     ------\n");
        printf("\tpele            :    5    \n",team);
        printf("\tL.Messi         :    6    \n",team);
        printf("\tJ.Cruyff        :    1    \n",team);
        printf("\tF. Puskas       :    4    \n",team);
    }
    else if(strcmp(team,"BBA")==0||strcmp(team,"bba")==0)
    {
         printf("\n\tplayer name     scored\n",team);
        printf("\t-----------     ------\n");
        printf("\tRonaldo         :    9    \n",team);
        printf("\tF.Beckenbauer   :    2    \n",team);
        printf("\tA.Stefano       :    3    \n",team);
        printf("\tGarrincha       :    4    \n",team);
    }
    else if(strcmp(team,"IPE")==0||strcmp(team,"ipe")==0)
    {
         printf("\n\tplayer name     scored\n",team);
        printf("\t-----------     ------\n");
        printf("\tM.Platini       :    2    \n",team);
        printf("\tEusebio         :    7    \n",team);
        printf("\tPaolo M.        :    6    \n",team);
        printf("\tZico            :    4    \n",team);
    }
    else if(strcmp(team,"ME")==0||strcmp(team,"me")==0)
    {
         printf("\n\tplayer name     scored\n",team);
        printf("\t-----------     ------\n");
        printf("\tMarco van B.    :    9    \n",team);
        printf("\tRomario         :    5    \n",team);
        printf("\tFranco Baresi   :    2    \n",team);
        printf("\tL.Matthaus      :    3    \n",team);
    }
}
