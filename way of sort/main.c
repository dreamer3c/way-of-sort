//
//  main.c
//  way of sort
//
//  Created by 20161104579 on 2017/6/12.
//  Copyright © 2017年 20161104579. All rights reserved.
//

#include <stdio.h>

int main()
{
    FILE *fp1,*fp2;
    int i,j,t,te;
    int a[10];
    fp1=fopen("/Users/a20161104579/Desktop/second/way of sort/way of sort/list.txt","r");
    fp2=fopen("/Users/a20161104579/Desktop/second/way of sort/list2.txt","w");
    if(fp1==NULL)
    {
        printf("file not exist");
        return 1;
    }
    else
    {
        
        for(i=0;i<10;i++)
        {
            for(j=1;j<10-i;j++)
            {
                if(a[i]>a[i+j])
                {
                    t=a[i];
                    a[i]=a[i+j];
                    a[i+j]=t;
                }
            }
        }
        for(i=0;i<10;i++)
        {
            fprintf(fp2,"%d\t",a[i]);
        }
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
}
