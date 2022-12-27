#include<iostream>
#include<vector>
#include<algorithm>
int main(){
    int n=0;
    std::cin>>n;
    int k=1;
    int d=0;
    std::vector <int> a;
    
    for(int i=0;i<n;i++){
        int ai=0;
        std::cin>>ai;
        a.push_back(ai);
        
        
    }
    std::sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
        if(a[i]>=k){
            d+=1;
            k+=1;
        }
    }std::cout<<d<<std::endl;
}
