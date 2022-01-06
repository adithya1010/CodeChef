/* Code:
**Covid and Theatre Tickets Problem Code: COVID_19**

Mr. Chef is the manager of the Code cinemas and after a long break, the theatres are now open to the public again. To compensate for the loss in revenue due to Covid-19, Mr. Chef wants to maximize the profits for every show from now on and at the same time follow the guidelines set the by government. The guidelines are:

- If two people are seated in the same row, there must be at least one empty seat between them.
- If two people are seated in different rows, there must be at least one **completely empty row** between them. That is, if there are people seated in rows *i*

and *j* where *i*<*j*, there must be some row *k* such that *i*<*k*<*j* and nobody is seated in row *k*

- .

Given the information about the number of rows and the number of seats in each row, find the maximum number of tickets Mr. Chef can sell.

**Input Format**

- The first line of input will contain a single integer *T*

, denoting the number of test cases. The description of *T*

- test cases follows.
- Each test case consists of a single line of input containing two space-separated integers *N*,*M*
- — the number of rows and the number of seats in each row, respectively.

**Output Format**

For each test case, output a single line containing one integer – the maximum number of tickets Mr. Chef can sell.

**Constraints**

- 1≤*T*≤100
- · 1≤*N*,*M*≤100
-

**Sample Input 1**

3

1 5

3 3

4 4

**Sample Output 1**

3

4

4

**Explanation**

**Test Case 1:** There is only one row with five seats. Mr. Chef can sell a maximum of 3 tickets for seat numbers 1, 3 and 5.

**Test Case 2:** There are three rows with three seats each. Mr. Chef can sell a maximum of 4 tickets, for seats at the start and end of row numbers 1 and 3.

**Test Case 3:** There are four rows with four seats each. Mr. Chef can sell a maximum of 4 tickets, for example by choosing the seats at the start and end of row numbers 1 and 4.

Author: [4★devendra7700](https://www.codechef.com/users/devendra7700)

Date Added: 30-12-2021

Time Limit: 1 secs

Source Limit: 50000 Bytes

Languages: CPP14, C, JAVA, PYTH 3.6, CPP17, PYTH, PYP3, CS2, ADA, PYPY, TEXT, PAS fpc, NODEJS, RUBY, PHP, GO, HASK, TCL, PERL, SCALA, LUA, kotlin, BASH, JS, LISP sbcl, rust, PAS gpc, BF, CLOJ, R, D, CAML, FORT, ASM, swift, FS, WSPC, LISP clisp, SQL, SCM guile, PERL6, ERL, CLPS, ICK, NICE, PRLG, ICON, COB, SCM chicken, PIKE, SCM qobi, ST, SQLQ, NEM */
#include <iostream>
using namespace std;

int main() {
    int T,M,N,A,B,C;
    cin>>T;
    for(int i=0;i<T;i++){
        cin>>N>>M;
        A=N/2;
        B=M/2;
        if(A==0){
            A=1;
        }

        if((N%2 != 0) && (N!=1)){
          A+=1;
        }
         if(M%2 != 0){
          B+=1;
        }
       C=A*B;
        cout<<C<<endl;
        A=0;
        B=0;
    }
    return 0;
}
