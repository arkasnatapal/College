/* Functions are set of code which performs something for you
functions are used to modularise code
fuctions are used to increase reusability
functions are used to use same code multiple times
*/
//void -> which will not return anything
//return
//parameterised
//non parameterised

/*example of void non parameterised

#include<bits/stdc++.h>
using namespace std;
void hey(){
    cout<<"hey"<<endl;
}
int main(){
    hey();
    return 0;
}
*/

//example of void parameterised

#include<bits/stdc++.h>
using namespace std;
void hey(string s){
    cout<<"hey"<<"\n"<< s;
}
int main(){
    string s;
    cin>>s;
    hey(s);
    return 0;
}

