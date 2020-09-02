#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
  ui->setupUi(this);
  connect(ui->pushButton, SIGNAL(clicked(bool)), ui->spinBox, SLOT(stepUp()));
  connect(ui->pushButton, SIGNAL(clicked(bool)), ui->listWidget,
          SLOT(slot_addItemToListWidget()));
}

MainWindow::~MainWindow() { delete ui; }

void MainWindow::slot_addItemToListWidget() {
  QListWidgetItem *item = new QListWidgetItem(QString("NEW ITEM"));
  ui->listWidget->addItem(item);
}
