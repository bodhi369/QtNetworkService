#ifndef APITEST_H
#define APITEST_H

#include "HttpService.h"

class ApiTest : public QObject
{
    Q_OBJECT
public:
    ApiTest();
    virtual ~ApiTest();

    void exec();

private slots:
    void finish(QVariantMap result);
    void finish(QNetworkReply *reply);
    void error(QString errorString);
    void error(QString errorString, QNetworkReply* reply);
    void error(QNetworkReply::NetworkError error, QNetworkReply* reply);

private:
    AeaQt::HttpService m_service;
};

#endif // APITEST_H