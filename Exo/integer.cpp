#include "integer.h"
#include <iostream>



Integer::Integer() {

}



Integer::Integer(int _valeur) : valeur(_valeur)
{


}

Integer Integer::operator +(const Integer& _right) {
	
	Integer tmp(this->valeur + _right.valeur);
	
		
	return tmp;
}

Integer Integer::operator +=(const Integer& _right) {

	Integer tmp(this->valeur += _right.valeur);

		
	return tmp;
}

Integer Integer::operator -(const Integer& _right) {

	Integer tmp(this->valeur - _right.valeur);

		
	return tmp;
}

Integer Integer::operator -=(const Integer& _right) {

	Integer tmp(this->valeur -= _right.valeur);

		
	return tmp;
}

Integer Integer::operator *(const Integer& _right) {

	Integer tmp(this->valeur * _right.valeur);

		
	return tmp;
}

Integer Integer::operator *=(const Integer& _right) {

	Integer tmp(this->valeur *= _right.valeur);

		
	return tmp;
}

Integer Integer::operator /(const Integer& _right) {

	Integer tmp(this->valeur /= _right.valeur);

		
	return tmp;
}

Integer Integer::operator /=(const Integer& _right) {

	Integer tmp(this->valeur /= _right.valeur);

		
	return tmp;
}

Integer Integer::operator %(const Integer& _right) {

	Integer tmp(this->valeur + _right.valeur);

		
	return tmp;
}

Integer Integer::operator %=(const Integer& _right) {

	Integer tmp(this->valeur + _right.valeur);

		
	return tmp;
}

Integer Integer::operator <<(const Integer& _right) {

	Integer tmp(this->valeur << _right.valeur);

		
	return tmp;
}

Integer Integer::pow(int exposant) {
	return Integer(std::pow(this->valeur, exposant));
}


