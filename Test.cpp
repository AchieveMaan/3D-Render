//Подключить GLFW и протестировать на графике результат работы растеризации

#include "LineDDA.h"
#include "Point2D.h"

#include <iostream>

int main() {
	
	Point2D* result(0);

	int size = lineDDA(Point2D{0,0}, Point2D{5000,5000}, &result);
	if (size == 0) return -1;

	for (int i = 0; i < size; i++) {
		std::cout << "x[" << i << "] is " << result[i].x << " : ";
		std::cout << "y[" << i << "] is " << result[i].y;
		std::cout << std::endl;
	}

	return 0;
}