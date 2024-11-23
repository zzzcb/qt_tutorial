#include <QApplication>
#include <QMainWindow>

int main(int argc, char** argv)
{
	QApplication app(argc, argv);

	QMainWindow mw;
	mw.setWindowTitle("我不是Qt");
	mw.resize(600, 400);
	mw.show();

	return app.exec();
}
