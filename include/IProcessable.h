#pragma once

/**
 * @brief Interface for processable components.
 */
class IProcessable {
public:
    /**
     * @brief Indicate whether processing is finished.
     */
    virtual bool finished() = 0;

    /**
     * @brief Perform processing step.
     */
    virtual void process() = 0;
};