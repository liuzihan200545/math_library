#include <iostream>
#include "amatrix2.h"

template<class T>
void PrintMatrix(AMatrix2<T>& n){
    for(int i = 0;i<n.GetRows();i++){
        for(int j = 0;j<n.GetCols();j++){
            std::cout << n.GetElement(i,j) << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    AMatrix2<float> matrix21(2,2);
    PrintMatrix(matrix21);
    std::cout<<"----------------------------------------------"<<std::endl;
    float dataset[6] = {1.2,2.3,1.4,2.6,2.2,3.1};
    AMatrix2<float> matrix22(2,3,dataset);
    PrintMatrix(matrix22);
    std::cout<<"----------------------------------------------"<<std::endl;
    AMatrix2<float> matrix23(3,2,dataset);
    PrintMatrix(matrix23);
    std::cout<<"----------------------------------------------"<<std::endl;
    AMatrix2<float> matrix24(3,2,matrix23);
    PrintMatrix(matrix24);
    return 0;
}
