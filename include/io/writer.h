/**
 * @file writer.h
 * @brief Defines an abstract Writer interface for output dependency injection.
 */

#pragma once

#include <string>

namespace io
{
    class Writer
    {
    public:
        virtual ~Writer() = default;
        /// Write a string (may include newline)
        virtual void write(const std::string &text) = 0;
    };

    // Simple accessor to a default writer (console). Implementation provided in
    // src/io/console_writer.cpp
    Writer &default_writer();
}
