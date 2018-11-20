#include <iostream>

struct Z {
	int a;
	int b;
	Z ();
	Z (int x, int y);
	Z & (Z const & other);
	~Z ();
	Z Z & operator= (Z const & other);
	Z operator+ (Z const & other);
	Z operator- (Z const & other);
	Z operator/ (Z const & other);
	Z operator* (Z const & other);
	int getModule () const;
	int get Phi () const;
	void set (int x,int y);
}

Z:: Z (): a(0), b (0) {
}

Z:: Z (int x, int y): a(x), b(y); {
}

Z :: Z(const & other) {
	*this = other;
}

Z :: ~Z() {}

Z & Z :: operator= (Z const & other) {
	a = other.a;
	b = other.b;
	return *this;
}

Z :: operator+ (Z const & other) {
	Zt = *this;
	t.a = t.a + other.a;
	t.b = t.b + other.b;
	return t;
}

Z Z : operator- (Z const & other) {
	Zt = *this;
	t.a = t.a - other.a;
	t.b = t.b - other.b;
	return t;
}
