// #include <algorithm>
// #include <iostream>
// #include <vector>
// using namespace std;

// // // sort color
// // // Using Dutch National Flag algorithm

// // // dutch national flag
// // // in this we take 3 pointers,
// // // Time complexity: O(n)
// // // Space complexity: O(1)

// // // int arr[] = {2,0,2,1,1,0};
// // // int size = 6;
// // void sortColor(int arr[], int size) {
// //   int low = 0;
// //   int mid = 0;
// //   int high = size - 1;

// //   while (mid <= high) {
// //     if (arr[mid] == 0) {
// //       swap(arr[low], arr[mid]);
// //       low++;
// //       mid++;
// //     } else if (arr[mid] == 1) {
// //       mid++;
// //     } else if (arr[mid] == 2) {
// //       swap(arr[mid], arr[high]);
// //       high--;
// //     }
// //   }
// // }

// // void transposeMatrix2(int arr[][3], int rowSize, int colSize) {
// //   for (int i = 0; i < rowSize; i++) {
// //     for (int j = i; j < colSize; j++) {
// //       swap(arr[i][j], arr[j][i]);
// //     }
// //   }

// //   for (int i = 0; i < rowSize; i++) {
// //     for (int j = 0; j < colSize; j++) {
// //       cout << arr[i][j] << " ";
// //     }
// //     cout << endl;
// //   }
// // }

// // // Print All pair in 1D matrix
// // void allPairs(int arr[], int size) {
// //   for (int i = 0; i < size; i++) {
// //     for (int j = 0; j < size; j++) {
// //       for (int k = 0; k < size; k++) {
// //         for (int l = 0; l < size; l++) {
// //           cout << arr[i] << " " << arr[j] << " " << arr[k] << " " << arr[l]
// //                << endl;
// //         }
// //       }
// //     }
// //   }
// // }

// // void rotateArrayBy1(int arr[], int size) {
// //   int temp = arr[size - 1];
// //   for (int i = size - 1; i > 0; i--) {
// //     arr[i] = arr[i - 1];
// //   }
// //   arr[0] = temp;
// // }

// // void rotateArrayBy2(int arr[], int size) {
// //   int tempLast = arr[size - 1];
// //   int tempLastLast = arr[size - 2];
// //   for (int i = size - 1; i > 1; i--) {
// //     arr[i] = arr[i - 2];
// //   }
// //   arr[0] = tempLastLast;
// //   arr[1] = tempLast;
// // }

// // //(i + k) % n -> modulo operator
// // // it will give the index of where to to store the value from original array
// // // into new array. e.g rotated by 1 arr=[2,5,6,9,8,7,4,5] after rotation by
// // 2=
// // // [4,5,2,5,6... ] (index+k)%size so new index is = (2+2)%8 = 4 //so 2 nd
// // index
// // // is now at 4th index in new array

// // vector<int> rotateArrayByUserInput(vector<int> &arr, int k) {
// //   int n = arr.size();
// //   vector<int> ans(n);
// //   for (int i = 0; i < n; i++) {
// //     int newIndex = (i + k) % n;
// //     ans[newIndex] = arr[i];
// //   }
// //   arr = ans;
// //   return arr;
// // }

// // // sort -ve ans +ve
// // void arrangNegativeAndPos(int arr[], int size) {
// //   int start = 0;
// //   int end = size - 1;
// //   while (start <= end) {
// //     if (arr[start] > 0) {
// //       swap(arr[start], arr[end]);
// //       cout << "inside if block swapping" << arr[start] << " " << arr[end]
// //            << endl;
// //       end--;
// //       for (int i = 0; i < size; i++) {
// //         cout << arr[i] << " ";
// //       }
// //       cout << endl;
// //     } else {
// //       cout << "inside else block increasing" << arr[start++] << endl;
// //       start++;
// //       for (int i = 0; i < size; i++) {
// //         cout << arr[i] << " ";
// //       }
// //       cout << endl;
// //     }
// //   }
// // }

// // // 23, -7, -10, -11, 40, 60
// // vector<int> rearrangeArray(vector<int> &arr) {
// //   int size = arr.size();

// //   int pos = size / 2;
// //   int neg = size / 2;

// //   vector<int> anspos;
// //   vector<int> ansneg;

// //   vector<int> ans;

// //   for (int i = 0; i < size; i++) {
// //     if (arr[i] > 0) {
// //       anspos.push_back(arr[i]);
// //     } else {
// //       ansneg.push_back(arr[i]);
// //     }
// //   }

// //   for (int i = 0; i < pos; i++) {
// //     cout << anspos[i] << " ";
// //   }
// //   cout << endl;

// //   for (int i = 0; i < neg; i++) {
// //     cout << ansneg[i] << " ";
// //   }
// //   cout << endl;

// //   int i = 0;
// //   int ansSize = arr.size();
// //   while (ansSize > 0) {
// //     ans.push_back(anspos[i]);
// //     cout << anspos[i] << "pushing " << endl;
// //     ans.push_back(ansneg[i]);
// //     cout << ansneg[i] << " pushing" << endl;
// //     i++;
// //     ansSize--;
// //     ansSize--;
// //   }

// //   for (int i = 0; i < size; i++) {
// //     cout << ans[i] << " ";
// //   }
// //   cout << endl;

// //   return ans;
// // }

// // // The pivot index is the index where the sum of all the numbers strictly to
// // the
// // // left of the index is equal to the sum of all the numbers strictly to the
// // // index's right.

// // // Input: nums = [1,7,3,6,5,6]
// // //  Output: 3
// // //  Explanation:
// // //  The pivot index is 3.
// // //  Left sum = nums[0] + nums[1] + nums[2] = 1 + 7 + 3 = 11
// // //  Right sum = nums[4] + nums[5] = 5 + 6 = 11

// // int findPivot(vector<int> &nums) {
// //   int end = nums.size();
// //   // int mid = (start + end) / 2;
// //   int mid = 0;

// //   for (int i = 0; i < end; i++) {
// //     int sumL = 0;
// //     for (int i = 0; i < mid; i++) {
// //       sumL = sumL + nums[i];
// //     }

// //     int sumR = 0;
// //     for (int i = mid + 1; i < end; i++) {
// //       sumR = sumR + nums[i];
// //     }

// //     if (sumL == sumR) {
// //       cout << mid;
// //       return mid;
// //     } else {
// //       mid++;
// //     }
// //   }
// //   return -1;
// // }

// // // remove duplicate element
// // // 0, 0, 1, 1, 1, 2, 2, 3, 3, 4
// // // 0, 1, 2, 3, 4, 5, 6,
// // void removeDuplicate(vector<int> &arr) {
// //   int i = 0;
// //   int start = arr[0];
// //   int end = arr.size();

// //   while (i < end) {
// //     cout << "For i " << i << endl;
// //     if (arr[i] == arr[i + 1]) {
// //       cout << "removing " << arr[i] << " or " << arr[i + 1] << endl;
// //       arr.erase(arr.begin() + i);
// //       end--;
// //       start++;
// //       i++;
// //     }

// //   for (int i = 0; i < arr.size() - 1; i++) {
// //     cout << "For i " << i << endl;
// //     if (arr[i] == arr[i + 1]) {
// //       cout << "removing " << arr[i] << " or " << arr[i + 1] << endl;
// //       arr.erase(arr.begin() + i);
// //       i--;
// //     }

// //     cout << "final value" << endl;
// //     for (int i = 0; i < arr.size(); i++) {
// //       cout << arr[i] << " ";
// //     }
// //     cout << endl;

// //     //   if (arr[start] == arr[start + 1]) {
// //     //     arr.erase(arr.begin());
// //     //   }
// //     // }
// //   }
// // }

// // // Max Avg subarray I
// // // Sliding window
// // double MaxSum(vector<int> &arr, int k) {
// //   double maxSum = 0;
// //   double sum = 0;

// //   // Using sliding window tech
// //   // first we are calculating maxing sum for
// //   // each fixed window (or subArray)
// //   // and store the maxSum in the variable

// //   for (int i = 0; i < k; i++) {
// //     sum += arr[i];
// //     maxSum = sum;
// //   }

// //   // this will iterate for whole array after k
// //   for (int i = k; i < arr.size(); i++) {

// //     // prevoius sum + right new element - left element
// //     sum += arr[i] - arr[i - k];
// //     maxSum = max(maxSum, sum);
// //   }

// //   return maxSum / k;
// // }

// // // Print matrix in wave form
// // void waveFormMatrix(vector<vector<int>> arr) {
// //   for (int i = 0; i < arr[i].size(); i++) {

// //     if (i % 2 == 0) {
// //       for (int j = 0; j <= arr[i].size(); j++) {
// //         cout << arr[j][i] << " ";
// //       }
// //     } else {
// //       for (int j = arr[i].size(); j >= 0; j--) {
// //         cout << arr[j][i] << " ";
// //       }
// //     }

// //     // cout << endl;
// //   }
// // }

// // //printing spiral matrix
// // vector<int> spiralMatrix(vector<vector<int>>& arr) {

// //   vector<int> ans;

// //   int row = arr.size();
// //   int col = arr[0].size();

// //   int top = 0;
// //   int bottom = row - 1;
// //   int left = 0;
// //   int right = col - 1;

// //   while (top <= bottom && left <= right) {
// //     // Traverse from left to right
// //     for (int i = left; i <= right; ++i) {
// //       ans.push_back(arr[top][i]);
// //     }
// //     top++;

// //     // Traverse downwards
// //     for (int i = top; i <= bottom; ++i) {
// //       ans.push_back(arr[i][right]);
// //     }
// //     right--;

// //     // Make sure we are now on a different row
// //     if (top <= bottom) {
// //       for (int i = right; i >= left; --i) {
// //         // cout<<arr[right][i];
// //         ans.push_back(arr[bottom][i]);
// //       }
// //       bottom--;
// //     }

// //     // Make sure we are now in a different column
// //     if (left <= right) {
// //       for (int i = bottom; i >= top; --i) {
// //         // cout<<arr[i][left];
// //         ans.push_back(arr[i][left]);
// //       }
// //       left++;
// //     }
// //   }
// //   return ans;
// // }

// int main() {

//   vector<vector<int>> arr = {
//   {1, 2, 3},
//   {4, 5, 6}, 
//   {7, 8, 9}};

//   int m = arr.size();
//   int n = arr[0].size();

//   cout<<"matrix col "<<m<<" "<<"row "<<n<<endl;

//   vector<int> ans;

//   int row = 0;
//   int col = 0;

//   // int i = 0;

//   bool up = true;

//   while (row < m && col < n) {
//     if (up == true) {
//       while (row > 0 && col < n - 1) {
//         ans.push_back(arr[row][col]);
//         cout<<"adding 1st while"<<arr[row][col]<<endl;
//         row--;
//         col++;
//       }
//        ans.push_back(arr[row][col]);
//       cout<<"adding 1st outside "<<arr[row][col]<<endl;
//       if (col == n - 1) {
//         row++;
//       } else {
//         col++;
//       }
//     } else {
//       while (row < m - 1 && col > 0) {
//         ans.push_back(arr[row][col]);
//         cout<<"adding 2ns outside"<<arr[row][col]<<endl;
//         row++;
//         col--;
//       }
//        ans.push_back(arr[row][col]);
//       cout<<"adding 2nd while "<<arr[row][col]<<endl;
//       if (row == m - 1) {
//         col++;
//       } else {
//         row++;
//       }
//     }
//     up = !up;
//   }

//   for (int i = 0; i <ans.size();i++){
//     cout<<ans[i]<<" ";
//   }

//   //   // sortColor(arr,size);

//   //   // int arr[] = {1,-1};

//   //   // vector<int> nums = {-1, 2, -3, 4, 5, 6, -7, 8, 9};

//   //   for (int i = 0; i < ans.size(); i++) {

//   //     cout << ans[i] << " ";
//   //   }

//   //   // int arr1[] = {1, 2, 3, 4};
//   //   // int n = 4;

//   //   // for (int i = 0; i < n - 1; i++) {
//   //   //   if (i == 0 || i % 2 == 0) {
//   //   //     swap(arr1[i], arr1[i + 1]);
//   //   //     cout << "Swapping for" << i << " " << arr1[i] << " " << arr1[i +
//   //   1]
//   //   //          << endl;
//   //   //   }
//   //   // }

//   //   // for (int i = 0; i < n; i++) {
//   //   //   cout << arr1[i] << " ";
//   //   // }

//   //   // int row = 5;
//   //   // int col = 4;

//   //   // int odd = 0;

//   //   // waveFormMatrix(arr[4][5],row,col);

//   //   // int n = sizeof(arr) / sizeof(arr[0]);

//   //   // sort(nums.begin(), nums.end());

//   //   // cout << sizeof(arr[0]) <<endl;
//   //   // cout << n<<endl;

//   //   // cout << MaxSum(arr, 93);

//   //   // vector<vector<int>> arr1{{6, 1, 5}, {1, 0, 8}};

//   //   // int size = arr1.size();

//   //   // int size = 6;

//   //   // for (int i = 0; i < size; i++) {
//   //   //   for (int j = i; j < arr1[i].size(); j++) {
//   //   //     swap(arr1[i][j], arr1[j][i]);
//   //   //   }
//   //   // }

//   //   // cout << "final value" << endl;
//   //   // for (int i = 0; i < size; i++) {
//   //   //   for (int j = 0; j < arr1[i].size(); j++) {
//   //   //     cout << arr1[i][j] << " ";
//   //   //   }
//   //   //   cout << endl;
//   //   // }

//   //   // arrangNegativeAndPos(arr, size);
//   //   // rearrangeArray(arr);

//   //   // rotateArrayBy2(arr, size);
//   //   // vector<int> ans;

//   //   // for (int i = 0; i < size; i++) {
//   //   //   ans.push_back(arr[i+1]);
//   //   // }
//   //   // ans.insert(ans.end()-1,arr[0]);

//   //   // allPairs(arr, s);

//   //   //  int arr[3][3]={{10,11,12},
//   //   //                  {20,21,22},
//   //   //                  {30,31,32}};
//   //   //  int rowSize=3;
//   //   //  int colSize=3;

//   //   // transposeMatrix2(arr, rowSize, colSize);
// }