#pragma once
#include "Point2D.h"

#include <cmath>

//Realisation of this alghoritm is here:::https://ru.wikipedia.org/wiki/%D0%90%D0%BB%D0%B3%D0%BE%D1%80%D0%B8%D1%82%D0%BC_DDA-%D0%BB%D0%B8%D0%BD%D0%B8%D0%B8
//Also you can read this to understand this topic better:::https://dic.academic.ru/dic.nsf/ruwiki/216174

//Функциия растеризации отрезка, где p1 - начальная точка, а p2 - конечная. На вход подается NULL указатель на Point2D;
//Возвращаемое значение - Размер массива, если размер 0, то указатель не равен NULL или переданы некорректные координаты точки
int lineDDA(Point2D p1, Point2D p2, Point2D **array);