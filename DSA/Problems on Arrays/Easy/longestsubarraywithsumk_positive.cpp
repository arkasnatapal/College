/*      BRUTE FORCE APPROACH

for(int i=0;i<n;i++){
s=0;
for(int j=i;j<n;j++){
s+=a[j];
if(s==k) len=max(len,j-i+1);
}
}

*/