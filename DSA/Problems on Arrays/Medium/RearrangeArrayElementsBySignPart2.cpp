/* see if the total numbers of elements in the array is not even that means no of pos != no of neg 
so there are two cases either we have positive > negative or we have negative > positive now lets code it 
see here dont fall into the trap of OPTIMAL SOLUTION the BRUTE FORCE IS ACTUALLY THE ANSWER 

the leetcode edition is given below  (JUST SYNTAX AND UNDERSTANDING)*/

vector<int> alternateNumbers(vector<int>&a){
    vector<int>pos,neg;
    int n=a.size();
    for(int i=0;i<n;i++){
        if(a[i]>0){
            pos.push_back(a[i]);
        }
        else{
            neg.push_back(a[i]);
        }
    }
    if(pos.size()>neg.size()){
        for(int i=0;i<neg.size();i++){
            a[2*i]=pos[i];
            a[2*i+1]=neg[i];
        }
        int index=neg.size()*2;
        for(int i=neg.size();i<pos.size();i++){
            a[index]=pos[i];
            index++;
        }
    }
    else{
for(int i=0;i<pos.size();i++){
            a[2*i]=pos[i];
            a[2*i+1]=neg[i];
        }
        int index=pos.size()*2;
        for(int i=pos.size();i<pos.size();i++){
            a[index]=neg[i];
            index++;
        }
    }
    return a;
}