/*
 * Allwinner SoCs hdmi2.0 driver.
 *
 * Copyright (C) 2016 Allwinner.
 *
 * This file is licensed under the terms of the GNU General Public
 * License version 2.  This program is licensed "as is" without any
 * warranty of any kind, whether express or implied.
 */

#include "identification.h"

u8 id_design(hdmi_tx_dev_t *dev)
{
	return dev_read(dev, DESIGN_ID);
}

u8 id_revision(hdmi_tx_dev_t *dev)
{
	return dev_read(dev, REVISION_ID);
}

u8 id_product_line(hdmi_tx_dev_t *dev)
{
	return dev_read(dev, PRODUCT_ID0);
}

u8 id_product_type(hdmi_tx_dev_t *dev)
{
	return dev_read(dev, PRODUCT_ID1);
}

int id_hdcp_support(hdmi_tx_dev_t *dev)
{
	LOG_TRACE();
	if (dev_read_mask(dev, PRODUCT_ID1,
		PRODUCT_ID1_PRODUCT_ID1_HDCP_MASK) == 3)
		return TRUE;
	else
		return FALSE;
}

int id_hdcp14_support(hdmi_tx_dev_t *dev)
{
	if (dev_read_mask(dev, CONFIG0_ID, CONFIG0_ID_HDCP_MASK))
		return TRUE;
	else
		return FALSE;
}

int id_hdcp22_support(hdmi_tx_dev_t *dev)
{
	if (dev_read_mask(dev, CONFIG1_ID, CONFIG1_ID_HDCP22_MASK))
		return TRUE;
	else
		return FALSE;
}

int id_phy(hdmi_tx_dev_t *dev)
{
	return dev_read(dev, CONFIG2_ID);
}
