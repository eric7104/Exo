#pragma once

class Integer
{
	
private:

	
	
	


public:
	int valeur;

	Integer();

	Integer(int valeur);

	Integer operator +(const Integer& _right);
	Integer operator +=(const Integer& _right);
	Integer operator -(const Integer& _right);
	Integer operator -=(const Integer& _right);
	Integer operator *(const Integer& _right);
	Integer operator *=(const Integer& _right);
	Integer operator /(const Integer& _right);
	Integer operator /=(const Integer& _right);
	Integer operator %(const Integer& _right);
	Integer operator %=(const Integer& _right);
	Integer operator <<(const Integer& _right);

	Integer pow(int exposant);
	
};

