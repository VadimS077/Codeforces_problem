#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>


int main(){
    int n=0,k=0;
    std::cin>>n>>k;
    std::vector<int> a;
    int minv=99999999;
    for (int i=0;i<n;i++){
        int ai=0;
        std::cin>>ai;
        
        
        a.push_back(ai);
        
    }
    
    for (int i=0;i<n;i++){
        if(k%a[i]==0){
            minv=std::min(k/a[i], minv);
        }
    }std::cout<<minv;
}
