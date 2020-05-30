/*
Name: Majdi Nagi
Instructor: Robert Eckman 
Class: CSC 215
December 14, 2019
Purpose: Caesar Cipher
*/
#include <iostream>
#include <string>
using namespace std;
class Caesar_Cipher {
private:
  string message;
	int key;
public:
	Caesar_Cipher();
	Caesar_Cipher(string encrypt_message);
	void setKey(int key_value);
	void set_encryptedtext(string message);
	string get_encryptedtext();
	int getKey();
	string encrypt();
	void encrypt(string encrypt_message);
	void decrypt();
	string query_for_message(string prompt);
};