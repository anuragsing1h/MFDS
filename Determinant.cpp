#include<iostream>
#include<vector>
int calcDet(std::vector<int> v,int n){
    if(n==1) return v[0];
    if(n==2) return v[0]*v[3]-v[1]*v[2];
    int ans=0,sign=1;
    for(int f=0;f<n;++f){
        std::vector<int> sub;
        for(int i=1;i<n;++i)
            for(int j=0;j<n;++j)
                if(j!=f) sub.push_back(v[i*n+j]);
        ans+=sign*v[f]*calcDet(sub,n-1);
        sign=-sign;
    }
    return ans;
}
int main(){
    int n;
    std::cout<<"Enter order of matrix: ";
    std::cin>>n;
    std::vector<int> mat(n*n);
    std::cout<<"Enter elements of matrix:\n";
    for(int i=0;i<n*n;++i) std::cin>>mat[i];
    std::cout<<"Determinant = "<<calcDet(mat,n);
    return 0;
}
