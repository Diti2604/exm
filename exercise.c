#include <stdio.h>
#include <stdlib.h>

struct Student
{
    char name[15];
    char surname[15];
    float money;
} st[1000];

void getData(int n)
{
    for(int i=0; i<n; i++)
    {
        scanf("%s", st[i].name);
        scanf("%s", st[i].surname);
        scanf("%f", &st[i].money);
    }
}

void sorting(int n)
{
    struct Student temp;
    for(int i=0; i<=n-2; i++)
    {
        int max=i;
        for(int j=i+1; j<=n-1; j++)
        {
            if(st[j].money>st[max].money)
                max=j;
        }
        temp=st[i];
        st[i]=st[max];
        st[max]=temp;
    }
}

void print(int n,int m)
{
    for(int i=0; i<m; i++)
    {
        printf("%s %s %.2f\n", st[i].name,st[i].surname,st[i].money);
    }
}
int main()
{
    int n,m;
    scanf("%d %d", &n, &m);

    getData(n);
    sorting(n);
    print(n,m);
    return 0;
}