#include<iostream>
#include<cstring>

using namespace std;
	
string decrypt(string cipher,int key){
	string org;
	for (int i = 0; i < cipher.length(); i++) {
		int asci = int(cipher[i]);
		int new_asci = asci - key;
		char new_char=char(new_asci);
		string temp(1,new_char);
		org.append(temp);
	}
	return org;
	
}
string encrypt(string originalString,int key){
	string cip;
	for (int i = 0; i < originalString.length(); i++) {
		int asci = int(originalString[i]);
		int new_asci = asci + key;
		char new_char=char(new_asci);
		string temp(1,new_char);
		cip.append(temp);
	}
	return cip;
}
	
int main(){
	cout<<"1. Decrypt Caesar Cipher \n2. Encrypt Caesar Cipher ";
	int choice,key;
	string originalString,cipher;
	cout<<"\nEnter your choice : ";
	cin>>choice;
	if(choice==1){
		cout<<"\nEnter the Caser Cipher : ";
		cin>>cipher;
		cout<<"\nEnter the Key : ";
		cin>>key;
		originalString=decrypt(cipher,key);
		cout<<"\nOriginal String is : "<<originalString;
	}
	if(choice==2){
		cout<<"\nEnter the String : ";
		cin>>originalString;
		cout<<"\nEnter the Key : ";
		cin>>key;
		cipher=encrypt(originalString,key);
		cout<<"\nCipher is : "<<cipher;
		
	}
	
	return 0;
}
