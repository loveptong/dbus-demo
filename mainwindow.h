#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
	void onInitDBus1();
	void onInitDBus2();
	void onIncrease1();
	void onIncrease2();
	void onDecrease1();
	void onDecrease2();
	void onReset1();
	void onReset2();


private:
	void connectSignals();
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
