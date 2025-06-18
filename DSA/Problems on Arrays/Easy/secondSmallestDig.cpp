  //finding the second smallest number of an array using the most optimal code

  #include<bits/stdc++.h>
  using namespace std;
  int main(){
  int n;
  cout << "Enter the size of arr" << endl;
  cin >> n;
  int arr[n];
  cout << "Enter datas in the array " << endl;
  for(int i=0;i<n;i++){
    cin >>arr[i];
  }
  int smallest = arr[0];
  int secondsmall = INT_MAX;
  for(int i=0;i<n;i++){
    if(arr[i]< smallest){;
      secondsmall =smallest;
      smallest = arr[i];
  }
  else if(arr[i]!=smallest && arr[i]< secondsmall){
    secondsmall =arr[i];
  }
}
cout << "Second smallest number is " << secondsmall <<endl;
return 0;
  }