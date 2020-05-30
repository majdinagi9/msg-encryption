/*
Name: Majdi Nagi
Instructor: Robert Eckman 
Class: CSC 215
December 14, 2019
Purpose: Caesar Cipher
*/
#include "caesar_cipher.h"
Caesar_Cipher::Caesar_Cipher(){
  message = " ";
  key = 4;
}
Caesar_Cipher::Caesar_Cipher(string encrypt_message){
  message = encrypt_message;
}
void Caesar_Cipher::setKey(int key){
  this-> key = key;
}
int Caesar_Cipher::getKey(){	
  return key;
}
void Caesar_Cipher::set_encryptedtext(string message){
  this->message = message;
}
string Caesar_Cipher::get_encryptedtext(){
  return message;
}
string Caesar_Cipher::encrypt(){
  return message;
}
void Caesar_Cipher::encrypt(string encrypt_message){
	for (int i = 0; i < encrypt_message.length(); i++){
		if (isalpha(encrypt_message[i])){
			int offset = 65;
			if (islower(encrypt_message[i]))
				offset = 97;
		  int cipherChar = ((((int)encrypt_message[i]) - offset + 26 + key) % 26) + offset;
			message[i] = (char)cipherChar;
		}
		else if (isdigit(encrypt_message[i])){
      int cipherChar = ((((int)encrypt_message[i]) - 38 + key) % 10) + 48;
			message[i] = (char)cipherChar;
		}
		else
			message[i] = encrypt_message[i];
	}
}
void Caesar_Cipher::decrypt(){
	for (int i = 0; i < message.length(); i++){
		if (isalpha(message[i])){
			int offset = 65;
			if (islower(message[i]))
				offset = 97;
			int cipherChar = ((((int)message[i]) - offset + 26 - key) % 26) + offset;
			cout << (char)cipherChar;
		}
		else if (isdigit(message[i])){
			int cipherChar = ((((int)message[i]) - 38 - key) % 10) + 48;
			cout << (char)cipherChar;
		}
		else
			cout << message[i];
	}
}
string Caesar_Cipher::query_for_message(string prompt){
  cout << "Enter the text that you want to encrypt: " << endl;
	getline(cin,prompt);
  if(prompt.empty())throw string("THIS IS INVALID INPUT.");
	return prompt;
}
