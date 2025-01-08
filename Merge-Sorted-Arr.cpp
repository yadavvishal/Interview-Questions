#include <bits/stdc++.h>
using namespace std;
// Merge sorted array
// Time complexicty O((m + n) log(m + n))

 void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int j=m;
        for(int i=0;i<n;i++){
            nums1[j]=nums2[i];
            j++;
        }
        sort(nums1.begin(),nums1.end());
}
int main() {
  vector<int> nums1 = {1, 2, 3, 0, 0, 0};  
    vector<int> nums2 = {2, 5, 6};
   int m=3;
   int n=3;
   merge(nums1,m,nums2,n);
   
   for(int i=0;i<nums1.size();i++){
       cout<<nums1[i]<<"";
   }
    return 0;
}
