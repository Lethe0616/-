#include<stdio.h>

int W,H,i,j;
char a[30][30];
int f(int x,int y)
{
	if(x<0||y<0||x>=H||y>=W)
	return 0;
	if(a[x][y]=='#')
	return 0;
	else{
		a[x][y]='#';
		return 1+f(x+1,y)+f(x-1,y)+f(x,y+1)+f(x,y-1);
	}
}
int main()
{	
	while(scanf("%d%d",&H,&W)!=EOF)
	{
		for(i=0;i<H;i++)
		    scanf("%s",a[i]);
		for(i=0;i<H;i++)
		    for(j=0;j<W;j++)
		        if(a[i][j]=='@')
		            printf("%d\n",f(i,j));
	}
	return 0;
}

