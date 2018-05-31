#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QDesktopServices>
#include <QUrl>

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
        QString savefolder=QFileDialog::getExistingDirectory(
                this,
                tr("Open File"),
                "C://"
                );
    ui->FilePath->setText(savefolder);
    
    }


void MainWindow::on_VideoAdd_clicked()
{
    QString Filename=QFileDialog::getOpenFileName(   
                this,
                tr("Open File"),
                "C://",
                Video File (*.avi);;Video File (*.mp4) "

                );
       ui->tableWidget->insertRow ( ui->tableWidget->rowCount() );

    ui->tableWidget->setItem   ( ui->tableWidget->rowCount()-1, 0 , new QTableWidgetItem(filename)); //파일명추가

    
  //  QDesktopServices::openUrl(QUrl("file:///"+filename,QUrl::TolerantMode)); 파일열기  
    //   QMessageBox::information(this,tr("File Name"),filename); 팝업창띄우기


}



void MainWindow::on_VideoDeletion_clicked()
{


}
