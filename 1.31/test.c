#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char arr[] = { 'q','b','c' };
	printf("%d ", strlen(arr));
	printf("%d ", sizeof(arr));
	return 0;
}



//int main()
//{
//	char a = 250;
//	char b = 5;
//	int c = a + b;
//	printf("%d", c);
//	
//	printf("%c", c);
//	return 0;
//}



#include<iostream>
#include<vector>

using namespace std;

void RotateMatrix_1(vector<vector<int> >& matrix, int n) {
    for (int layer = 0; layer < n / 2; ++layer) {
        int first = layer;
        int last = n - 1 - layer;
        for (int i = first; i < last; ++i) {
            int offset = i - first;
            // store top
            int top = matrix[first][i];

            // left to top
            matrix[first][i] = matrix[last - offset][first];

            // bottom to left
            matrix[last - offset][first] = matrix[last][last - offset];

            // right to bottom
            matrix[last][last - offset] = matrix[i][last];

            // top to right
            matrix[i][last] = top;
        }
    }

}

//void swap(int& a, int& b) {
//    int tmp = a;
//    a = b;
//    b = tmp;
//}
//
//void RotateMatrix_2(vector<vector<int> >& matrix, int n) {
//    for (int i = 0; i < n; i++) {
//        for (int j = i + 1; j < n; j++)
//            swap(matrix[i][j], matrix[j][i]);
//    }
//    /*
//    // Reverse clock-wise
//    for(int i=0;i<n/2;i++){
//        for(int j=0;j<n;j++)
//            swap(matrix[i][j],matrix[n-1-i][j]);
//    }
//    */
//
//    // clock-wise
//    for (int i = 0; i < n / 2; i++)
//        for (int j = 0; j < n; j++)
//            swap(matrix[j][i], matrix[j][n - 1 - i]);
//}
//
//int main() {
//    vector<vector<int> > matrix = {
//        {1,2,3,4},
//        {5,6,7,8},
//        {9,10,11,12},
//        {13,14,15,16}
//    };
//
//    int n = matrix.size();
//
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++)
//            cout << matrix[i][j] << " ";
//        cout << endl;
//    }
//    cout << endl;
//
//    RotateMatrix_2(matrix, n);
//
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++)
//            cout << matrix[i][j] << " ";
//        cout << endl;
//    }
//
//    return 0;
//}




