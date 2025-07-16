#include<iostream>
using namespace std;
int power(int p,int po){
    int ans=0;
    int i=p;
    int temp=1;
    while(i>0){
    ans = temp*po;
    temp = ans;
    i--;
    }
    if(temp==1){
        return ans+1;
    }
    return ans;
}
int reverse(int ans){
    int temp=0;
    while(ans>0){
     int a = ans%10;
     temp = temp*10+a;
     ans = ans/10;
    
    }
    return temp;
}
int toBinary(int n){
    int ans=0;
  while(n>0){
     ans = ans*10+n%2;
     n=n/2;
   }
   return   reverse(ans);
   
   
}
int toDecimal(int n){
    int ans=0;
    int i=0;
    while(n>0){
        int last = n%10;
        // cout<<"old last"<<last<<endl;
        // cout<<"last"<<last;
    //   cout<<"p"<<power(i)<<endl;
       last = last* power(i,2);
        // cout<<"new last"<<last<<endl;
         ans = ans+last;
        i++;
    //    cout<<"ans"<<ans<<endl;
        n=n/10;
    }
    return ans;
}
int octalToDecimal(int n){
    int i=0;
    int ans=0;
    while(n>0){
        int a = n%10;
        ans = ans+a*power(i,8);
        i++; 
        n=n/10;
    }
    return ans;
    

}
int hexaToDecimal(String n){
    int a=10,b=11,c=12,d=13,e=14,f=15;

    int x=1;
    int ans=0;
    int s = n.size();
    for(int i=s-1;i>=0;i--){
        if(n[i]>='0' && n[i]<='9')
        {
            // cout<<"n value"<<n[i]<<endl;
            // cout<<"sub "<<n[i]<<"- 0"<<n[i]-'0'<<endl;

            ans += x*(n[i]-'0');
            // cout<<"ans "<<ans<<endl;
        }
        else if(n[i]>='a' && n[i]<='f'){

            

            ans += x*(n[i]-'a'+10);
           
                    }
   
    x*=16;
}
return ans;
}
int main(){
    //  decimal to binary
    
    // cout<<"enter decimal number";
    // int n;
    // cin>>n;
    // cout<<toBinary(n);

    // binary to decimal

    cout<<"enter  number";
    string n;
    cin>>n;
    hexaToDecimal(n);
    int b = int(n);
    cout<<"num  is"<<n;

// octal to decimal

// cout<<"enter octal number/number which have number between 0 to 7";
// int n;cin>>n;
// cout<<octalToDecimal(n);

// hexaDecimal to decimal

// cout<<"enter a hexaDecimal number to get the decimal number";
// string n;cin>>n;
// cout<<"decimal number is"<<hexaToDecimal(n);
}