#ifndef __UVPOINT__
#define __UVPOINT__

#include "vector.h"


class UvPoint {
public:
    UvPoint();
    UvPoint(float u, float v);
    UvPoint(float u, float v, int index);
    UvPoint(float u, float v, int index, int shellIndex);
    ~UvPoint();

    float u;
    float v;
    int index;
    int shellIndex;

    bool operator==(const UvPoint& rhs) const;
    inline bool operator!=(const UvPoint& rhs) const
    {
        return !(*this == rhs);
    }

    bool operator>(const UvPoint& rhs) const;
    bool operator>=(const UvPoint& rhs) const;
    bool operator<(const UvPoint& rhs) const;
    bool operator<=(const UvPoint& rhs) const;

    Vector operator-(const UvPoint& rhs) const;

private:
};

#endif /* defined(__UVPOINT_H__) */
