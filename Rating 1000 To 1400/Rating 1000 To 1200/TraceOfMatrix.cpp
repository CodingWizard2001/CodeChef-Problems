// Chef is learning linear algebra. Recently, he learnt that for a square matrix M, trace(M) is defined as the sum of all elements on the main diagonal of M (an element lies on the main diagonal if its row index and column index are equal).Now, Chef wants to solve some exercises related to this new quantity, so he wrote down a square matrix A with size N x N. A square submatrix of A with size l x l is a contiguous block of l x l elements of A. Formally, if B is a submatrix of A with size l x l, then there must be integers r and c (1 ≤ r,c ≤ N + 1 − l) such that Bi,j = Ar+i−1,c+j−1 for each 1 ≤ i,j ≤ l. Help Chef find the maximum trace of a square submatrix of A.



#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int len;
        // cout<<"Enter the length of the matrix : ";
	    cin>>len;
	    int arr[len][len];
	    for(int i = 0; i < len; i++){
	        for(int j = 0; j < len; j++){
                // cout<<"Enter the value at "<<(i + 1)<<" "<<(j + 1)<<" position : ";
                cin>>arr[i][j];
            }
	    }
	    int ans = 0;
	    for(int i = 0; i < len; i++){
	        for(int j = 0; j < len; j++){
	            int l = i,m = j,sum = 0;
	            while(l < len && m < len){
	                sum += arr[l][m];
	                l++;
	                m++;
	                ans = max(ans,sum);
	            }
	        }
	    }
	    cout<<ans<<endl;
	}
}