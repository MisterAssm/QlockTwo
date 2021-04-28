//
// Created by Assim Zemouchi on 18/12/2020.
//

#ifndef UNTITLED6_QLOCKUNIT_H
#define UNTITLED6_QLOCKUNIT_H


#include <stdint.h>
#include "models/QlockWord.h"

class QlockUnit {

public:
    enum QlockWordsValue : uint8_t {

        MINUIT,
        UNE,
        DEUX,
        TROIS,
        QUATRE,
        CINQ,
        CINQ1,
        SIX,
        SEPT,
        HUIT,
        NEUF,
        DIX,
        DIX1,
        ONZE,
        IL,
        EST,
        ET,
        HEURE,
        HEURES,
        LE,
        QUART,
        VINGT,
        MIDI,
        VINGT_CINQ,
        MOINS,
        ET1,
        DEMIE

    };

    QlockUnit() = default;

    explicit QlockUnit(QlockWordsValue aValue) : value(aValue) {}

    static QlockWord getQlockWord(QlockWordsValue value);

private:
    QlockWordsValue value;

};


#endif //UNTITLED6_QLOCKUNIT_H
