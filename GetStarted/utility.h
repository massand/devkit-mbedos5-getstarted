// Copyright (c) Microsoft. All rights reserved.
// Licensed under the MIT license. 

#ifndef UTILITY_H
#define UTILITY_H

void parseTwinMessage(DEVICE_TWIN_UPDATE_STATE, const char *);
bool readMessage(int, char *);

int SensorInit(void);

void blinkLED(void);
void blinkRED(void);
void blinkBLUE(void);
void blinkGREEN(void);

void blinkSendConfirmation(void);
int getInterval(void);

#endif /* UTILITY_H */