#include <iostream>
#include <vector>
#include <algorithm>




int main(){
    int t=0;
    std::cin>>t;
    while(t--){
        int n=0;
        std::cin>>n;
        std::vector <int> pos;
        int kol0=0;
        for(int i=0;i<n;i++){
            int ai=0;
            std::cin>>ai;
            pos.push_back(ai);
            if(ai==0){
                kol0+=1;
            }
            }
            if(kol0!=0){
                std::cout<<n-kol0<<std::endl;
            }
            else{
                int same=0;
                sort(pos.begin(),pos.end());
                for(int i=0;i<pos.size()-1;i++){
                    if (pos[i]==pos[i+1]){
                        same+=1;
                        break;
                        
                    }
                }if(same!=0){
                    std::cout<<n<<std::endl;
                    
                }
                else{
                    std::cout<<n+1<<std::endl;
                }
            }
            
        
    }
    
}
