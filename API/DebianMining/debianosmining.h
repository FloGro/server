#ifndef DEBIANOSMINING_H
#define DEBIANOSMINING_H

#include "API/iStrategy.h"
#include <QtGlobal>

class DebianOsMining : public iStrategy
{
public:
    DebianOsMining();
    QJsonObject getData();
};

#endif // DEBIANOSMINING_H
