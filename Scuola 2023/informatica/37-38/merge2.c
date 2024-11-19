/*
fusar bassini simone 3ic fusione di array.c*/
#include <stdio.h>


void fusione(int primo[],int secondo[],int l1,int l2){
    int i,j=0,k;
    int lMax;
    lMax=l1+l2; 
    int fuso[lMax];
    
    for(i=0; i<lMax; i++)
    {
        if(l1<l2)
        {
            if(j<l1)
            {
                fuso[i]=primo[j];
                i++;
            }
            if(j<l2)
            {
                fuso[i]=secondo[j];
                j++;
            }
        }

        else if(l2<l1)
        {
            if(j<l2)
            {
                fuso[i]=secondo[j];
                i++;
            }
            if(j<l1)
            {
                fuso[i]=primo[j];
                j++;
            }
        }
        
    }

    for(k=0; k<lMax; k++)
    {
        printf("%d",fuso[k]);
    }

}

int main()
{
    int secondo[]={1,3,5};
    int primo[]={2,4,6,7};

    int l2=sizeof(secondo)/sizeof(secondo[0]);
    int l1=sizeof(primo)/sizeof(primo[0]);

    fusione(primo,secondo,l1,l2);

}