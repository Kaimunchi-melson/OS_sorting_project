#include<stdio.h>
int a[1000],b[1000],c[1000],m,n,i,j,sum,k;
int aa;
main()
{

    int ch=0;
     char cc;

printf("input first array size\n");
scanf("%d",&m);
printf("input elements");
for(i=0;i<m;i++)
{
scanf("%d",&a[i]);
}
printf("input second array size\n");
scanf("%d",&n);
printf("input elements");
for(i=0;i<n;i++)
{
scanf("%d",&b[i]);
}
void dss()
{
    printf("1.merge\n");
    printf("\t\t1.first\n");
     printf("\t\t2.end\n");
      printf("\t\t3. after position\n");
    printf("\t\t4.after elements\n");
      printf("2.sort\n");
       printf("\t\t1.ascending\n");
    printf("\t\t2.descending\n");
    printf("3.display\n");
       printf("\t\t1.all\n");
    printf("\t\t2.duplicate remove\n");
     printf("4.divide\n");
       printf("\t\t1.divide after position\n");
       printf("\t\t2.divide after element\n");
}
do
{
    dss();
    printf("input your option\n");
    scanf("%d",&ch);
    switch(ch)
    {
        int mm;
        case 1:
                do
                {
                    printf("merger\n");
               scanf("%d",&mm);
               switch(mm)
               {
                   case 1:
                           end();
                          break;
                  case 2:
                            first();
                            break;
                    case 3: mel();
                            break;

               }
               printf("do you want to continue y/n\n");
                scanf("%c",&cc);
                   }


               while(cc!='n');
               break;
case 2:         do
                {
                    printf("sort\n");
               scanf("%d",&mm);
               switch(mm)
               {
                   case 1:
                           ac();
                          break;
                  case 2: dc();
                          break;

               }
               printf("do you want to continue y/n\n");
                scanf("%c",&cc);
                   }
                    while(cc!='n');
                    break;
case 3:   do
                {
                    printf("display\n");
               scanf("%d",&mm);
               switch(mm)
               {
                    case 1: first();
                          break;
                   case 2:
                           dup();
                          break;


               }
               printf("do you want to continue y/n\n");
                scanf("%c",&cc);
                   }
                    while(cc!='n');
                    break;
case 4: do{
            printf("divide\n");
            scanf("%d",&mm);
            switch(mm)
            {
                case 1:sp();
                        break;
                        case 2:split();
                               break;
                               default:printf("invalid option\n");
                                 break;

            }
            printf("do you want to continue y/n\n");
                scanf("%c",&cc);
           }
            while(cc!='n');
            break;



}


}
while(ch!=5);
}
int dup()
{ int k;
for(i=0;i<n;i++)
{
    c[i]=a[i];
}
sum=m+n;
for(i=0,j=m;j<sum&&i<n;i++,j++)
{
    c[j]=b[i];
}
    for(i=0;i<sum;i++)
    {

        for(j=i+1;j<sum;)
        {

            if(c[j]==c[i])
            {

                for(k=j;k<sum;k++)
                {

                    c[k]=c[k+1];
                }
                sum--;


            }
            else
            {
                j++;
            }
        }
    }
    for(i=0;i<sum;i++)
    {

        printf("%d\t",c[i]);

    }

}
int  first()
{

for(i=0;i<n;i++)
{
    c[i]=a[i];
}
sum=m+n;
for(i=0,j=m;j<sum&&i<n;i++,j++)
{
    c[j]=b[i];
}
printf("a[%d] array elements after merging \n",sum);

for(i=0;i<sum;i++)
{
printf("%d\t",c[i]);
//printf("%d\t",c[j]);
}
//return 0;

}

int end()
{

for(i=0;i<n;i++)
{
    c[i]=b[i];
}
sum=m+n;
for(i=0,j=m;j<sum&&i<n;i++,j++)
{
    c[j]=a[i];
}
printf("a[%d] array elements after merging \n",sum);

for(i=0;i<sum;i++)
{
printf("%d\t",c[i]);
}
return 0;

}
int ac()
{
    int temp;
   for(i=0;i<n;i++)
{
    c[i]=a[i];
}
sum=m+n;
for(i=0,j=m;j<sum&&i<n;i++,j++)
{
    c[j]=b[i];

}int hh,ll;
for(hh=0;hh<sum-1;hh++)
    {
for(ll=0;ll<sum-hh-1;ll++)
    {
    if(c[ll]>c[ll+1])
    {
        temp=c[ll];
        c[ll]=c[ll+1];
        c[ll+1]=temp;
    }
    }
    }
for(hh=0;hh<sum;hh++)
{
    printf("%d\t",c[hh]);
}
}
int dc()
{

    int temp;
   for(i=0;i<n;i++)
{
    c[i]=a[i];
}
sum=m+n;
for(i=0,j=m;j<sum&&i<n;i++,j++)
{
    c[j]=b[i];

}int hh,ll;
for(hh=0;hh<sum;hh++)
    {
for(ll=hh+1;ll<sum;++ll)
    {
    if(c[hh]<c[ll])
    {
        temp=c[hh];
        c[hh]=c[ll];
        c[ll]=temp;
    }
    }
    }
for(hh=0;hh<sum;hh++)
{
    printf("%d\t",c[hh]);
}

}
int sp()
{
    for(i=0;i<n;i++)
{
    c[i]=a[i];
}
sum=m+n;
for(i=0,j=m;j<sum&&i<n;i++,j++)
{
    c[j]=b[i];
}
printf("_____________________\n");
printf("before split\n");
for(i=0;i<sum;i++)
{
printf("%d\t\n",c[i]);
}
printf("\n_____________________\n");
int mm;

printf("enter the postion split element\n ");
scanf("%d",&mm);
for(i=0;i<mm;i++)
{
    c[sum]=c[0];
    for(j=0;j<sum;j++)
    {
        c[j]=c[j+1];
    }
}



for(i=0;i<sum;i++)
{
printf("%d\t",c[i]);
}
}
int split()
{
  for(i=0;i<n;i++)
{
    c[i]=a[i];
}
sum=m+n;
for(i=0,j=m;j<sum&&i<n;i++,j++)
{
    c[j]=b[i];
}
printf("_____________________\n");
printf("before split\n");
for(i=0;i<sum;i++)
{
printf("%d\t\n",c[i]);
}
printf("\n_____________________\n");
printf("enter the position of the element to split the array\n");
scanf("%d",&aa);

            aa=se();
        for(i=0;i<aa;i++)
       {

       c[sum]=c[0];
    for(j=0;j<sum;j++)
    {
        c[j]=c[j+1];
    }
 // }
}
    printf("after array\n");
    for(i=0;i<sum;i++)
    {
        printf("%d\n",c[i]);
    }

}
int se()
{
//int aa;
int low;
     int high=n-1;
     int mid;
    while(low<=high)
    {

        mid=(low+high)/2;
        if(aa==a[mid])
        {
            return (mid);
        }
        else if(aa<a[mid])
        {

            high=mid-1;
        }
        else if(aa>a[mid])
        {

            low=mid+1;
        }
        return (-1);
    }
}
int mel()
{
    int aa;
    printf("\npos\n");
scanf("%d",&aa);
int va;
for(i=n-1;i>=aa-1;i--)

      a[i+1]=a[i];
      //for(i=0,j=n;j<sum&&i<n;i++,j++)
      a[aa-1]=b[i];


printf("resuklts\n");
for(i=0;i<=n;i++)
{
    printf("%d\n",a[i]);
}
}


