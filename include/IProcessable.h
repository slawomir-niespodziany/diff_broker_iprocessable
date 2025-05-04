#pragma once

class IProcessable {
public:
    /**
     * Check processing state. Returns true if finished.
     */
    virtual bool finished() = 0;

    /**
     * Perform processing step.
     */
    virtual void process() = 0;
};
