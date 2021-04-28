//
// Created by Assim Zemouchi on 18/12/2020.
//

#include "HourUnit.h"

QlockUnit::QlockWordsValue HourUnit::getQlockUnits(int hour) {

    switch (hour) {
        case 1:     return QlockUnit::QlockWordsValue::UNE;
        case 2:     return QlockUnit::QlockWordsValue::DEUX;
        case 3:     return QlockUnit::QlockWordsValue::TROIS;
        case 4:     return QlockUnit::QlockWordsValue::QUATRE;
        case 5:     return QlockUnit::QlockWordsValue::CINQ;
        case 6:     return QlockUnit::QlockWordsValue::SIX;
        case 7:     return QlockUnit::QlockWordsValue::SEPT;
        case 8:     return QlockUnit::QlockWordsValue::HUIT;
        case 9:     return QlockUnit::QlockWordsValue::NEUF;
        case 10:     return QlockUnit::QlockWordsValue::DIX;
        case 11:     return QlockUnit::QlockWordsValue::ONZE;
        case 12:     return QlockUnit::QlockWordsValue::MIDI;
        case 0:
        default:    return QlockUnit::QlockWordsValue::MINUIT;
    }
}
