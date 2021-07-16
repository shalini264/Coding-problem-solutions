string isSubset(int a1[], int a2[], int n, int m) {
    sort(a1,a1+n);
    sort(a2,a2+m);
    int i=0,j=0,flag=0;
    while(i<n&&j<m)
    {
        if(a1[i]>a2[j])
        {
            flag=1;
            break;
        }
        else if(a1[i]<a2[j])
        {
            i++;
        }
        else if(a1[i]==a2[j])
        {
            i++;
            j++;
        }
    }
    if(j<m)
    flag=1;
    if(flag)
    return "No";
    else
    return "Yes";
}
