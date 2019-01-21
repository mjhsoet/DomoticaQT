#ifndef DOMOTICAQTAPP_H
#define DOMOTICAQTAPP_H

#include <QWidget>

namespace Ui {
class DomoticaQTApp;
}

class DomoticaQTApp : public QWidget
{
    Q_OBJECT

public:
    explicit DomoticaQTApp(QWidget *parent = nullptr);
    ~DomoticaQTApp();

private:
    Ui::DomoticaQTApp *ui;
};

#endif // DOMOTICAQTAPP_H
