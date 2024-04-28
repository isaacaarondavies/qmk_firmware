// Copyright 2024 isaacaarondavies (@isaacaarondavies)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define MASTER_LEFT

/* Serial communication */
#define SERIAL_USART_FULL_DUPLEX

/* Uncomment when flashing left keyboard */
#define SERIAL_USART_TX_PIN D3
#define SERIAL_USART_RX_PIN D2

/* Uncomment when flashing right keyboard */
// #define SERIAL_USART_TX_PIN D3
// #define SERIAL_USART_RX_PIN D2

/* Right keyboard kin definitions */
#define MATRIX_COL_PINS_RIGHT \
    { D4, D0, D1, B6, B2 }
#define MATRIX_ROW_PINS_RIGHT \
    { B5, B4, E6, D7 }

// #define SPLIT_TRANSPORT_MIRROR
