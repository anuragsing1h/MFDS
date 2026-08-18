#include <iostream>
#include <vector>
using Matrix=std::vector<std::vector<int>>;
Matrix readMatrix(int rows, int cols){
    Matrix temp(rows, std::vector<int>(cols));
    for (int r=0; r<rows; ++r) {
        for (int c=0; c<cols; ++c){
            std::cin >> temp[r][c];
        }
    }
    return temp;
}
void displayMatrix(const Matrix& m){
    std::cout<<"resultant matrix is :\n";
    for (const auto& row : m) {
        std::cout<<"\n";
        for (int val:row) {
            std::cout<<val<< " ";
        }
    }
    std::cout<<"\n";
}
int main(){
    int rowsA, colsA;
    std::cout<<"enter rows and columns of matrix A: ";
    std::cin>>rowsA>>colsA;
    Matrix matrixA=readMatrix(rowsA, colsA);
    int rowsB, colsB;
    std::cout<<"enter rows and columns of matrix B: ";
    std::cin>>rowsB>>colsB;
    if (rowsA!=rowsB|| colsA != colsB) {
        std::cout << "order of matrices are not same\n";
        return 0;
    }
    Matrix matrixB = readMatrix(rowsB, colsB);
    Matrix resultant(rowsA, std::vector<int>(colsA));
    for (int i=0; i<rowsA; ++i){
        for (int j=0; j<colsA; ++j){
            resultant[i][j]=matrixA[i][j]+matrixB[i][j];
        }
    }

    displayMatrix(resultant);
    return 0;
}
