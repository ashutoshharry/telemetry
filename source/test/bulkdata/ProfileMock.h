/*
 * Copyright 2024 RDK Management
 * Licensed under the Apache License, Version 2.0.
 */

#ifndef PROFILE_MOCK_H
#define PROFILE_MOCK_H

#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <cjson/cJSON.h>

class ProfileInterface
{
public:
    virtual ~ProfileInterface() = default;
    virtual char* cJSON_PrintUnformatted(const cJSON* item) = 0;
};

// Standard GMock pattern
class ProfileMock : public ProfileInterface
{
public:
    virtual ~ProfileMock() {}
    MOCK_METHOD(char*, cJSON_PrintUnformatted, (const cJSON* item), (override));
};

// Global instance pointer used by the bridge in cpp
extern ProfileMock* g_profileMock;

#endif // PROFILE_MOCK_H
