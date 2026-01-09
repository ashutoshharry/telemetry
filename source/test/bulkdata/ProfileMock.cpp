/*
 * Copyright 2024 RDK Management
 * Licensed under the Apache License, Version 2.0.
 */

#include "ProfileMock.h"

ProfileMock* g_profileMock = nullptr;

extern "C" char* cJSON_PrintUnformatted(const cJSON* item)
{
    if (!g_profileMock)
    {
        return nullptr;
    }
    return g_profileMock->cJSON_PrintUnformatted(item);
}
