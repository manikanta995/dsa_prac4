#include<iostream>
#include<math.h>
using namespace std;



/*
int main(){ 

    int a = 4 ;
    int b = 8 ;

    cout<<"a & b " << (a&b)<< endl;
    cout<<"a | b " << (a|b) << endl;
    cout<<"a~ " << (~a) << endl;
    cout<<"a^b " << (a^b)<< endl;

    cout<< (17>>1) << endl;
    cout<< (17>>2) << endl;
    cout<< (19<<1) << endl;
    cout<< (21<<2) << endl;

    int i = 7;
    
    cout<< (++i) << endl;
    cout<< (i++) <<endl; 
    cout<< (i--) << endl;
    cout<< (--i) << endl;

    */

/* 
   int n;
   cout<<"enter the value of n"<< endl;

    cin>> n;

     int sum = 0;
    
    for(int i = 1 ; i<=n ; i++){
        sum += i;
        
    }
    cout<< sum << endl;
}
*/

/*
int n ;
cout<<"enter the value of n"<< endl;
cin>>n;

int i = 1;
int a = 0;
int b = 1;

cout << a << " " << b<< " ";

for (i = 0; i<=n ; i++){

int nextn0 = a+b;
cout<<nextn0<< " ";

a = b;
b = nextn0;

}
}

*/

/*
int main(){

    int n;
    cout << "enter the value of n"<< endl;  
    cin>> n;

    
    bool isprime = 1;

    for( int i = 2 ; i<n; i++){

        if(n%i ==0){
            isprime = 0;
            break;
        }
        }

        if(isprime == 0){
            cout<<"no is not prime"<< endl;
        }
        else{
           cout <<"no is prime "<< endl;

        }
}
  
*/

/*
int main(){

    int n;
    cout<<"enter the value of n" << endl;
    cin>> n;

    for( int i = 1; i<=n ; i++){
        cout<<"hi"<< endl;
        cout<<"heyya"<< endl;

        continue;
    // after continue, everything is unreachbale ..
        cout<< "reply toh karde "<< endl;

    }
}
*/

/*
int main(){
    for(int i  = 0; i<=15 ;i+=2 ){
        cout<< i << " ";
        
            if(i&1){
            continue;
            }
            i++;

        
    }
}

*/

/* 
int main(){
    int a =  3;
    
    cout<< a << endl;

    if(true){
        int b = 5;
        cout <<b << endl;
    }
int b =7;
cout << b<< endl;


}

*/

/*
int main(){

    int n;
    cin>> n;

    int ans = 0;
    int i = 0;

    while (n != 0){

        int digit = n%10;

       if(digit == 1){
        ans = ans + pow(2,i);

       }
       n=n/10;
       i++;
    
    }
    cout <<"answer is "<<ans<< endl;
}
*/


int main(){

    int n;
    cin>> n;

    int ans = 0;
    while(n !=0){

        int digit = n % 10;
        ans = ans * 10 + digit;
        n=n/10;
    }

    cout<<"reverse integer is "<< ans<< endl;
    

}