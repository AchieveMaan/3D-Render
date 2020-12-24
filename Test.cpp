//Подключить GLFW и протестировать на графике результат работы растеризации ::: https://habr.com/ru/post/311198/
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
	// Объект, который, собственно, является главным окном приложения
	RenderWindow window(VideoMode(200, 200), "SFML Works!");

	// Главный цикл приложения. Выполняется, пока открыто окно
	while (window.isOpen())
	{
		// Обрабатываем очередь событий в цикле
		Event event;
		while (window.pollEvent(event))
		{
			// Пользователь нажал на «крестик» и хочет закрыть окно?
			if (event.type == Event::Closed)
				// тогда закрываем его
				window.close();
		}
		// Отрисовка окна	
		window.display();
	}
	return 0;
}