void reverse(string& str, int i, int j ){
    
    cout<<" call recieved for "<< str <<endl;
    // base case
    if(i > j)
        return ;

    swap(str[i], str[j]);
    i++;
    j--;

    // Recursive call
    reverse(str,i,j);
}