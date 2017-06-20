// Matrix.cpp: implementation of the Matrix class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

Matrix::Matrix()
{
	FillZero();
}

Matrix::Matrix(float N[][4])
{
	for ( int i = 0; i < 4; i++ )
	{
		for ( int j = 0; j < 4; j++ )
		{
			this->M[i][j] = N[i][j];
		}
	}
}

Matrix::~Matrix()
{
}

////////////////////////////////////////////////////////////////////////////////////
// Purpose : Fill the member matrix with the Identity Matrix
// Input   : -
// Output  : -
////////////////////////////////////////////////////////////////////////////////////
void Matrix::FillIndenity()
{
	for ( int i = 0; i < 4; i++ ) {
		for ( int j = 0; j < 4; j++ ) {
			if ( i == j )
				M[i][j] = 1;
			else
				M[i][j] = 0;
		}
	}
}

////////////////////////////////////////////////////////////////////////////////////
// Purpose : 
// Input   : 
// Output  : 
////////////////////////////////////////////////////////////////////////////////////
void Matrix::FillZero()
{
	for ( int i = 0; i < 4; i++ ) {
		for ( int j = 0; j < 4; j++ ) {
			M[i][j] = 0;
		}
	}
}
////////////////////////////////////////////////////////////////////////////////////
// Purpose : 
// Input   : 
// Output  : 
////////////////////////////////////////////////////////////////////////////////////
void Matrix::Fill(float N[][4])
{
	for ( int i = 0; i < 4; i++ )
	{
		for ( int j = 0; j < 4; j++ )
		{
			this->M[i][j] = N[i][j];
		}
	}
}

////////////////////////////////////////////////////////////////////////////////////
// Purpose : 
// Input   : 
// Output  : 
////////////////////////////////////////////////////////////////////////////////////
void Matrix::Get(float N[][4])
{
	for ( int i = 0; i < 4; i++ )
	{
		for ( int j = 0; j < 4; j++ )
		{
			N[i][j] = this->M[i][j];
		}
	}
}

////////////////////////////////////////////////////////////////////////////////////
// Purpose : 
// Input   : 
// Output  : 
////////////////////////////////////////////////////////////////////////////////////
float* Matrix::Get()
{
	return &this->M[0][0];
}

////////////////////////////////////////////////////////////////////////////////////
// Purpose : 
// Input   : 
// Output  : 
////////////////////////////////////////////////////////////////////////////////////
const float Matrix::At(int i, int j)
{
	return M[i][j];
}

////////////////////////////////////////////////////////////////////////////////////
// Purpose : 
// Input   : 
// Output  : 
////////////////////////////////////////////////////////////////////////////////////
Matrix Matrix::operator*(Matrix M)
{
	float N[4][4];

	N[0][0] =	(this->M[0][0] * M.M[0][0]) + (this->M[0][1] * M.M[1][0]) +
					(this->M[0][2] * M.M[2][0]) + (this->M[0][3] * M.M[3][0]);

	N[0][1] =	(this->M[0][0] * M.M[0][1]) + (this->M[0][1] * M.M[1][1]) +
					(this->M[0][2] * M.M[2][1]) + (this->M[0][3] * M.M[3][1]);

	N[0][2] =	(this->M[0][0] * M.M[0][2]) + (this->M[0][1] * M.M[1][2]) +
					(this->M[0][2] * M.M[2][2]) + (this->M[0][3] * M.M[3][2]);

	N[0][3] =	(this->M[0][0] * M.M[0][3]) + (this->M[0][1] * M.M[1][3]) +
					(this->M[0][2] * M.M[2][3]) + (this->M[0][3] * M.M[3][3]);


	N[1][0] =	(this->M[1][0] * M.M[0][0]) + (this->M[1][1] * M.M[1][0]) +
					(this->M[1][2] * M.M[2][0]) + (this->M[1][3] * M.M[3][0]);

	N[1][1] =	(this->M[1][0] * M.M[0][1]) + (this->M[1][1] * M.M[1][1]) +
					(this->M[1][2] * M.M[2][1]) + (this->M[1][3] * M.M[3][1]);

	N[1][2] =	(this->M[1][0] * M.M[0][2]) + (this->M[1][1] * M.M[1][2]) +
					(this->M[1][2] * M.M[2][2]) + (this->M[1][3] * M.M[3][2]);

	N[1][3] =	(this->M[1][0] * M.M[0][3]) + (this->M[1][1] * M.M[1][3]) +
					(this->M[1][2] * M.M[2][3]) + (this->M[1][3] * M.M[3][3]);


	N[2][0] =	(this->M[2][0] * M.M[0][0]) + (this->M[2][1] * M.M[1][0]) +
					(this->M[2][2] * M.M[2][0]) + (this->M[2][3] * M.M[3][0]);

	N[2][1] =	(this->M[2][0] * M.M[0][1]) + (this->M[2][1] * M.M[1][1]) +
					(this->M[2][2] * M.M[2][1]) + (this->M[2][3] * M.M[3][1]);

	N[2][2] =	(this->M[2][0] * M.M[0][2]) + (this->M[2][1] * M.M[1][2]) +
					(this->M[2][2] * M.M[2][2]) + (this->M[2][3] * M.M[3][2]);

	N[2][3] =	(this->M[2][0] * M.M[0][3]) + (this->M[2][1] * M.M[1][3]) +
					(this->M[2][2] * M.M[2][3]) + (this->M[2][3] * M.M[3][3]);


	N[3][0] =	(this->M[3][0] * M.M[0][0]) + (this->M[3][1] * M.M[1][0]) +
					(this->M[3][2] * M.M[2][0]) + (this->M[3][3] * M.M[3][0]);

	N[3][1] =	(this->M[3][0] * M.M[0][1]) + (this->M[3][1] * M.M[1][1]) +
					(this->M[3][2] * M.M[2][1]) + (this->M[3][3] * M.M[3][1]);

	N[3][2] =	(this->M[3][0] * M.M[0][2]) + (this->M[3][1] * M.M[1][2]) +
					(this->M[3][2] * M.M[2][2]) + (this->M[3][3] * M.M[3][2]);

	N[3][3] =	(this->M[3][0] * M.M[0][3]) + (this->M[3][1] * M.M[1][3]) +
					(this->M[3][2] * M.M[2][3]) + (this->M[3][3] * M.M[3][3]);

	return Matrix(N);
}

////////////////////////////////////////////////////////////////////////////////////
// Purpose : 
// Input   : 
// Output  : 
////////////////////////////////////////////////////////////////////////////////////
Matrix Matrix::operator/(Matrix M)
{
	return Matrix();
}

////////////////////////////////////////////////////////////////////////////////////
// Purpose : 
// Input   : 
// Output  : 
////////////////////////////////////////////////////////////////////////////////////
Matrix Matrix::operator+(Matrix M)
{
	return Matrix();
}

////////////////////////////////////////////////////////////////////////////////////
// Purpose : 
// Input   : 
// Output  : 
////////////////////////////////////////////////////////////////////////////////////
Matrix Matrix::operator-(Matrix M)
{
	return Matrix();
}

////////////////////////////////////////////////////////////////////////////////////
// Purpose : 
// Input   : 
// Output  : 
////////////////////////////////////////////////////////////////////////////////////
Matrix Matrix::operator=(Matrix M)
{
	for (int i =0; i < 4; i++)
		for (int j = 0; j < 4; j++)
			this->M[i][j] = M.M[i][j];
	return this->M;
}

////////////////////////////////////////////////////////////////////////////////////
// Purpose : 
// Input   : 
// Output  : 
////////////////////////////////////////////////////////////////////////////////////
bool Matrix::Equals(Matrix M)
{
	for ( int i = 0; i < 4; i++ ) {
		for ( int j = 0; j < 4; j++ ) {
			if ( this->M[i][j] != M.At(i,j) )
				return false;
		}
	}
	return true;
}

////////////////////////////////////////////////////////////////////
// Purpose : 
// Input   : 
// Output  : 
////////////////////////////////////////////////////////////////////
void Matrix::MatrixTranslate(Vector V)
{
	FillIndenity();
	M[0][3] = V.X;
	M[1][3] = V.Y;
	M[2][3] = V.Z;
}

////////////////////////////////////////////////////////////////////
// Purpose : 
// Input   : 
// Output  : 
////////////////////////////////////////////////////////////////////
void Matrix::MatrixRotateDeg(Vector V)
{
	MatrixRotateXDeg(V.X);
	MatrixRotateYDeg(V.Y);
	MatrixRotateZDeg(V.Z);
}

////////////////////////////////////////////////////////////////////
// Purpose : 
// Input   : 
// Output  : 
////////////////////////////////////////////////////////////////////
void Matrix::MatrixRotateRad(Vector V)
{
	MatrixRotateXRad(V.X);
	MatrixRotateYRad(V.Y);
	MatrixRotateZRad(V.Z);
}

////////////////////////////////////////////////////////////////////
// Purpose : 
// Input   : 
// Output  : 
////////////////////////////////////////////////////////////////////
void Matrix::MatrixScale(Vector V)
{
	FillIndenity();
	M[0][0] = V.X;
	M[1][1] = V.Y;
	M[2][2] = V.Z;
}

////////////////////////////////////////////////////////////////////
// Purpose : 
// Input   : 
// Output  : 
////////////////////////////////////////////////////////////////////
void Matrix::MatrixRotateXDeg(float X)
{
	FillIndenity();
	M[1][1] = cosf( Wiskunde::DEG2RAD(X) );
	M[1][2] = sinf( Wiskunde::DEG2RAD(X) );
	M[2][1] = -sinf( Wiskunde::DEG2RAD(X) );
	M[2][2] = cosf( Wiskunde::DEG2RAD(X) );
/*
	[ 1,         0,          0, 0]
	[ 0, cos(xrot),  sin(xrot), 0]
	[ 0,-sin(xrot),  cos(xrot), 0]
	[ 0,         0,          0, 1]
*/
}

////////////////////////////////////////////////////////////////////
// Purpose : 
// Input   : 
// Output  : 
////////////////////////////////////////////////////////////////////
void Matrix::MatrixRotateYDeg(float Y)
{
	FillIndenity();
	M[0][0] = cosf( Wiskunde::DEG2RAD(Y) );
	M[0][2] = -sinf( Wiskunde::DEG2RAD(Y) );
	M[2][0] = sinf( Wiskunde::DEG2RAD(Y) );
	M[2][2] = cosf( Wiskunde::DEG2RAD(Y) );
/*
	[ cos(yrot), 0,-sin(yrot), 0]
	[         0, 1,         0, 0]
	[ sin(yrot), 0, cos(yrot), 0]
	[         0, 0,         0, 1]
*/
}

////////////////////////////////////////////////////////////////////
// Purpose : 
// Input   : 
// Output  : 
////////////////////////////////////////////////////////////////////
void Matrix::MatrixRotateZDeg(float Z)
{
	FillIndenity();
	M[0][0] = cosf( Wiskunde::DEG2RAD(Z) );
	M[0][1] = sinf( Wiskunde::DEG2RAD(Z) );
	M[1][0] = -sinf( Wiskunde::DEG2RAD(Z) );
	M[1][1] = cosf( Wiskunde::DEG2RAD(Z) );
/*
	[ cos(zrot),  sin(zrot), 0, 0]
	[-sin(zrot),  cos(zrot), 0, 0]
	[         0,          0, 1, 0]
	[         0,          0, 0, 1]
*/
}

////////////////////////////////////////////////////////////////////
// Purpose : 
// Input   : 
// Output  : 
////////////////////////////////////////////////////////////////////
void Matrix::MatrixRotateXRad(float X)
{
	FillIndenity();
	M[1][1] = cosf( X );
	M[1][2] = sinf( X );
	M[2][1] = -sinf( X );
	M[2][2] = cosf( X );
}

////////////////////////////////////////////////////////////////////
// Purpose : 
// Input   : 
// Output  : 
////////////////////////////////////////////////////////////////////
void Matrix::MatrixRotateYRad(float Y)
{
	FillIndenity();
	M[0][0] = cosf( Y );
	M[0][2] = -sinf( Y );
	M[2][0] = sinf( Y );
	M[2][2] = cosf( Y );
}

////////////////////////////////////////////////////////////////////
// Purpose : 
// Input   : 
// Output  : 
////////////////////////////////////////////////////////////////////
void Matrix::MatrixRotateZRad(float Z)
{
	FillIndenity();
	M[0][0] = cosf( Z );
	M[0][1] = sinf( Z );
	M[1][0] = -sinf( Z );
	M[1][1] = cosf( Z );
}

////////////////////////////////////////////////////////////////////
// Purpose : 
// Input   : 
// Output  : 
////////////////////////////////////////////////////////////////////
void Matrix::MatrixTranspose()
{
	float fTemp;

	fTemp = M[0][1];
	M[0][1] = M[1][0];
	M[1][0] = fTemp;

	fTemp = M[0][2];
	M[0][2] = M[2][0];
	M[2][0] = fTemp;

	fTemp = M[0][3];
	M[0][3] = M[3][0];
	M[3][0] = fTemp;

	fTemp = M[1][2];
	M[1][2] = M[2][1];
	M[2][1] = fTemp;

	fTemp = M[1][3];
	M[1][3] = M[3][1];
	M[3][1] = fTemp;

	fTemp = M[2][3];
	M[2][3] = M[3][2];
	M[3][2] = fTemp;
}

////////////////////////////////////////////////////////////////////
// Purpose : 
// Input   : 
// Output  : 
////////////////////////////////////////////////////////////////////
void Matrix::inverseRotateVect(Vector& pVect)
{
	float vec[3];

	vec[0] = pVect.X * this->M[0][0] + pVect.X * this->M[0][1] + pVect.X * this->M[0][2];
	vec[1] = pVect.Y * this->M[1][0] + pVect.Y * this->M[1][1] + pVect.Y * this->M[1][2];
	vec[2] = pVect.Z * this->M[2][0] + pVect.Z * this->M[2][1] + pVect.Z * this->M[2][2];

	pVect.X = vec[0];
	pVect.Y = vec[1];
	pVect.Z = vec[2];
}

////////////////////////////////////////////////////////////////////
// Purpose : 
// Input   : 
// Output  : 
////////////////////////////////////////////////////////////////////
void Matrix::inverseTranslateVect(Vector& pVect)
{
	pVect.X = pVect.X - this->M[3][0];
	pVect.Y = pVect.Y - this->M[3][1];
	pVect.Z = pVect.Z - this->M[3][2];
}
