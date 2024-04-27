int commonFactors(int a, int b) {
    int c=0,f=0;
    for(int i=1;i<=(a>b?a/2:b/2);i++){
        if(a%i==0 && b%i==0){
            c++;
        }
    }
    if(a==b){
    return c+1;
    }
    else
    return c;
}
