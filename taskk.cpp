# include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int maxnum(const int array[]){
	int f=(sizeof(array)/ sizeof(array[0]))-1;
 return *max_element(array[0],(array [f]));
}
int minnum(const int array[]){
	int f=(sizeof(array)/ sizeof(array[0]))-1;
 return *min_element(array[0],(array [f]));	
}
/*bool prime(int num){
	if(num<=1)
	return false;
	for(int i=2; i<=power(num,num);i++){
		if(num%i==0)
		return false;
	}
	return true;*/
}
int Cprime(const int array[]){
	int f=(sizeof(array)/ sizeof(array[0]))-1;
	int count=0;
	for(int i=0;i<=f;i++){
	if(int j=2;j<=i;j++){
		if(i%j==0&& i!=2)
		break;
		else if(i==2||i==j+1)
		count++;
			}
	}
	return count ;
}
int Cpalindrome(const int array[]){
	int f=(sizeof(array)/ sizeof(array[0]))-1;
	int rev=0,c=0;
	for(int i=0;i<=f;i++){
		int numb=i;
		while(i!=0) {
			rev= rev*10+i%10;
			i/=10;
		}
		if(numb==i)
		c++;
	}
	return c;
}
  max();
  int main(){
  	int array[];
  	cin>>array[i];
  	cout<<"The maximum numder : "<<maxnum()<<endl;
  	cout<<"The minimum numder : "<<minnum()<<endl;
  	cout<<"The number of prime numbers : "<<Cprime()<<endl;
  	cout<<"The number of palindrome numbers  : "<<Cpalindrome()<<endl;
  	cout<<"The number that has the maximum numder of divisors : "<<max()<<endl;
  	
  }
  int max(const int array[]){
  	int maxdi=0, maxn=0;
  		int f=(sizeof(array)/ sizeof(array[0]))-1;
  		for(int i=0;i<=f;i++){
		  	int cdiv=0;
		  	for(int j=1;j<=i;j++){
	  			if (i%j==0)
	  			cdiv++;
	  		}
		 
		  if(cdiv> maxdi || (cdiv==maxdi && i>maxn)){
  		maxdi=cdiv;
		  	maxn=i;
  		}
  		}
		  
  }