#ifndef __UVEVENT__
#define __UVEVENT__

#include <string>
#include "uvPoint.h"
#include "uvEdge.h"

class Event {
public:
    Event();
    Event(std::string status, UvPoint point, UvEdge edge, int index);
    ~Event();

    std::string status;
    UvPoint point;
    UvEdge edge;
    int index;

    float u;
    float v;

    bool operator==(const Event& rhs) const;
    inline bool operator!=(const Event& rhs) const
    {
        return !(*this == rhs);
    }

    bool operator>(const Event& rhs) const;
    bool operator>=(const Event& rhs) const;
    bool operator<(const Event& rhs) const;
    bool operator<=(const Event& rhs) const;

private:
};

#endif /* defined(__UVEVENT_H__) */
