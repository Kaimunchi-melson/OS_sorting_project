#include <stdio.h>
#include <locale.h>
void st(int* e,int * dir,char* boat)
{
     e[0]=3;
     e[1]=3;
     dir[0]=0;
     dir[1]=0;
     boat[0] = 'e';
     boat[1] = boat[2] = ' ';
}
void pass(char* b, int* e)
{
     if(e[0]==3 && e[1]==3)
     {
        b[0]='d';
        b[1]='t';
        b[2]='t';
        e[1]-=2;
     }
     else if((e[0]==3 || e[0]==0) && e[1]>0 && b[1]=='t' && b[2]==' ')
     {
        b[0]='d';
        b[1]='t';
        b[2]='t';
        e[1]--;
     }
     else if(e[0]==3 && e[1]==0 && b[1]=='t' && b[2]==' ')
     {
        b[0]='d';
        b[1]='p';
        b[2]='p';
        e[0]-=2;
        e[1]++;
     }
     else if(e[0]==1 && e[1]==1 && b[1]=='p' && b[2]=='t')
     {
        b[0]='d';
        b[1]='p';
        b[2]='p';
        e[0]--;
        e[1]++;
     }


}
void hm(char* b, int* dir)
{
     //printf(" %d %d %d", dir[0], dir[1], (dir[0]>=0 && dir[1]>=1 && barc[0]=='c' && barc[1]=='c'));

    if(!dir[0] && !dir[1])
    {
        b[0]='e';
        b[1]='t';
        b[2]=' ';
        dir[1]++;
    }
    else if(dir[0]==3 && dir[1]==1 &&  b[1]=='t' && b[2]=='t')
    {
        b[0]=' ';
        b[1]=' ';
        b[2]=' ';
        dir[1]+=2;
    }
    else if(dir[0]>=0 && dir[1]>=0 &&  b[1]=='t' && b[2]=='t')
    {
        b[0]='e';
        b[1]='t';
        b[2]=' ';
        dir[1]++;
    }
    else if(!dir[0] && dir[1] && b[1]=='p'&& b[2]=='p')
    {
        b[0]='e';
        b[1]='p';
        b[2]='t';
        dir[0]++;
        dir[1]--;
    }
    else if(dir[0] && dir[1] && b[1]=='p'&& b[2]=='p')
    {
        b[0]='e';
        b[1]='t';
        b[2]=' ';
        dir[0]+=2;
        dir[1]--;
    }


}
void show(int* e, int* dir, char* boat)
{
     int i, x;
     printf("\n");

        x=e[0];
        for (i=0; i<3; i++)
        {
            if(x>0) printf("p ");
            else printf("_ ");
           x--;
        }
        if(boat[0]=='e')
        printf("   go to left = %c %c    ", boat[1], boat[2]);

        else
        printf("   go to right= %c %c     ", boat[1], boat[2]);

        x=dir[0];
        for (i=0; i<3; i++)
        {
            if(x>0) printf("p ");
            else printf("_ ");
            x--;
        }
        printf("\n");


        x=e[1];
        for (i=0; i<3; i++)
        {
            if(x>0) printf("t ");
            else printf("_ ");
            x--;
        }

        printf("__________________________________  ");

        x=dir[1];
        for (i=0; i<3; i++)
        {
            if(x>0) printf("t ");
            else printf("_ ");
            x--;
        }

      printf("\n");
}
int main()
{

    char boat[4];
    int e[2], dir[2], op=1, p=0;

    do
    {
        //printf("enter the choice\n");
        //scanf("%d",&op);
    switch(op)
    {
        case 1:

        st(e, dir, boat);
             op = 2;
        break;
        case 2:

             p++;
            pass(boat, e);
             printf("\n-------------------------------------------------\n");
             printf("step %d\n", p);
             printf("-------------------------------------------------\n");
             show(e, dir, boat);

             op = 3;
        break;
        case 3:

             p++;
             hm(boat, dir);
             printf("\n-------------------------------------------------\n");
             printf("step %d\n", p);
             printf("-------------------------------------------------\n");
             show(e, dir, boat);

             if(!e[0]&&!e[1]) op = 4;
             else op = 2;
        break;
       // case 4:
         //    printf("-------------------------------------------------\n");
           //  printf("\n end."
             //       "\n restart 1-yes 0-no\n=>");
               //     scanf("%d",op);
        //break;
    }

    }while(op);

}
