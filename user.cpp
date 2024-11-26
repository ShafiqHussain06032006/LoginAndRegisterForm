#pragma once
// this user class will store the data of the authenticated user


using namespace System;

public ref class User {
public:
	int id;
	String^ name;
	String^ email;
	String^ phone;
	String^ address;
	String^ password;
};
