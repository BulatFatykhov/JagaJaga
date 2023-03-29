#pragma once

template <typename T>
T scalar_product(T* a, T* b, int n) //скалярное произведение
{
	T s_p = 0;
	for (int i = 0; i < n; i++)
	{
		s_p += a[i] * b[i];
	}
	return s_p;
}


template <typename T>
T vector_length(T* e, int n) //длина вектора 
{
	return sqrt(scalar_product(e, e, n));
}


template <typename T>
T angle(T* a, T* b, int n) //угол между векторами 
{
	T cos_ang = scalar_product(a, b, n) / (vector_length(a, n) * vector_length(b, n));
	return acos(cos_ang);
}
