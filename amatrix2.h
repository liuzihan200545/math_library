//
// Created by Lenovo on 2024/5/30.
//

#ifndef UNTITLED1_AMATRIX2_H
#define UNTITLED1_AMATRIX2_H

template<class T>
class AMatrix2{
private:
    int m_nRows;
    int m_nCols;
    int m_nElements;
    T* m_matrix_data;
public:
    AMatrix2();
    AMatrix2(int rows,int cols);
    AMatrix2(int rows,int cols,const T* inputData);
    AMatrix2(int rows,int cols,const AMatrix2<T>& inputData);

    ~AMatrix2();

    int GetRows();
    int GetCols();
    T GetElement(int rows,int cols);
    bool SetElement(int rows,int cols,T value);
};

//TODO:函数的实现
template<class T>
AMatrix2<T>::AMatrix2(){
    m_nCols = 1;
    m_nRows = 1;
    m_nElements = 1;
    m_matrix_data = new T[m_nElements];
    m_matrix_data[0] = 0.0;
}

template<class T>
AMatrix2<T>::AMatrix2(int rows,int cols){
    m_nRows = rows;
    m_nCols = cols;
    m_nElements = cols * rows;
    m_matrix_data = new T[m_nElements];

    for(int i = 0;i<m_nElements;i++){
        m_matrix_data[i] = 0.0;
    }
}

template<class T>
AMatrix2<T>::AMatrix2(int rows,int cols,const T* inputData){
    m_nCols = cols;
    m_nRows = rows;
    int nums = rows * cols;
    m_nElements = nums;
    m_matrix_data = new T[nums];
    for(int i = 0;i<nums;i++){
        m_matrix_data[i] = inputData[i];
    }
}

template<class T>
AMatrix2<T>::AMatrix2(int rows,int cols,const AMatrix2<T>& inputData) {
    m_nCols = cols;
    m_nRows = rows;
    int nums = rows * cols;
    m_nElements = nums;
    m_matrix_data = new T[nums];
    for(int i = 0;i<nums;i++){
        m_matrix_data[i] = inputData.m_matrix_data[i];
    }
}

template<class T>
AMatrix2<T>::~AMatrix2(){
    if(m_matrix_data!= nullptr){
        delete[] m_matrix_data;
    }
}

template<class T>
int AMatrix2<T>::GetRows(){
    return m_nRows;
}

template<class T>
int AMatrix2<T>::GetCols(){
    return m_nCols;
}

template<class T>
T AMatrix2<T>::GetElement(int rows,int cols){
    if(rows*m_nCols+cols>=0){
        return m_matrix_data[rows*m_nCols+cols];
    }
}

template<class T>
bool AMatrix2<T>::SetElement(int rows,int cols,T value){
    if(rows*m_nCols+cols>=0){
        m_matrix_data[rows*m_nCols+cols] = value;
    }
}

#endif //UNTITLED1_AMATRIX2_H
