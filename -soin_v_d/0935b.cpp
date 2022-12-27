#include <iostream>
#include <string>
int main(){
    int n=0;
    std::cin>>n;
    std::string s;
    std::cin>>s;
    int x=0,y=0,m=0;
    for(int i=0;i<s.size()-1;i++){
        if (s[i]=='U'){
            y+=1;
        
        }else{
            x+=1;
        }
        if(x==y && s[i]==s[i+1]){
            m+=1;
        }
        
    }std::cout<<m;
    
    
}
