#ifndef TEST_TCP_H
#define TEST_TCP_H

#include <QObject>
#include <QTest>
#include <QTcpSocket>
#include <QTcpServer>
#include "faketcp.h"
/**
 * @brief Класс для тестирования методов TCP сервера
 */
class TestTcp : public QObject
{
    Q_OBJECT

public:
    TestTcp();

private:
    fakeTCP* server;
    QTcpSocket* client;
    bool isOff;

private slots:
    void testConnection();
    void testSendBadJson();
    void testGetAnswer();
    void testProcessData();
    void testDisconnection();
};

#endif // TEST_TCP_H
