#include <iostream>
using namespace std;

intlse if (j == 2 * i) {
          cout << i + 1;
        } else {
          cout << " ";
        }
      }
    }
    cout << endl;
  }

  // number traingle and reverse
  //  int n;
  //  cin>>n;

  // for(int i=0;i<n;i++){

  //   for(int space=0;space<n-i-1;space++){
  //     cout<<" ";
  //   }

  //   for(int j=0;j<i+1;j++){
  //     cout<<i+j+1;
  //   }

  //   int start = 2*i;
  //   for(int rev=0;rev<i;rev++){
  //     cout<<start;
  //     start--;
  //   }
  //   cout<<endl;
  // }

  // butterfly

  // int n;
  // cin >> n;

  // // upper
  // for (int row = 0; row < n; row++) {
  //   for (int col = 0; col < row + 1; col++) {
  //     cout << "*";
  //   }

  //   for (int col = 0; col < 2 * n - 2 * row - 2; col++) {
  //     cout << " ";
  //   }

  //   for (int col = 0; col < row + 1; col++) {
  //     cout << "*";
  //   }
  //   cout << endl;
  // }

  // // lower
  // for (int row = 0; row < n; row++) {
  //   for (int col = 0; col < n-row; col++) {
  //     cout << "*";
  //   }

  //   for (int col = 0; col < 2 * row; col++) {
  //     cout << " ";
  //   }

  //   for (int col = 0; col < n-row; col++) {
  //     cout << "*";
  //   }
  //   cout << endl;
  // }

  // hollow right
  //  int n;
  //  cin >> n;

  // for (int i = 0; i < n; i++) {
  //   for (int j = 0; j < n - i; j++) {
  //     if (i != 0) {
  //       if (j == 0 || j == n - i - 1) {
  //         cout << "* ";
  //       } else {
  //         cout << "  ";
  //       }
  //     } else if (i == 0 && j<n-i) {
  //       cout << "* ";
  //     }
  //   }
  //   cout << endl;
  // }

  // Alphabet patens withe reverse ABCDCBA
  //  int n;
  //  cin >> n;
  //  for (int i = 0; i < n; i++) {

  //   for (int j = 0; j < i + 1; j++) {
  //     int ans = j+1;
  //     char ch = ans+'A'-1;
  //     cout << ch;
  //   }

  //   for (int k=i; k >= 1; k--) {
  //     int ans = k;
  //     char ch = ans+'A'-1;
  //     cout << ch;
  //   }

  //   cout << endl;
  // }

  // number and star in betwwen number

  // int n;
  // cin >> n;

  // // upper half
  // for (int i = 0; i < n; i++) {
  //   for (int j = 0; j < i + 1; j++) {
  //     cout << i + 1;
  //     if (j != i) {
  //       cout << "*";
  //     }
  //   }
  //   cout << endl;
  // }

  // // lower half

  // for (int i = 0; i < n; i++) {
  //   for (int j = 0; j < n - i; j++) {
  //     cout << n - i;
  //     if (j != n - i - 1) {
  //       cout << "*";
  //     }
  //   }
  //   cout << endl;
  // }

  // hollow diamond mix
  // int n;
  // cin >> n;

  // for (int row = 0; row < n; row++) {

  //   // first hald piramid
  //   for (int col = 0; col < n - row; col++) {
  //     cout << "*";
  //   }

  //   // Piramid
  //   for (int col = 0; col < 2 * row + 1; col++) {
  //     cout << " ";
  //   }

  //   // second hald piramid
  //   for (int col = 0; col < n - row; col++) {
  //     cout << "*";
  //   }

  //   cout << endl;
  // }

  // // downward

  // for (int row = 0; row < n; row++) {
  //   // first half piramid
  //   for (int col = 0; col < row + 1; col++) {
  //     cout << "*";
  //   }

  //   // // Piramid
  //   for (int col = 0; col < 2 * n - 2 * row - 1; col++) {
  //     cout << " ";
  //   }

  //   // second half piramid
  //   for (int col = 0; col < row + 1; col++) {
  //     cout << "*";
  //   }

  //   cout << endl;
  // }

  // Diamond
  // int n;
  // cin >> n;

  // for (int row = 0; row < n; row++) {
  //   // upar
  //   for (int col = 0; col < n - row - 1; col++) {
  //     cout << " ";
  //   }
  //   for (int col = 0; col < 2 * row + 1; col++) {
  //     if (col == 0 || col == 2 * row) {
  //       cout << "* ";
  //     } else {
  //       cout << " ";
  //     }
  //   }
  //   cout << endl;
  // }
  // // niche
  // for (int row = 0; row < n; row++) {
  //   for (int col = 0; col < row; col++) {
  //     cout << " ";
  //   }

  //   for (int col = 0; col < 2 * n - 2 * row - 1; col++) {
  //     if (col == 0 || col ==  2 * n - 2 * row - 2) {
  //       cout << "* ";
  //     } else {
  //       cout << " ";
  //     }
  //   }
  //   cout << endl;
  // }

  // number triangle
  //  int a;
  //  cin >> a;

  // for (int i=0; i < a; i++) {
  //   for(int k=0;k<a-i-1;k++){
  //     cout << " ";
  //   }
  //   for (int j=0; j <i+1; j++){
  //     cout<<  "i ";
  //   }
  //   cout<<endl;
  // }

  // //inverted equlataral triangle
  // int a;
  // cin >> a;

  // for (int i=0; i < a; i++) {
  //   for(int k=0;k<i;k++){
  //     cout << " ";
  //   }
  //   for (int j=0; j < a-i; j++){
  //     cout<<"* ";
  //   }
  //   cout<<endl;
  // }

  // equlataral triangle
  //  int a;
  //  cin >> a;

  // for (int i=0; i < a; i++) {
  //   for(int k=0;k<a-i-1;k++){
  //     cout << " ";
  //   }
  //   for (int j=0; j < i+1; j++){
  //     cout<<"* ";
  //   }
  //   cout<<endl;
  // }

  // inverted trainagle number
  // int n;
  // cin >> n;

  //  for (int i = 0; i < n; i++) {
  //    for (int j = 0; j <n- i; j++) {
  //      cout << j+1;
  //    }
  //    cout << " " << endl;
  //  }

  // // trainagle number
  // int n;
  // cin >> n;

  //  for (int i = 0; i < n; i++) {
  //    for (int j = 0; j < i+1; j++) {
  //      cout << j+1;
  //    }
  //    cout << " " << endl;
  //  }

  // // half piramid inverted
  // int n;
  // cin >> n;

  //  for (int i = 0; i < n; i++) {
  //    for (int j = 0; j < n-i; j++) {
  //      cout << "* ";
  //    }
  //    cout << " " << endl;
  //  }

  // // half piramid
  // int a;
  // cin >> a;

  // for (int i=0; i < a; i++) {
  //   for (int j=0; j < i+1; j++){
  //     cout<<"* ";
  //   }
  //   cout<<endl;
  // }

  // Hollow rec
  // int n, m;
  // cout << "Enter rows: " << endl;
  // cin >> n;
  // cout << "Enter column: " << endl;
  // cin >> m;

  // for (int i = 0; i < n; i++) {
  //   if (i == 0 || i == n - 1) {
  //     for (int j = 0; j < m; j++) {
  //       cout << "* ";
  //     }
  //     cout << endl;
  //   } else {
  //     cout << "* ";
  //     for (int a = 0; a < m - 2; a++) {
  //       cout << "  ";
  //     }
  //     cout << "* ";

  //     cout << endl;
  //   }
  // }

  // rectangle
  //  for (int i = 0; i < n; i++) {
  //    for (int j = 0; j < n; j++) {
  //      cout << "* ";
  //    }
  //    cout << " " << endl;
  //  }
}