#include<iostream>
#include<vector>
#include<conio.h>
using namespace std;
void find_permutations(vector<int> &arr, int i, vector<vector<int>> &ans)
{
   if(i==arr.size())
   {
     ans.push_back(arr);
     return;
   }
   for(int ind=i; ind<arr.size(); ind++)
   {
     swap(arr[i],arr[ind]);
     find_permutations(arr,i+1,ans);
     swap(arr[i],arr[ind]);
   }
}
int main()
{   
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    cout<<"Enter the size of the array\n";
    int n;
    cin>>n;
    cout<<"Enter array elements\n";
    vector<int> arr(n);
    for(int i=0; i<n; i++)
     cin>>arr[i];
    vector<vector<int>> ans;
    find_permutations(arr,0,ans);
    for(int i=0; i<ans.size(); i++)
    {
        for(int j=0; j<ans[i].size(); j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    getch();
}