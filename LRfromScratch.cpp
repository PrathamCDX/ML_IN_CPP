#include<bits/stdc++.h>
using namespace std ;


class Matrix {
public:
    Matrix(int rows, int cols) : rows(rows), cols(cols), matrix(rows, vector<int>(cols, 0)) {}

    void set(int row, int col, int val) {
        matrix[row][col] = val;
    }

    int get(int row, int col) const {
        return matrix[row][col];
    }

    void print() const {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }

    Matrix transpose() const {
        Matrix result(cols, rows);

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                result.set(j, i, matrix[i][j]);
            }
        }

        return result;
    }

    Matrix multiply(const Matrix& other) const {
        if (cols != other.rows) {
            throw invalid_argument("Matrix dimensions do not match for multiplication");
        }

        Matrix result(rows, other.cols);

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < other.cols; j++) {
                int sum = 0;

                for (int k = 0; k < cols; k++) {
                    sum += matrix[i][k] * other.matrix[k][j];
                }

                result.set(i, j, sum);
            }
        }

        return result;
    }

    Matrix add(const Matrix& other) const {
        if (rows != other.rows || cols != other.cols) {
            throw invalid_argument("Matrix dimensions do not match for addition");
        }

        Matrix result(rows, cols);

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                result.set(i, j, matrix[i][j] + other.matrix[i][j]);
            }
        }

        return result;
    }

    Matrix subtract(const Matrix& other) const {
        if (rows != other.rows || cols != other.cols) {
            throw invalid_argument("Matrix dimensions do not match for subtraction");
        }

        Matrix result(rows, cols);

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                result.set(i, j, matrix[i][j] - other.matrix[i][j]);
            }
        }

        return result;
    }

private:
    int rows;
    int cols;
    vector<vector<int>> matrix;
};


class Linear{
	public:
	
	// matrix multiplication function
	


	// matrix transpose function 
	
	
	
	//matrix addition function 
	
	
	
	//constructor
	
	void Linear(int n , float m){
		continue ;
	}
	
	
	// fit function 
	
	
	
	
	
	
	// update 
	

	// predict return

	//coef 
};


