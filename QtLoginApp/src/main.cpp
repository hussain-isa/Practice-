#include <QApplication>
#include <QWidget>
#include <QMessageBox>
#include "ui_login.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QWidget window;
    Ui::Form ui;
    ui.setupUi(&window);

    QObject::connect(ui.loginButton, &QPushButton::clicked, [&]()
                     {
        QString username = ui.usernameEdit->text();
        QString password = ui.passwordEdit->text();

        if (username == "admin" && password == "1234") {
            QMessageBox::information(&window, "Success", "Login Successful");
        } else {
            QMessageBox::warning(&window, "Error", "Invalid Credentials");
        } });

    window.show();
    return app.exec();
}
