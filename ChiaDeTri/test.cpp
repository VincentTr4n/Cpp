#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

const int NUM = 42 ;
class Fibonacci_Words{
private:
       string En ;
       string F_N[NUM] ;
       int p_len ;
       int P_N[NUM] ;
public:
  Fibonacci_Words(){
        Init_F_and_P();
      }
void Init_F_and_P() { 
     F_N[0] = "0" ;P_N[0] = -1 ;
     F_N[1] = "1" ;P_N[1] = -1 ;
     for( int i = 2 ; i < NUM ; i++ ) {
            P_N[i] = -1 ;
            F_N[i] = F_N[i-1] + F_N[i-2] ;
         }        
    }
void Get_P_and_N(string p , int n){
     p_len = p.length();
    }
int  Fibonacci_Words_Solution( string p , int n ){
        int  Q = 0 ;
        if(n >= 2 ){
            En = Get_En( p , n ) ;
            if( P_N[n] == -1){
            Q = Num_Of_P_In_En( p , En);//use Num_Of_P_In_En to get Q[n] 
            P_N[n]=Fibonacci_Words_Solution(p,n-1)+Fibonacci_Words_Solution(p,n-2) + Q;
            }              
            return P_N[n] ;
        }
        if(n == 0 || n == 1){
            P_N[n] = Num_Of_P_In_En( p , F_N[n]);
            return P_N[n] ;
        }
        return 0 ;
      }
string Get_En (string  p , int n ){
    En = "" ;
    int a_n ;   int b_n ;
    a_n = F_N[n-1].length();
    b_n = F_N[n-2].length();    
if( a_n + b_n >= p_len ){
        if(a_n + b_n == p_len ) {
         En = F_N[n];
         return En ;
        }
        if( b_n < p_len && a_n >= p_len ){
            En = F_N[n].substr(a_n - p_len + 1 );
            return En ;
        }
        if(b_n < p_len && a_n < p_len){
            En = F_N[n].substr(0);
            return En ;
        }
        if( b_n >= p_len){
            En = F_N[n].substr(a_n - p_len + 1, 2 * (p_len - 1));
            return En ;
        }
    }
    return En ;
}      
int Num_Of_P_In_En( string p , string En){
    int Q = 0 ; int e_n = En.length();
    for(int i = 0; i <= e_n - p_len ; i++){
        if( p == En.substr(i,p_len) ){
            Q++ ;
        }
    }
    return Q ;
}   
};
int main(){
    int n ;
    string p ;
    int i = 1 ; 
    int  temp  ;
    int j = 0 ; 
while(1){
    cin >> n >> p ;
    Fibonacci_Words Text; 
    Text.Get_P_and_N( p , n );  
    cout << Text.Fibonacci_Words_Solution(p , n) << endl;
}
    return 0 ;     
}
