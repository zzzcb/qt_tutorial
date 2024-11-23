#include "mydrawboard2.h"

#include <QApplication>
#include <QObject>
#include <QDebug>

class AppFilter :public QObject
{
	QOBJECT_H
public:
	AppFilter(QString id,QObject*parent =nullptr)
		:m_strId(id)
	{}

	bool eventFilter(QObject *watched, QEvent *event) override;
private:
	QString m_strId;
};

bool AppFilter::eventFilter(QObject *watched, QEvent *event)
{

	if (event->type() == QEvent::MouseButtonPress)
	{
		qDebug() << "watched obj addr " << watched << " id " << m_strId;
		return false;
	}

	return QObject::eventFilter(watched, event);
}

class ReceiverFilter :public QObject
{
	QOBJECT_H
public:
	ReceiverFilter(QString id, QObject*parent = nullptr)
		:m_strId(id)
	{}

	bool eventFilter(QObject *watched, QEvent *event) override;
private:
	QString m_strId;
};
bool ReceiverFilter::eventFilter(QObject *watched, QEvent *event)
{
	if (event->type() == QEvent::MouseButtonPress)
	{
		qDebug() << "watched obj addr " << watched << " id " << m_strId;
		//if (m_strId == "receiver filter2")
		//	return false;
	}

	return QObject::eventFilter(watched, event);
}


int main(int argc, char** argv)
{
	QApplication app(argc, argv);

	AppFilter* appFilter1 = new AppFilter("app filter1");
	AppFilter* appFilter2 = new AppFilter("app filter2");
	app.installEventFilter(appFilter1);
	app.installEventFilter(appFilter2);

	ReceiverFilter* receiverFilter1 = new ReceiverFilter("receiver filter1");
	ReceiverFilter* receiverFilter2 = new ReceiverFilter("receiver filter2");

	MyDrawboard2 myDrawBoard;
	myDrawBoard.show();
	myDrawBoard.installEventFilter(receiverFilter1);
	myDrawBoard.installEventFilter(receiverFilter2);

	return app.exec();
}