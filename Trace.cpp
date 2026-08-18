#include <iostream>
int main(){
    int r,c;
    std::cout<<"enter rows and columns of matrix A: ";
    std::cin>>r>>c;
    if(r!=c){
        std::cout<<"Error matrix must be square";
        return 0;
    }
    int trace=0,val;
    for(int i=0;i<r;++i){
        for(int j=0;j<c;++j){
            std::cin>>val;
            if(i==j) trace+=val;
        }
    }
    std::cout<<"trace is : "<<trace;
    return 0;
}
