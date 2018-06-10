#include<bits/stdc++.h>
using namespace std;

#define ll long long int
int main(){

	ll denominator, i, eachDigit=0, remainder;

	char digitOfquotient;

	string numerator, quotient; //remember that numerator is a string


	cin>>numerator;
	cin>>denominator;

	for(i=0; i<numerator.length(); i++){

		eachDigit = (eachDigit*10) + (numerator[i]-'0'); //appending of the digits and converting into integers from string

		if(eachDigit>=denominator){

			digitOfquotient = (eachDigit/denominator)+'0'; // converting digit of the quotient into character
			quotient = quotient + digitOfquotient;

			remainder = eachDigit%denominator; 

			eachDigit = remainder; 
		}

	}

	cout<<quotient<<endl;

	return 0;


}