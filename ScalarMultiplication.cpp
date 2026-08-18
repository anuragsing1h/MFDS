#include <iostream>
#include <vector>
int main(){
    int rows,cols;
    std::cout<<"enter rows and columns of matrix A: ";
    std::cin>>rows>>cols;
    std::vector<std::vector<int>> m(rows,std::vector<int>(cols));
    for(int i=0;i<rows;++i)
        for(int j=0;j<cols;++j)
            std::cin>>m[i][j];
    int scalar;
    std::cout<<"enter scalar value: ";
    std::cin>>scalar;

    std::cout<<"resultant matrix is : \n";
    for(int i=0;i<rows;++i){
        std::cout<<" \n";
        for(int j=0;j<cols;++j){
            std::cout<<m[i][j]*scalar<<" ";
        }
    }
    
    return 0;
}
