#include<stdio.h>
void main()
{
    int a[20][20],m,n,i,j,dgt,temp,count,digit,sum,power;
    printf("Enter the order of matrix :");
    scanf("%d%d",&m,&n);
    printf("Enter the elments of the matrix");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }       
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            temp=a[i][j];
	    sum=0;
	    count=0;
            while(temp)
            {
                dgt=temp%10;
                count++;
                temp=temp/10;
            }
            temp=a[i][j];
            while(temp)
            {
                digit=temp%10;
                power=powe(digit,count);
                sum+=power;
                temp=temp/10;
            }
            if(sum==a[i][j])
                printf("%d is armstrong\n",a[i][j]);
            else
                printf("%d not armstrong\n",a[i][j]);
        }
    }    
}
int powe(int dgt,int n)
{
    if(n==0)
        return 1;
    if(n==1)
        return dgt;
    return dgt*powe(dgt,n-1);    
}