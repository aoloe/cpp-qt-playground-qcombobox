#include "mainwindow.h"
#include "../ui/ui_mainwindow.h"

#include "src/comboboxproxystyle.h"
#include <QtWidgets>
#include <QIcon>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
	ui->setupUi(this);

    ui->iconsComboBox->setStyle(new ComboBoxProxyStyle(ui->iconsComboBox->style()));

    ui->iconsComboBox->addItem(QIcon(":/icons/1.png"), "red");
    ui->iconsComboBox->addItem(QIcon(":/icons/2.png"), "green");
    ui->iconsComboBox->addItem(QIcon(":/icons/3.png"), "pink");

    auto quitAction = new QAction();
    quitAction->setShortcuts(QKeySequence::Quit);
    addAction(quitAction);
    connect(quitAction, SIGNAL(triggered()), this, SLOT(close()));
}

MainWindow::~MainWindow()
{
    delete ui;
}
