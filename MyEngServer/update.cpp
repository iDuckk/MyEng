#include "update.h"

static const QString DEFS_URL = "file:///D:/Repository/QSimpleUpdater/tutorial/definitions/updates.json";
const QString VERSION = "1.0";
Update::Update(QObject *parent) : QObject(parent)
{
    /* QSimpleUpdater is single-instance */
    m_updater = QSimpleUpdater::getInstance();

    /* Check for updates when the "Check For Updates" button is clicked */
    connect (m_updater, SIGNAL (checkingFinished  (QString)),
             this,        SLOT (updateChangelog   (QString)));
    connect (m_updater, SIGNAL (appcastDownloaded (QString, QByteArray)),
             this,        SLOT (displayAppcast    (QString, QByteArray)));

    /*connect (ui->ClickUpdate, SIGNAL (clicked()),
                 this,                SLOT (checkForUpdates()));*/

}

void Update::resetFields()
{

}

void Update::checkForUpdates()
{
    QString version = VERSION;
    m_updater->setModuleVersion (DEFS_URL, version);
    /* Check for updates */
    m_updater->checkForUpdates (DEFS_URL);
}

void Update::updateChangelog(const QString &url)
{

}

void Update::displayAppcast(const QString &url, const QByteArray &reply)
{

}
