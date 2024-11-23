#include <QApplication>

#include "mydrawboard.h"

int main(int argc, char** argv)
{
	QApplication app(argc, argv);

	MyDrawboard myDrawBoard;
	myDrawBoard.show();

	return app.exec();
}