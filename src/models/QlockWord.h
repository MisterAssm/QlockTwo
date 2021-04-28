//
// Created by Assim Zemouchi on 18/12/2020.
//

#ifndef UNTITLED6_QLOCKWORD_H
#define UNTITLED6_QLOCKWORD_H


class QlockWord {

public:
    int height;
    int from;
    int to;

    QlockWord(int height1, int from1, int to1) {
        height = height1;
        from = from1;
        to = to1;
    }

    QlockWord() {
        height = -1;
        from = -1;
        to = -1;
    }

};


#endif //UNTITLED6_QLOCKWORD_H
