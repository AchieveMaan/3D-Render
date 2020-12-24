//���������� GLFW � �������������� �� ������� ��������� ������ ������������ ::: https://habr.com/ru/post/311198/
#include <SFML/Graphics.hpp>

using namespace sf;
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
	// ������, �������, ����������, �������� ������� ����� ����������
	RenderWindow window(VideoMode(200, 200), "SFML Works!");

	// ������� ���� ����������. �����������, ���� ������� ����
	while (window.isOpen())
	{
		// ������������ ������� ������� � �����
		Event event;
		while (window.pollEvent(event))
		{
			// ������������ ����� �� �������� � ����� ������� ����?
			if (event.type == Event::Closed)
				// ����� ��������� ���
				window.close();
		}
		// ��������� ����	
		window.display();
	}
	return 0;
}