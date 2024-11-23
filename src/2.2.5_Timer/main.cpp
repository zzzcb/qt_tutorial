#include <QApplication>
#include <QObject>
#include <QTimer>
#include <QDebug>

class MyCounter :public QObject
{
	QOBJECT_H
public:
	MyCounter(QObject* parent = nullptr) {}

protected:
	void timerEvent(QTimerEvent* event) override;
};

void MyCounter::timerEvent(QTimerEvent* event)
{
	qDebug() << "hello qt.";
}

int main(int argc, char** argv)
{
	QApplication app(argc, argv);

	//MyCounter counter;
	//counter.startTimer(1000);

	//QTimer* timer = new QTimer;
	//QObject::connect(timer, &QTimer::timeout, []() {
	//	qDebug() << "hello qt.";
	//});
	//timer->start(1000);

	QTimer::singleShot(1000, []() {
		qDebug() << "hello qt.";
		});

	return app.exec();
}
