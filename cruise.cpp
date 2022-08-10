#include "cruise.h"

CruiseControl::CruiseControl() : cruise(OFF) {return;}

void CruiseControl::setup(Ui::MainWindow *ui) {
  this->ui = ui;
  cruise_control = QPixmap(":/icons/cruise.png");
  this->ui->cruise_control->setText("OFF");
}

void CruiseControl::cruise_on() {
  this->cruise = ON;
  this->ui->cruise_control->setPixmap(cruise_control);
}

void CruiseControl::cruise_off() {
  this->cruise = OFF;
  this->ui->cruise_control->setText("OFF");
}
