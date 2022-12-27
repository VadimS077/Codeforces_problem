#include <iostream>

int main(){
    int x=0;
    std::cin>>x;
    int ans=0;
    while(x!=0){
        ans+=x&1;
        x>>=1;
    }
    std::cout<<ans<<std::endl;
}
