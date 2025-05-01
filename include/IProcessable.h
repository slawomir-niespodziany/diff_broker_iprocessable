#pragma once

class IProcessable {
public:
    virtual bool finished() = 0;
    virtual void process() = 0;
};