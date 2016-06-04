#ifndef VECTOR2_H
#define VECTOR2_H


template <class TYPE>
class Vector2 {
public:
	TYPE x, y;

	Vector2(TYPE xVal = 0, TYPE yVal = 0) : x(xVal), y(yVal) {}

	Vector2& operator+=(const Vector2& vector){
		x += val;
		y += val;
		return *this;
	}

	Vector2& operator-=(const Vector2& vector){
		x -= val;
		y -= val;
		return *this;
	}

	template<class T>
	Vector2& operator*=(const T& val){
		x *= val;
		y *= val;
		return *this;
	}

	template<class T>
	Vector2& operator/=(const T& val){
		x /= val;
		y /= val;
		return *this;
	}


	Vector2 operator+(const Vector2& vector){
		Vector2<TYPE> ret;
		ret.x = x + vector.x;
		ret.y = y + vector.y;
		return ret;
	}
	Vector2 operator-(const Vector2& vector){
		Vector2<TYPE> ret;
		ret.x = x - vector.x;
		ret.y = y - vector.y;
		return ret;
	}

	template<class T>
	Vector2 operator*(const T& val){
		Vector2<TYPE> ret;
		ret.x = x * val;
		ret.y = y * val;
		return ret;
	}

	template<class T>
	Vector2 operator/(const T& val){
		Vector2<TYPE> ret;
		ret.x = x / val;
		ret.y = y / val;
		return ret;
	}



	// prefix -- operator ( --(*this) )
	Vector2& operator--(){
		x--;
		y--;
		return *this;		
	}

	// prefix ++ operator ( ++(*this) )
	Vector2& operator++(){
		x++;
		y++;
		return *this;		
	}


	// postfix -- operator ( (*this)-- )
	Vector2 operator--( int ){

		Vector2<TYPE> ret(x, y);

		x--;
		y--;

		return ret;		
	}

	// postfix ++ operator ( (*this)++ )
	Vector2 operator++( int ){
		Vector2<TYPE> ret(x, y);
		x++;
		y++;
		return ret;		
	}

};


#endif
