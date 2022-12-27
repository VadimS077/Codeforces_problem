#include <iostream>
#include<vector>
#include <algorithm>


int g2(int n){
    int k=0;
    while(n!=0){
        if(n%2==0){
            k+=1;
            n=n/2;
        }else{
            break;
        }
    }return k;
}
int main(){
    int t=0;
    std::cin>>t;
    while(t--){
        int n=0;
        std::cin>>n;
        int kol2=0;
        int koli=0;
        for(int i=0;i<n;i++){
            int ai=0;
            std::cin>>ai;
            kol2+=g2(ai);
        }
        if(kol2>=n){
            std::cout<<0<<std::endl;
        }
        else{
            
            std::vector <int> two;
            for(int i=2;i<=n;i=i+2){
                two.push_back(g2(i));
                
            }
            sort(two.begin(), two.end());
            for(int i=two.size()-1;i>=0;i--){
                kol2+=two[i];
                koli+=1;
                if(kol2>=n){
                    std::cout<<koli<<std::endl;
                    
                    
                }
                
                
            }if(kol2<n){
                std::cout<<-1<<std::endl;
            }
            
            
        }
    }
    
}
