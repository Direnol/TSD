#ifndef RADICAL_H
#define RADICAL_H

    typedef struct radix radix;

    enum errors {
        NO_ERROR = 0,
        ERROR
    };

    radix radical(radix *data, int *err);

#endif // RADICAL_H
