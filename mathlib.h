#ifndef MATHLIB_H
#define MATHLIB_H

#ifdef MATHLIB_EXPORTS
#define MATHDLL_API __declspec(dllexport)
#else
#define MATHDLL_API __declspec(dllimport)
#endif

class Vector;
class Matrix;

class MATHDLL_API Wiskunde
{
public:
	static float PI();
	static float RAD2DEG(float radiant);
	static float DEG2RAD(float degrees);
	static Vector GetNormal(Vector V1, Vector V2, Vector V3);
	static Vector Cross(Vector V1, Vector V2);
	static Vector Normalize(Vector V);
};

class MATHDLL_API Vector
{
private:
public:
	float X;
	float Y;
	float Z;

public:
	Vector();
	Vector(float X, float Y, float Z);
	virtual ~Vector();

	void Fill(float X, float Y, float Z);
	Vector Vectorize(Vector V);
	void Normalize();
	float Magnitude();

	void operator*=(Vector V);
	Vector operator*(Vector V);
	Vector operator*(float F);
	void operator/=(Vector V);
	Vector operator/(Vector V);
	Vector operator/(float F);
	void operator+=(Vector V);
	Vector operator+(Vector V);
	Vector operator+(float F);
	void operator-=(Vector V);
	Vector operator-(Vector V);
	Vector operator-(float F);
	void operator=(Vector V);

	bool Equals(Vector V);
};

class MATHDLL_API Matrix
{
private:
	float M[4][4];

public:
	Matrix();
	Matrix(float N[4][4]);
	virtual ~Matrix();
	const float At(int i, int j);

	void FillIndenity();
	void FillZero();
	void Fill(float N[][4]);
	void Get(float N[][4]);
	float* Get();
	void MatrixTranslate(Vector V);
	void MatrixRotateDeg(Vector V);
	void MatrixRotateRad(Vector V);
	void MatrixScale(Vector V);
	void MatrixRotateXDeg(float X);
	void MatrixRotateYDeg(float Y);
	void MatrixRotateZDeg(float Z);
	void MatrixRotateXRad(float X);
	void MatrixRotateYRad(float Y);
	void MatrixRotateZRad(float Z);
	void MatrixTranspose();
	void inverseRotateVect(Vector& pVect);
	void inverseTranslateVect(Vector& pVect);

	Matrix operator*(Matrix M);
	Matrix operator/(Matrix M);
	Matrix operator+(Matrix M);
	Matrix operator-(Matrix M);
	Matrix operator=(Matrix M);

	bool Equals(Matrix M);
};

#endif