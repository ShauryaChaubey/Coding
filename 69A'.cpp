#include<stdio.h>
int main()
{
    int i,j,a[100][10],b[100][10],c[100][10],s1=0,s2=0,s3=0,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {


            scanf("%d%d%d",&a[i][0],&b[i][1],&c[i][2]);
            s1+=a[i][0];
            s2+=b[i][1];
            s3+=c[i][2];

    }
    if(s1==0 && s2==0 && s3==0)
    {
        printf("YES");

    }
    else
    {
        printf("NO");
    }


}
