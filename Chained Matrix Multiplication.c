#include <stdio.h>
long long int infinity=32500;
void mcdp(int arr[],int len){
    int m[len][len],start,end,br;
    
    for(int i=0;i<len;i++){
        m[i][i]=0;
    }
    
    //the first loop represents the chained matrix length
    //it is initially 2 as we start by multiplying 2 matrices and storing shortest combo in m[start][end]
    for(int l=2;l<len;l++){
        //this second loop represents the various possible cases for the row suitable for the current chained matrix length
        for(start=0;start<len-l+1;start++){
            //end is the column number in matrix till where we have to continue i.e how many matrix we multiply
            end=start+l-1;
            m[start][end]=infinity;
            //br is the break point where we consider a brackt during multiplication
            for(br=start;br<end;br++){
                int temp=m[start][br]+m[br+1][end]+arr[start-1]*arr[br]*arr[end];
                if(temp<m[start][end]){
                    //choose the minimum
                    m[start][end]=temp;
                }
            }
        }
    }
    printf("%d",m[1][len-1]);
}

int main()
{
    int arr[]={1,2,3,4};
    int len=sizeof(arr)/sizeof(arr[0]);
    mcdp(arr,len);
    return 0;
}


//Reference:- https://www.geeksforgeeks.org/matrix-chain-multiplication-dp-8/
