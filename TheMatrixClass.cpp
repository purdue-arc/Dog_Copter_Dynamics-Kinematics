//CHAPTERS -> DENSE MATRIX AND ARRAY MANIPULATION -> THE MATRIX CLASS

#include<iostream>
#include <eigen3/Eigen/Dense>

using Eigen::MatrixXd;  //if we don't do this, we need to do Eigen::MatrixXd m(2,2)
using Eigen::VectorXd;
using namespace std;

typedef Eigen::Matrix<float, 3, 3> Matrix3f;  //typedef for basic matrix template

int main() {

  /* EIGEN LIBRARY: MATRIX INTRODUCTION
  MatrixXd m = MatrixXd::Random(3, 3);
  m = (m + MatrixXd::Constant(3, 3, 1.2)) * 50;
  cout << "m =" << endl << m << endl;
  VectorXd v(3);
  v << 1, 2, 3;
  cout << "m * v =" << endl << m * v << endl;
  */

  /* COEFFICIENT ACCESSORS
  MatrixXd m(2, 2);
  m(0, 0) = 3;
  m(1, 0) = 2.5;
  m(0, 1) = -1;
  m(1, 1) = m(1, 0) + m(0, 1);
  cout << "Here is the matrix m: " << endl << m << endl;
  VectorXd v(2);
  v(0) = 4;
  v(1) = v(0) - 1;
  cout << "Here is the vector v: " << endl << v << endl;
  */

  /*COMMA-INITIALIZATION
  Matrix3f m;
  m << 1, 2, 3, 
       4, 5, 6, 
       7, 8, 9;
  cout << m;
  */

  /*RESIZE
  MatrixXd m(2, 5);
  m.resize(4, 3);
  cout << "The size of matrix m is: " << m.rows() << "x" << m.cols() << endl;
  cout << "It has " << m.size() << " coefficients" << endl;
  VectorXd v(2);
  v.resize(5);
  cout << "The vector v is of size: " << v.size() << endl;
  */
  
  /*ASSIGNMENT AND RESIZING
  MatrixXf a(2,2);
  cout << "a is of size " << a.rows() << "x" << a.cols() << endl;
  MatrixXf b(3,3);
  a = b;
  cout << "a is now of size " << a.rows() << "x" << a.cols() << endl;
  */

  return 0;

}


/* Random Notes:
 * In Eigen, all matrices and vectors are objects of the Matrix class 
 * Vectors are either 1 row or 1 column
 * Matrix<typename Scalar, int Rows, int Cols>
 * typedef Matrix<float, 4, 4> Matrix4f; is an example of usual case
 * Dynamic is a keyword that indicates that the size is unknown at compile time
 */ 
