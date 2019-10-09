#ifndef UPDATE_H
#define UPDATE_H

#include <QObject>
#include <QWidget>
#include <QSimpleUpdater.h>

class Update : public QObject
{
    Q_OBJECT
public:
    explicit Update(QObject *parent = nullptr);

signals:

public slots:
    void resetFields();
    void checkForUpdates();
    void updateChangelog (const QString& url);
    void displayAppcast (const QString& url, const QByteArray& reply);
private:
    QSimpleUpdater* m_updater;
};

#endif // UPDATE_H
