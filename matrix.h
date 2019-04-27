#include <bits/stdc++.h>
#include "matrix.cpp"
using namespace std;


Matrix::Matrix(int col, int row){
  this->set_col(col);
  this->set_row(row);

  this->m = (int**) malloc (this->get_row() * sizeof(int*));
  for (int i = 0; i < this->get_row(); i++) {
    this->m[i] = (int*) malloc (this->get_col() * sizeof(int));
  }

}

Matrix::~Matrix(){
  for (int i = 0; i < this->get_row(); i++) {
    free(this->m[i]);
  }
  free(this->m);
}

void Matrix::set_value(int i, int j,int value){
  this->m[i][j] = value;
}

int Matrix::get_col(){
  return this->col;
}

int Matrix::get_row(){
  return this->row;
}

void Matrix::set_col(int col){
  this->col = col;
}

void Matrix::set_row(int row){
  this->row = row;
}

void Matrix::print_matrix(){
  for (int i = 0; i < this->col; i++) {
    for (int j = 0; j < this->row; j++) {
      cout << this->m[i][j] << " ";
    }
    cout << endl;
  }
}
