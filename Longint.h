#pragma once
#include<string>
#include<sstream>
#include <vector>

class LongInt
{
public:
	LongInt();
	LongInt(std::string);
	LongInt(int);
	LongInt(LongInt&&);
	LongInt(const LongInt&);
	LongInt operator=(const LongInt& other);
	LongInt operator=(const std::string& str);
	friend std::ostream& operator<<(std::ostream& o, const LongInt& obj);
	//LongInt operator*(LongInt& other);
	LongInt operator*(int n);
	LongInt operator/(int n);
	//LongInt operator/(LongInt& other);
	LongInt operator+(LongInt& l2);
	LongInt operator-(LongInt& l2);
	//static void setmult(Mult* m) { mult = m; }
	int len() { return this->num.length(); }
	std::string getnum() { return this->num; }

private:
	//Mult* mult;
	std::string num;
	static std::string findSum(std::string s1, std::string s2);
	static bool isSmaller(std::string str1, std::string str2);
	static std::string findDiff(std::string str1, std::string str2);
	static std::string school_multiply(std::string num1, std::string num2);
	static std::string longDivision(std::string number, int divisor);
};
