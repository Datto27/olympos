#include <iostream>
using namespace std;

void pascal_tri() {
	// paskalis samkutxedi
    int N;
    cin >> N;
    N++;
    int C[N][N];
    
    for(int n=0; n<N; n++){
        C[n][0] = C[n][n] = 1;
        for(int k=1; k<n; k++){
            C[n][k] = C[n-1][k-1] + C[n-1][k];
        }
    
    }
    // mtliani samkutxedis dabechvda
    for(int n=0; n<N; n++){
        for(int k=0; k<=n; k++){
            cout << C[n][k] << "\t";
        }
        cout << "\n";    
    }
    // bolo striconis dabechvda
	int n = N-1;
    for(int k=0; k<=n; k++) cout << C[n][k] << "\t";

    // cout << C[n][k];
}

void fibonacci() {
	int a=0, b=1, sum=0, count;
	cin >> count;

	cout << 1 << " ";
	for(int i=1; i<count; i++) {
		sum = a + b;
		a = b;
		b = sum;
		cout << sum << " ";
	}

}

int main() {
	// int N, M;
 //    cin >> N >> M;
 //    int index_i=0, index_j=0;  // max number indexes
 //    int A[N][M];
 //    for(int i=0; i<N; i++){
 //        for(int j=0; j<M; j++){
 //            // cin >> A[i][j];
 //            A[i][j] = rand()%201-100;
 //            cout << A[i][j] << "\t";                
 //        }
 //        cout << "\n";
 //    }
 // //    int index_i=0, index_j=0;  // max number indexes
 //       // int A[N][M];
 // //    for(int i=0; i<N; i++){
 // //        for(int j=0; j<M; j++){
 // //        	// find max number indexes
 // //            if(A[i][j]>A[index_i][index_j]){
 // //                index_i = i;
 // //                index_j = j;
 // //            }
 // //        }
 // //    }
    
 // //    cout <<"\n"<<index_i<<" "<<index_j<<" "<<A[index_i][index_j];

	// // 
 //    int row_sum=0, column_sum=0;
 //    for(int i=0; i<N; i++){
 //        for(int j=0; j<M; j++){
 //        	if(j==0) { // პირველი სვეტი, თითოეულ ხაზში
 //        		column_sum += A[i][j];
 //        	}
 //        	if(i==0) {
 //        		row_sum += A[i][j];
 //        	}
 //        }
 //    }

 //    // b[i][j] datvla
 //    B[0][0] = A[0][0];
 //    for(int j=1; j<M; j++) B[0][j] = B[0][j-1] + A[0][j];
 //    for(int i=1; i<N; i++) B[i][0] = B[i-1][0] + A[i][0];
    
 //     for(int i=1; i<N; i++){
 //        for(int j=1; j<M; j++){
 //            B[i][j] = B[i-1][j] + B[i][j-1] - B[i-1][j-1] + A[i][j];
 //        }
 //    }
 //    cout << "\n\n";
 //     for(int i=0; i<N; i++){
 //        for(int j=0; j<M; j++){
 //            cout << B[i][j] << "\t";                
 //        }
 //        cout << "\n";
 //    }
    
    
	// pascal_tri();
	
	fibonacci();

	return 0;
}
