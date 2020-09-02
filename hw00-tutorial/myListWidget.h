#pragma once

#include <QListWidget>

class myListWidget : public QListWidget {
  Q_OBJECT

public:
  myListWidget(QWidget *parent = 0);
public slots:
  void slot_testSlot();

signals:
  void signal_testSignal();
};
