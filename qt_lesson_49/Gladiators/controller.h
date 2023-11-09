#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "formstart.h"
#include "formunitselect.h"
#include <QObject>
#include <QDebug>

class Controller : public QObject
{
    Q_OBJECT
public:
    explicit Controller(QObject *parent = nullptr);
    ~Controller();

    FormStart* formstart{nullptr};
    FormUnitSelect* formunitselect{nullptr};

    void startApp();
signals:

public slots:
    void switch_to_form_select();
    void unit_selected();
};

#endif // CONTROLLER_H
