#include "mybutton.h"
#include <QMainWindow>
#include <QApplication>

int main(int argc, char** argv)
{
	QApplication app(argc, argv);

	QMainWindow mw;
	MyButton* pBtn1 = new MyButton(&mw);
	MyButton* pBtn2 = new MyButton(&mw);
	pBtn2->move(50, 50);

	pBtn1->setText("btn1");
	pBtn2->setText("btn2");

	mw.show();

	return app.exec();
}