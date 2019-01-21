#include "domoticaqtapp.h"
#include "ui_domoticaqtapp.h"

DomoticaQTApp::DomoticaQTApp(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DomoticaQTApp)
{
    ui->setupUi(this);
}

DomoticaQTApp::~DomoticaQTApp()
{
    delete ui;
}
