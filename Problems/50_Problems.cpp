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


