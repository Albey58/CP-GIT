#include <stdio.h>
struct term{
    int row;
    int col;
    int nze;
};
void structdisplay(struct term s[],int n)
{   
        int i;
        for(i=0;i<=n;i++)
            printf("%d %d %d\n",s[i].row,s[i].col,s[i].nze);
}
int main()
{
    struct term s[100],t[100];
    int r,c,n,i,j;
    printf("Enter number of rows,columns and nonzero elements of sparse matrix:\n");
    scanf("%d%d%d",&r,&c,&n);
    s[0].row=r;
    s[0].col=c;
    s[0].nze=n;
    t[0].col=r;
    t[0].row=c;
    t[0].nze=n;
    printf("Enter %d nonzero elements in format(row,column,element):\n",n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d%d",&s[i].row,&s[i].col,&s[i].nze);
    }
    
    printf("Original sparse matrix is:\n");
    structdisplay(s,n);
    int k=1;
    for(i=0;i<c;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(s[j].col==i)
            {
                t[k].row=s[j].col;
                t[k].col=s[j].row;
                t[k].nze=s[j].nze;
                k++;
            }
        }
    }
    printf("transpose is:\n");
    structdisplay(t,n);
}
