#include <iostream>
#include <vector>
int main(){
    int rA, cA;
    std::cout<<"enter rows and columns of matrix A: ";
    std::cin>>rA>>cA;
    std::vector<std::vector<int>> A(rA,std::vector<int>(cA));
    for(int i=0;i<rA;++i)
        for(int j=0;j<cA;++j)
            std::cin>>A[i][j];
    int rB, cB;
    std::cout<<"enter rows and columns of matrix B: ";
    std::cin>>rB>>cB;
    if(rA!=rB||cA!=cB){
        std::cout<<"order of matrices are not same ";
        return 0;
    }
    std::vector<std::vector<int>> B(rB,std::vector<int>(cB));
    for(int i=0;i<rB;++i)
        for(int j=0;j<cB;++j)
            std::cin>>B[i][j];
    std::cout<<"resultant matrix is : \n";
    for(int i=0;i<rA;++i){
        std::cout<<" \n";
        for(int j=0;j<cA;++j){
            std::cout<<A[i][j]-B[i][j]<<" ";
        }
    }
    return 0;
}
