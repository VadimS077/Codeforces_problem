
#include <iostream>
#include<vector>



int main()
{
    int n=0;
    long long int k=0;
    std::cin>>n>>k;
    std::vector <int> a;
    for(int i=0;i<n;i++){
        int ai=0;
        std::cin>>ai;
        a.push_back(ai);
    }
    int h=0;
    int bi=a[0];
    int flag=0;
    for(int i=1;i<n;i++){
        if(h!=k){
            if(bi>a[i]){
                h+=1;
            }
            else{
                h=1;
                bi=a[i];
            }
        }else{
            std::cout<<bi<<std::endl;
            flag=1;
            break;
        }
    }if(flag==0){
    std::cout<<bi<<std::endl;
    }

    
}
