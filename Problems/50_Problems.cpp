/*
Hey i'm Gautam Kumar Mahar 
Here i solved 50 Practice Problems in c++;
*/
 

//---------------------------------------------------- 



/*
Problem 1- 
Where does a cin stops it extraction of data?
a) By seeing a blankspace        <---- Right answer
b) By seeing ()
c) By seeing newline character
d) All of the above     
*/


/*
Problem 2- 
..............Produce results of typr bool which takes a value true or false ?
a) Relational expressions    <---- Right answer
b) Float expressions
c) Logical expressions
d) Bitwise expressions 
*/


/*
Problem 3- 
The..............is a multiple-branching statement where based on a condition, the control is transferred to one of the many possible points.
a) while        
b) For
c) do-while
d) switch-case      <---- Right answer
*/

/*
Problem 4- 
Which is the correct syntax to delete a single object?
a) delete *objectName;  
b) objectName delete;
c) delete objectName;         <---- Right answer
d) objectName *delete;    
*/

/*
Problem 4- 
What is the output of this program;
int i; 
cout<<"Please enter an integer value:";
cin>>i+4;
cout<<i;
a) Your input + 4
b) Your input - 4
c) Error         <---- Right answer
d) Garbage value   
*/


/*
Problem 5- 
What is the output of this program;
int i; 
cout<<"Please enter an integer value:";
cin>>i+4;
cout<<i;
a) Your input + 4
b) Your input - 4
c) Error         <---- Right answer
d) Garbage value   
*/

/*
Problem 6- 
which statement is used to catch all types of exceptions ?
a) catch()
b) catch(Test)
c) catch(...)       <---- Right answer
d) catch(Test t) 
*/

/*
Problem 7- 
comment on the following const int* ptr;
a) We cannot change the value pointed by ptr.               <---- Right answer
b) We cannot change the pointer ptr itself.
c) Both of the above             
d) We can change the pointer as well as the value pointed by it.
*/

/*
Problem 8- 
Comment on the following:
int *const ptr;
a) We cannot change the value pointed by ptr
b) We cannot change the pointer ptr itself         <---- Right answer
c) Both of the above      
d) We can change the pointer as well as the value pointed by it.
*/

/*
Problem 9- 
Comment on the following: 
const int* const ptr;
a) We cannot change the value pointed by ptr
b) We cannot change the pointer ptr itself.
c) Both of the above                  <---- Right answer
d) We can change the pointer as well as the value pointed by it.
*/

/*
Problem 10-
The declaation "p is a pointer to 6 by 3 array of pointers to arrays of 20 pointers to constant integers" appears as? 
a) const int (*(*p)[6][3])[20];
b) const int *(*(*p)[6][3])[20];    <---- Right answer
c) const int **(*(*p)[6][3])[20]);      
d) const int **(*(*p)[6][3])[20];
*/

/*
Problem 11- 
//What is Output ?
#include <iostream>
using namespace std;
int main(){
    int a=5,b=3,c=1;
    int result = c-- && ++b && a--;
    cout<<a<<b<<c<<endl;
    return 0;
}
Answer - 440 
*/

/*
Problem 12- 
// what is output?
#include <iostream>
using namespace std;
int main(){
    int a=5,b=3,c=1;
    int result = --c && ++b && a--;
    cout<<a<<b<<c<<endl;
    return 0;
}
Answer - 530
*/

/*
Problem 13- 
// what is output?
#include <iostream>
using namespace std;
int jumble(int x, int y){
    x=2*x+y;
    retrun x;
}
int main(){
    int x=2;y=5;
    y=jumble(y,x);
    x=jumble(y,x);
    cout<<x<<endl;
    return 0;
}
Answer - 26
*/

/*
Problem 14- 
// what is output?
#include <iostream>
using namespace std;
int jumble(int &x, int &y){
    x=2*x+y;
    return x;
}
int main(){
    int x=2,y=5;
    y=jumble(x,y);
    x=jumble(x,y);
    cout<<x<<endl;
    return 0;
}
Answer - 27
*/

/*
Problem 15- 
// what is output?
#include <iostream>
using namespace std;
int main(){
    int a[] ={1, 2, 3, 4, 5, 6, 7};
    int *p = a+2;
    int **q = &p;
    ++*q;
    cout<<*(a+1)<<" "<<*p<< " "<<*(*q+1)<<endl;
    return 0;
}
Answer - 245
*/



/*
// Problem 16- 1st part part 
// what does the following fragment of C-program print?
char c[] = "GATE2011"
char *p = c;
printf("%s",p+p[3]-p[1]);

a) GATE2011
b) E2011
c) 2011    <---- Rigth answer 
d) 011

------------------------------------------------------------------------->

// Problem 16 - 2nd part 
// Consider the following recursive c function that takes two arguments
// Unsigned int foo(unsigned int n, unsigned int r){
    if(n>0) return (n%r + foo(n/r,r));
    else return 0;
}
A) what is the return value of the function foo when it is called as foo(513,2)?
i)  9
ii) 8
iii)5
iv) 2      <--- right answer

B) what is the return value of the function foo when it is called as foo(345, 10)?
i) 345
ii) 12    <-- rigth answer
iii) 5
iv)  3
*/

/*
Problem 17- 
// what is output?
#include <iostream>
using namespace std;
int main(){
    int a[] ={1, 2, 3, 4, 5, 6, 7};
    int *p[] = {a+1, a+3, a, a+5, a+4};
    int **q = p;
    cout<<*a<<" "<<**p<<" "<<**q<<endl;
    ++*++*q;
    cout<<*a<<" "<<**p<<" "<<endl;
    ++++*p;
    ++*++++q;
    cout<<*a<<" "<<**p<<" "<<**q<<endl;
    return 0;
}
Answer -
*/

/*
Problem 18- 
// Consider the following function:
void convert(int r){
    if(n<0)
       cout<<n;
    else{
        convert(n/2);
        cout<<(n%2);
    }
}
Que - Which one of the following will happen when the function convert is called with any positive integer n as argumrnt?
a) It will print the binary representation of n and terminate 
b) It will print binary representation of n in the reverse order and terminate
c) It will print the binary representation of n but will not terminate
d) It will not print anything and will not terminate                       <--------- Right answer
*/

/*
Problem 19- 
// what is output?
#include <iostream>
using namespace std;
int main(){
    static int x=1;
    cout<< x << " ";
    x++;
    if(x<11){
        main();
    }
    cout << x <<" ";
    return 0;
}
Answer - 1 2 3 4 5 6 7 8 9 10
*/

/*
Problem 20- 
// what is output?
#include <iostream>
using namespace std;
int main(){
    static int  x =1;
    x++;
    if(x < 11){
        main();
    }
    cout<< x << " ";
    return 0;
}
Answer - 11 11 11 11 11 11 11 11 11 11
*/

/*
Problem 20- 
// what is output?
#include <iostream>
using namespace std;
int main(){
    static int  x =1;
    x++;
    if(x < 11){
        main();
    }
    cout<< x << " ";
    return 0;
}
Answer - 11 11 11 11 11 11 11 11 11 11
*/

/*
Problem 21- 
// what is output?
#include <iostream>
using namespace std;
int fun(int n){
    if(n==0 || n==1) return 1;
    else return fun(n-1)+fun(n-2);
}
int main(){
    static int  n = 5;
    cout<< fun(n) << endl;
    return 0;
}
Answer - 8
*/


/*
Problem 22- 
// what is output?
#include <iostream>
using namespace std;
void fun(int n){
    cout<<"hello"<<n<<endl;
}
void fun(char n){
    cout<<"what's up"<<n<<endl;
}
int main(){
    long long int a = 1e5 + 7;
    fun(a);
    return 0;
}
Answer - Error: call to 'fun is ambiguous
*/

/*
Problem 23- 
// what is output?
#include <iostream>
using namespace std;
void fun(int *p, int *q){
    p = q;
   *p%= 7;
   *q*=2;
}
int main(){
    int a = 10, b = 20;
    fun(&a, &b);
    cout<<a<<" "<<b<<endl;
    return 0;
}
Answer - 10 12
*/

/*
Problem 24- GATE 2000
// what is output?
#include <iostream>
using namespace std;
The most appropriate matching for the following pairs 
X: m=malloc(5); m =NULL;
Y: free(n);n->value=5;
Z: char*p; *p='a';

1: using dangling
2: using uninitialized pointers
3: loat memory

a) X-1, Y-3, Z-2
b) X-2, Y-1, Z-3
c) X-3, Y-2, Z-1
d) X-3, Y-1, Z-2                 <--------- right answer
*/


/*
Problem 25- 
// what is output?
#include <iostream>
using namespace std;
void fun(int *p){
    int q = 10;
    p = &q;
}
int main()
{
    int r = 20;
    int *p = &r;
    fun(p);
    cout<*p<<endl;
    return 0;
}
Answer - 20
*/


/*
// Problem 26- 
// what is output?
#include <iostream>
using namespace std;

char *p[] = {"HELLO", "THIS", "IS", "JAY"};
char **q[] = {p+3, p+2, p+1, p};
char ***r = q;
int main(){
    cout<<**++r<<" ";
    cout<<*--*++r+2<<" ";
    cout<<*r[-2]+1<<" ";
    cout<<r[-1][-1]+1<<endl;
    return 0;
}
// Answer - IS LLO AY HIS
*/
  
/*
Problem 27- 
// what is output?
#include <iostream>
using namespace std;
int main(){
    int ch;
    cin>>ch;
    switch(ch){
        case 'a': cout<<"a";break;
        case 'e': cout<<"e";break;
        case 'i': cout<<"i";break;
        default: cout<<"consonant";
        case 'o': cout<<"o";
        casee 'u': cout<<"u";
    }
    cout<<endl;
    return 0;
}
// Answer - consonant ou
*/

/*
Problem 28- 
// what is output?
#include <iostream>
using namespace std;
int main(){
    int a=32, *ptr = &a;
    char ch = 'A', &cho = ch;
    cho +=1;
    *ptr += ch;
    cout<< a << ", " << ch << endl;
    return 0;
}
// Answer - 98,B
*/

/*
// Problem 29- 
// what is output?
#include <iostream>
using namespace std;
typrdef struct A{
    char a;
    short int b;
    double c;
    char d;
} oA;
int main(){
    cout<< sizepf(oA) << endl;
    return 0;            
}
// Answer - 24
*/

// --------------------------------------------------- Now some easy problems -_-

/*
// Problem 30- 
// what is output?
#include <iostream>
using namespace std;
int main(){
   string s;
   cin>>s;
   cout<<s<<endl;
    return 0;            
}
// Input - Hello World!
// Answer (output) - Hello
*/


/*
// Problem 31- 
// what is output?
#include <iostream>
using namespace std;
int main(){
    int a=2; b=7; c;
    c = (a > b) ? a : b;
    cout<<c;
    return 0;            
}
// Answer - 7 
*/


/*
// Problem 32- 
// what is output?
#include <iostream>
using namespace std;
int fun(int &x, int c){
    c = c-1;
    if(c==0) return 1;
    x = x+1;
    return fun(x,c) * x;
}
int main(){
    int p =5;
    cout<< fun(p,p) <<endl;
    return 0;            
}
// Answer - 6561
*/


/*
// Problem 33- 
// what is output?
#include <iostream>
using namespace std;
int main(){
    int a = 10, b=5, c=3;
    b != !a;
    c = !!a;
    cout<< b <<" "<< c << endl;
    return 0;        
}
// Answer - 5 1
*/


/*
// Problem 34- 
// what is output?
#include <iostream>
using namespace std;
int main(){\
    const int x = 10;
    int *ref = &x;
    cout<< *ref;
    return 0;            
}
// Answer - Error ( because of "we cannot point integer pointer to constant integer"  -> we can do like this "const int* ptr") 
*/


/*
// Problem 35- 
// what is output?
#include <iostream>
using namespace std;
int main(){
    int i =4;
    cout<< i++ << i++ << i++ << endl;
    return 0;            
}
// Answer - 4 5 6 
*/


/*
// Problem 36- 
// what is output?
#include <iostream>
using namespace std;
int main(){
    int i =4;
    cout<< ++i << i++ <<endl;
    return 0;            
}
// Answer -  5 5
*/


/*
// Problem 37- 
// what is output?
#include <iostream>
using namespace std;

int main(){
    const char *p = "Hello";
    p++;
    cout<< p << endl;
    return 0;            
}
// Answer - ello
*/


/*
// Problem 38- 
// what is output?
#include <iostream>
using namespace std;

int main(){
    cout<< (int*)main << endl;
    return 0;            
}
// Answer -> Address of main function <- will be printed.
*/


/*
// Problem 39- 
// what is output?
#include <iostream>
using namespace std;

int main(){
    int(*ptr)(int)= fun;
    (*ptr)(3);
    return 0;            
}
int fun(int n){
    while(n--)
    cout<<"Hello"<<endl;
    return 0;
}
// Answer - error: use of undeclared identifier 'fun'
*/

/*
// Problem 40- 
// what is output?
#include <iostream>
using namespace std;
int fun(int n){
    while(n--)
    cout<<"Hello"<<endl;
    return 0;
}
int main(){
    int(*ptr)(int)= fun;
    (*ptr)(3);
    return 0;            
}
// Answer - Hello
            Hello
            Hello
*/

/*
// Problem 41- 
// what is output?
#include <iostream>
using namespace std;

int main(){
    const int *ciData  = new int;  // This statement is fine -> const int* cidata - new int(5);
    *ciData = 7;
    cout<< *ciData <<endl;
    return 0;            
}
// Answer -> error: read-only variablr is not assignable
*/



 /*
// Problem 42- 
// what is output?

const int a =7;
const int *p = &a;
cout<< *++p << endl;
// Answer -> Garbage
*/


/*
// Problem 43- 
// what is output?
#include <iostream>
using namespace std;

int fun(int &b, int &a){
    static int z=4;
    while(--z>0){
        fun(b, a);
        a*=2;
        b--;
    }
    return a+b+10;
}
int main(){
    int a=5, b=7;
    cout<< fun(a, b)<<endl;
    cout << a << " "<<b <<endl;
    return 0;
}
// Answer -> 68
//          2 56
*/


/*
// Problem 44- 
// what is output?
#include <iostream>
using namespace std;
int fun1(int n){
    int t =n, out = 0;
    while(t!=0){
        out += t%10;
        t /= 10;
    }
    return out;
}
int fun2(int n ){
    if(n%2==0) return fun1(n);
    else       return fun1(n%10 + n/10);
}
// Calculate the output of fun2(1001)
// Answer -> 2
*/



/*
// Problem 45- 
// what is output?
#include <iostream>
using namespace std;
int fun1(int n, int &x){
    x = x+11;
    n = n-12;
    return 2*n+x;
}
int main(){
    int n;
    cin>>n;
    n = fun1(n, n) -n;
    cout << n << endl;
    return 0;
}
//Calculate the output on n = 13
// Answer -> 2
*/

/*
// Problem 46- 
// what is output?
#include <iostream>
using namespace std;
void fun(int a, int b){
    int temp - a;
    b = a;
    a = temp;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<a<<" "<<b;
    return 0;
}
//Calculate the output on the input 3 4
// Answer -> 3 4
*/



/*
// Problem 47- 
// what is output?
#include <iostream>
using namespace std;
long long fun(long long n){
    long long result = 0;
    while(n!=0){
        result = result*10 + n%10;
        n /= 10;
    }
    return result;
}
int main(){
    long long n;
    cin>>n;
    cout<<fun(n)<<endl;
    return 0;
}
//Calculate the output on input n = 16337893829345
// Answer -> 54392839873361
*/


/*
// Problem 48- 
// what is output?
#include <iostream>
using namespace std;
int main(){
    int a = 2.1;
    float b = 2.1;
    if(a==b) cout<<"Equal"<<endl;
    else     cout<<"Not Equal"<<endl;
    return 0;
}
Guess the output of this program
// Answer -> Not Equal
*/

/*
// Problem 49- 
// what is output?
#include <iostream>
using namespace std;
int fun1(int);
int fun2(int);
int fun1(int n){
    if(n<=1) return 1;
    return fun2(n-2) + fun1(n-1);
}
inf fun2(int n){
    if(n<=0) return 0;
    if(n%3==0) return fun2(n/2);
    else       return fun1(n-3);
}
int main(){
    int n;
    cin>>n;
    cout<< fun2(n)<<endl;
    return 0;
}
// Calculate the output on n =13
// Answer -> 14
*/


/*
// Problem 50- 
// what is output?
#include <iostream>
using namespace std;
void gun(string s){
    if(s[0]=='\0') return;
    gun(s.substr(1));
    cout<<s[0];
}
int main(){
    string s;
    cin>>s;
    gun(s);
    cout<<endl;
    return 0;
}
// Calculate the output on s = "abac" (without quotes)
// Answer -> caba
*/


/* 
Finally I Complete 50 Problems On C++ 
Next Move - I Will Make Sure Solve More Problems Soon.
*/







