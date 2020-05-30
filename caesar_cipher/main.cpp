/*
Name: Majdi Nagi
Instructor: Robert Eckman 
Class: CSC 215
December 14, 2019
Purpose: Caesar Cipher
*/
#include <iostream>
#include "caesar_cipher.h"
using namespace std; 

int main(){   

  int key;
	string encrypt_this; 
	Caesar_Cipher msg;
  try{
	encrypt_this = msg.query_for_message(encrypt_this);
	msg.set_encryptedtext(encrypt_this);
	cout << "Text entered: " << endl << msg.get_encryptedtext() << endl;
  cout << "Enter the key shift: ";
  cin >> key;
  }catch(string str){
    cout<<str<<endl;
  }
  msg.setKey(key);
	cout << "key = " << msg.getKey() << endl;
	msg.encrypt(encrypt_this);cout << endl;
	cout << "Encrypted text: " << endl << msg.encrypt() << endl;
	cout << "The decrypted text is : " << endl;
  msg.decrypt();
}
