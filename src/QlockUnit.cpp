//
// Created by Assim Zemouchi on 18/12/2020.
//

#include "QlockUnit.h"

QlockWord QlockUnit::getQlockWord(QlockUnit::QlockWordsValue value) {
    switch (value) {
        case MINUIT:    return QlockWord(4, 5, 10);
        case UNE:       return QlockWord(2, 4, 6);
        case DEUX:      return QlockWord(0, 7, 10);
        case TROIS:     return QlockWord(1, 6, 10);
        case QUATRE:    return QlockWord(1, 0, 5);
        case CINQ:      return QlockWord(3, 7, 10);
        case CINQ1:     return QlockWord(8, 6, 9);
        case SIX:       return QlockWord(3, 4, 6);
        case SEPT:      return QlockWord(2, 7, 10);
        case HUIT:      return QlockWord(3, 0, 3);
        case NEUF:      return QlockWord(2, 0, 3);

        case DIX:       return QlockWord(4, 2, 4);
        case DIX1:      return QlockWord(6, 8, 10);
        case ONZE:      return QlockWord(5, 0, 3);
        case IL:        return QlockWord(0, 0, 1);
        case EST:       return QlockWord(0, 3, 5);
        case ET:        return QlockWord(7, 0, 1);
        case HEURE:     return QlockWord(5, 5, 9);
        case HEURES:    return QlockWord(5, 5, 10);
        case LE:        return QlockWord(6, 6, 7);
        case QUART:     return QlockWord(7, 3, 7);
        case VINGT:     return QlockWord(8, 0, 4);
        case MIDI:      return QlockWord(4, 0, 3);

        case VINGT_CINQ:return QlockWord(8, 0, 9);
        case MOINS:     return QlockWord(6, 0, 4);
        case ET1:       return QlockWord(9, 3, 1);
        case DEMIE:     return QlockWord(9, 3, 7);
        default:        return QlockWord(0, 0, 0);
    }
}
