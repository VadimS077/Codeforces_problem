#include <iostream>
#include <string>



int main()
{
    int t=0;
    std::cin>>t;
    while(t--){
        int n =0;
        std::cin>>n;
        std::string s;
        std::cin>>s;
        int r=0,b=0,res=1;
        
        for(int i=0;i<n;i++){
            if(s[i]=='B'){
                b=1;
                }
            if(s[i]=='R'){
                r=1;
            }
            if(s[i]=='W' && (r!=b)){
                res=1;
                break;
                
            }if(s[i]=='W' && (r==b) && r!=0){
                r=0;
                b=0;
                res=0;
                
            }
            
        }if(b!=r){
            res=1;
        }else{
            res=0;
        }
        
        if(res==0){
            std::cout<<"yes"<<std::endl;
        }else{
            std::cout<<"no"<<std::endl;
        }
        
    }

    
}
