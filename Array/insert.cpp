// Write a program to insert a number in an array

// Ex:- Ip arr[]={5,10,20,_,_};
//      x   = 7
//      pos = 2

// Output:- arr[]={5,7,10,20,_}

// Note:- We cannot insert in fixed size array we can onlly insert in dynamic size array

// Solution:-

int insert(int arr[], int n, int x, int cap,int pos){
	if(n==cap) return n;

	int idx = pos-1; //index where we want to insert the element
	for(int i=n-1; i>=idx; i--){
		arr[i+1]=arr[i];
		arr[idx]=x;

	}
	return (n+1);
}
     