#include<iostream>
 
int main(){
    int t=0;
    std::cin>>t;
    while(t--){
        char a[8][8];
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                std::cin>>a[i][j];
                
            }
        }
        int flag=0;
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                if(a[i][j-2]==a[i][j] && a[i][j]=='#'){
                    std::cout<<i+2<<" "<< j<< std::endl;
                    flag=1;
                    
                    
                }if(flag==1){
                    break;
                }
            }if(flag==1){
                    break;
                }
        }
        
       
    }
}
