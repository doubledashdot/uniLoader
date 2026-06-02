/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2026, doubledashdot <skyetachyon@gmail.com>
 */

#include <board.h>
#include <util.h>
#include <drivers/framework.h>
#include <lib/simplefb.h>

static struct video_info r8q_fb = {
	.format = FB_FORMAT_ARGB8888,
	.width = 1080,
	.height = 2400,
	.stride = 4,
	.address = (void *)0x9c000000
};

static const struct device r8q_devices[] = {
	{ "simplefb", &r8q_fb, "fb" },
};

struct board_data board_ops = {
	.name = "samsung-r8q",
	.ops = {
	},
	.devices = r8q_devices,
	.num_devices = ARRAY_SIZE(r8q_devices),
	.quirks = 0
};
