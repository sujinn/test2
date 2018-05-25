#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_FolderOpen_clicked()
{
    
    
    }


void MainWindow::on_VideoAdd_clicked()
{
    QString Filename=QFileDialog::getOpenFileName(
                this,
                tr("Open File"),
                "C://",
                "All Files (*.*);;Video File (*.avi);;Video File (*.mp4) "

                );

   QMessageBox::information(this,tr("File Name"),Filename);
}
