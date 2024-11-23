#include <QApplication>

#include "mydrawboard3.h"

int main(int argc,char** argv)
{
	QApplication app(argc, argv);

	MyDrawboard3 myDrawBoard;
	myDrawBoard.show();

	return app.exec();
}
