#include "controller.h"

Controller::Controller(QObject *parent) : QObject(parent)
{
    formstart = new FormStart();
    formunitselect = new FormUnitSelect();
---> data
    connect(formstart, &FormStart::signal_btn_start_game, this, &Controller::switch_to_form_select);
---> get index
}

Controller::~Controller()
{
    if (formstart != nullptr)
    {
        delete formstart;
    }

    if (formunitselect != nullptr)
    {
        delete formunitselect;
    }
}

void Controller::startApp()
{
    formstart->show();
}

void Controller::switch_to_form_select()
{
    qDebug() << "Log: switch_to_form_select()";
    formstart->hide();
    formunitselect->show();

}

void Controller::unit_selected()
{
    int tmp_index = formunitselect->getIndex_select();
    --->
}
