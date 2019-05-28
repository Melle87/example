#ifndef EXAMPLE_H
#define EXAMPLE_H

#include <QObject>
#include <QDebug>
#include <QJsonObject>
#include <QTimer>


class Example : public QObject
{
    Q_OBJECT

public:
    explicit Example(QObject *parent = nullptr);
    ~Example(void);
    bool init(void);

private:

signals:
};

#endif // EXAMPLE_H
