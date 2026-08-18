#include <iostream>
#include <vector>
int main(){
    int r,c;
    std::cout<<"enter rows and columns of matrix A: ";
    std::cin>>r>>c;
    std::vector<std::vector<int>> mat(r,std::vector<int>(c));
    for(int i=0;i<r;++i)
        for(int j=0;j<c;++j)
            std::cin>>mat[i][j];
    std::cout<<"transpose matrix is : \n";
    for(int i=0;i<c;++i){
        std::cout<<" \n";
        for(int j=0;j<r;++j){
            std::cout<<mat[j][i]<<" ";
        }
    }
    return 0;
}
