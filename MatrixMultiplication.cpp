#include <iostream>
#include <vector>
using Mat2D = std::vector<std::vector<int>>;
Mat2D getMatrixInput(int rows, int cols){
    Mat2D matrix(rows, std::vector<int>(cols));
    for (int r=0; r<rows; ++r){
        for (int c=0; c<cols; ++c){
            std::cin>>matrix[r][c];
        }
    }
    return matrix;
}
int main(){
    int rowsA, colsA;
    std::cout<<"enter rows and columns of matrix A: ";
    std::cin>>rowsA>>colsA;
    Mat2D matrixA=getMatrixInput(rowsA, colsA);
    int rowsB, colsB;
    std::cout<<"enter rows and columns of matrix B: ";
    std::cin>>rowsB>>colsB;
    if (colsA!=rowsB){
        std::cout << "multiplication not possible ";
        return 0;
    }
    Mat2D matrixB=getMatrixInput(rowsB, colsB);
    Mat2D result(rowsA, std::vector<int>(colsB, 0));
    for (int row=0; row<rowsA; ++row){
        for (int col=0; col<colsB; ++col){
            for (int inner = 0; inner<colsA; ++inner){
                result[row][col]+=matrixA[row][inner]*matrixB[inner][col];
            }
        }
    }
    std::cout<<"resultant matrix is : \n";
    for (int row=0; row<rowsA; ++row) {
        std::cout<<" \n"; 
        for (int col=0; col<colsB; ++col) {
            std::cout<<result[row][col]<<" ";
        }
    }
    return 0;
}
