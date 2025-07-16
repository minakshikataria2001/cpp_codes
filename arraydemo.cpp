#include<iostream>
using namespace std;
int main()
{
      int arr[] = {2,3,5,5,1};
      int s =5;
      bool flag = false;
      int ans=0;
      for(int i=0;i<5;i++){
        ans =0;
        ans = arr[i];
         for(int j=i+1;j<5;j++){
            
            cout<<"start ans "<<ans<<endl;
            if(ans>s){
                cout<<"big number"<<endl;
                break;
            }
            // else if(ans==s){
            //     cout<<"i "<<i;
            //     cout<<"j "<<j;
            //     break;
            // }
            else if(ans<s){
                ans+=arr[j];
                cout<<"adding "<<arr[j]<<" in ans and ans now is "<<ans<<endl;
                if(ans==s){
               cout<<"i "<<i+1<<endl;
               cout<<"j "<<j+1<<endl;
                flag = true;
                }
            }
         }
         if(flag){
            break;
         }
      } 
   
    return 0;

}