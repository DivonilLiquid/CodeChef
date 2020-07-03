#include <iostream>
#include<vector>
using namespace std;
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    double ans=0;
    if(nums1.size()==0 && nums2.size()!=0){
            if(nums2.size()%2==0){
            int m=nums2.size();
            m=m/2-1;
            ans=(double)(nums2[m]+nums2[m+1])/2;
        }
        else{
            int m= nums2.size()/2;
            ans=nums2[m];
        }
    }
    else if(nums2.size()==0 && nums1.size()!=0){
        if(nums1.size()%2==0){
            int m=nums1.size();
            m=m/2-1;
            ans=(double)(nums1[m]+nums1[m+1])/2;
        }
        else{
            int m=nums1.size()/2;
            ans=nums1[m];
        }
    }
    else{
    int p1=0;
    int p2=0;
    vector<int> temp;
    while(p1!=nums1.size() || p2!=nums2.size()){
        if(nums1[p1]<=nums2[p2]){
            temp.push_back(nums1[p1]);
            p1++;
        }
        else{
            temp.push_back(nums2[p2]);
            p2++;
        }
    }
        while(p1!=nums1.size()){
            temp.push_back(nums1[p1]);
            p1++;
        }
        while(p2!=nums2.size()){
            temp.push_back(nums2[p2]);
            p2++;
        }
    if(temp.size()%2==0){
            int m=temp.size();
            m=m/2-1;
            ans=(double)(temp[m]+temp[m+1])/2;
        }
        else{
            int m= temp.size()/2;
            ans=temp[m];
        }
    }
    return ans;
}
/*
    one pointer placed at starting of every vector
    when you find element smaller from one vector from another vector
    insert that element in that vector
    insert till they both die
    find length of the vector
    if its even then find mean of two middle element
    else return the middle most element
*/
int main()
{
    vector<int> v1,v2;
    int n1,n2;
    cin>>n1>>n2;
    int t;
    for(int i=0;i<n1;i++){
        cin>>t;
        v1.push_back(t);
    }
    for(int i=0;i<n2;i++){
        cin>>t;
        v2.push_back(t);
    }
    cout<<findMedianSortedArrays(v1,v2)<<endl;
    return 0;
}
