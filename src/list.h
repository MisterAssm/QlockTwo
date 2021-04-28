//
// Created by Assim Zemouchi on 19/12/2020.
//

#ifndef QLOCKTWO_LIST_H
#define QLOCKTWO_LIST_H

#include "models/QlockWord.h"


class List {
public:
    byte length;
    QlockWord data[10];

    void append(QlockWord item) {
        if (length < 16) data[length++] = item;
    }

};


#endif //QLOCKTWO_LIST_H
