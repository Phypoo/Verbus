#include "MainWindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    editor = new QPlainTextEdit(this);
    setCentralWidget(editor);

    setWindowTitle("CustomApp");
    resize(800, 600);
}