#include <stdio.h>
int main(void) {
int n,i,x,y;
scanf("%d",&n);
for(i=0;i<n;i++)
{
    int count=0;
    scanf("%d	%d",&x,&y);
    int itr;
    for(itr=x;itr<=y;itr++)
    {
        
        if(itr%10==2||itr%10==3||itr%10==9){
          count++;
        }
        
    }
    printf("%d
",count);
}
	return 0;
}
