
#include<iostream>
#include<string>
#include<algorithm>

int main(){
	int t=0;
	std::cin>>t;
	while(t--)
	{
		int n=0,m=0;
		std::cin>>n>>m;
		int x=n;
		int y=m;
		char a[n][m];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				std::cin>>a[i][j];
				if(a[i][j]=='R')
				{
					x=std::min(i,x);
					y=std::min(j,y);
				}
				
			}
		}
		if(a[x][y]=='R'){
		    std::cout<<"YES"<<std::endl;
		}
		else {
		std::cout<<"NO"<<std::endl;
		}
	}
	
}
