#include "LineDDA.h"

//�������� ������������ �������, ��� p1 - ��������� �����, � p2 - ��������. �� ���� �������� NULL ��������� �� Point2D;
//������������ �������� - ������ �������, ���� ������ 0, �� ��������� �� ����� NULL ��� �������� ������������ ���������� �����
int lineDDA(Point2D p1, Point2D p2, Point2D **array) {

	if (array == 0) return 0;

	//���������� ����� � ��������� ������������
	double x, y, dx, dy;
	int step;
	dx = p2.x - p1.x;
	dy = p2.y - p1.y;

	if (abs(dx) > abs(dy)) {
		step = abs(dx) + 1;
	}
	else {
		step = abs(dy) + 1;
	}

	*array = new Point2D[step];

	x = p1.x;
	y = p1.y;

	(*array)[0] = Point2D{x, y};

	for (int i = 1; i < step; i++) {
		x = x + (double) dx / step;
		y = y + (double) dy / step;
		(*array)[i] = Point2D{x, y};
	}

	return step;
}