/*
 * QEMU model of the PMC_IOU_SECURE_SLCR Global system level control registers
 * for the iou
 *
 * Copyright (c) 2021 Xilinx Inc.
 *
 * Autogenerated by xregqemu.py 2021-06-04.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#include "qemu/osdep.h"
#include "hw/sysbus.h"
#include "hw/register.h"
#include "qemu/bitops.h"
#include "qemu/log.h"
#include "migration/vmstate.h"
#include "hw/irq.h"
#include "hw/qdev-properties.h"

#ifndef XILINX_PMC_IOU_SECURE_SLCR_ERR_DEBUG
#define XILINX_PMC_IOU_SECURE_SLCR_ERR_DEBUG 0
#endif

#define TYPE_XILINX_PMC_IOU_SECURE_SLCR "xlnx,versal-pmc-iou-slcr-secure"

#define XILINX_PMC_IOU_SECURE_SLCR(obj) \
     OBJECT_CHECK(PMC_IOU_SECURE_SLCR, (obj), TYPE_XILINX_PMC_IOU_SECURE_SLCR)

REG32(IOU_AXI_WPRTCN_SD0, 0x0)
    FIELD(IOU_AXI_WPRTCN_SD0, SD0_AXI_AWPROT, 0, 3)
REG32(IOU_AXI_RPRTCN_SD0, 0x4)
    FIELD(IOU_AXI_RPRTCN_SD0, SD0_AXI_ARPROT, 0, 3)
REG32(IOU_AXI_WPRTCN_SD1, 0x10)
    FIELD(IOU_AXI_WPRTCN_SD1, SD1_AXI_AWPROT, 0, 3)
REG32(IOU_AXI_RPRTCN_SD1, 0x14)
    FIELD(IOU_AXI_RPRTCN_SD1, SD1_AXI_ARPROT, 0, 3)
REG32(IOU_AXI_WPRTCN_QSPI, 0x20)
    FIELD(IOU_AXI_WPRTCN_QSPI, QSPI_AXI_AWPROT, 0, 3)
REG32(IOU_AXI_WPRTCN_OSPI, 0x30)
    FIELD(IOU_AXI_WPRTCN_OSPI, OSPI_AXI_AWPROT, 0, 3)
REG32(CTRL, 0x40)
    FIELD(CTRL, SLVERR_ENABLE, 0, 1)
REG32(ISR, 0x44)
    FIELD(ISR, ADDR_DECODE_ERR, 0, 1)
REG32(IMR, 0x48)
    FIELD(IMR, ADDR_DECODE_ERR, 0, 1)
REG32(IER, 0x4c)
    FIELD(IER, ADDR_DECODE_ERR, 0, 1)
REG32(IDR, 0x50)
    FIELD(IDR, ADDR_DECODE_ERR, 0, 1)
REG32(ITR, 0x54)
    FIELD(ITR, ADDR_DECODE_ERR, 0, 1)
REG32(TZPROT, 0x6c)
    FIELD(TZPROT, ACTIVE, 0, 1)

#define PMC_IOU_SECURE_SLCR_R_MAX (R_TZPROT + 1)

typedef struct PMC_IOU_SECURE_SLCR {
    SysBusDevice parent_obj;
    MemoryRegion iomem;
    qemu_irq irq_imr;

    MemTxAttrs *memattr_r_sd[2];
    MemTxAttrs *memattr_w_sd[2];
    MemTxAttrs *memattr_w_qspi;
    MemTxAttrs *memattr_w_ospi;

    uint32_t regs[PMC_IOU_SECURE_SLCR_R_MAX];
    RegisterInfo regs_info[PMC_IOU_SECURE_SLCR_R_MAX];
} PMC_IOU_SECURE_SLCR;

static void imr_update_irq(PMC_IOU_SECURE_SLCR *s)
{
    bool pending = s->regs[R_ISR] & ~s->regs[R_IMR];
    qemu_set_irq(s->irq_imr, pending);
}

static void isr_postw(RegisterInfo *reg, uint64_t val64)
{
    PMC_IOU_SECURE_SLCR *s = XILINX_PMC_IOU_SECURE_SLCR(reg->opaque);
    imr_update_irq(s);
}

static uint64_t ier_prew(RegisterInfo *reg, uint64_t val64)
{
    PMC_IOU_SECURE_SLCR *s = XILINX_PMC_IOU_SECURE_SLCR(reg->opaque);
    uint32_t val = val64;

    s->regs[R_IMR] &= ~val;
    imr_update_irq(s);
    return 0;
}

static uint64_t idr_prew(RegisterInfo *reg, uint64_t val64)
{
    PMC_IOU_SECURE_SLCR *s = XILINX_PMC_IOU_SECURE_SLCR(reg->opaque);
    uint32_t val = val64;

    s->regs[R_IMR] |= val;
    imr_update_irq(s);
    return 0;
}

static uint64_t itr_prew(RegisterInfo *reg, uint64_t val64)
{
    PMC_IOU_SECURE_SLCR *s = XILINX_PMC_IOU_SECURE_SLCR(reg->opaque);
    uint32_t val = val64;

    s->regs[R_ISR] |= val;
    imr_update_irq(s);
    return 0;
}

static void slcr_memattr_postw(RegisterInfo *reg, uint64_t val64)
{
    PMC_IOU_SECURE_SLCR *s = XILINX_PMC_IOU_SECURE_SLCR(reg->opaque);
    uint32_t val = (uint32_t)val64;
    uint32_t offset;
    bool sec;
    bool priv;

    /* Invert secure attribute output so a high output means secure accesss */
    sec = !(FIELD_EX32(val, IOU_AXI_WPRTCN_SD0, SD0_AXI_AWPROT) & 2);
    priv = FIELD_EX32(val, IOU_AXI_WPRTCN_SD0, SD0_AXI_AWPROT) & 1;

    offset = (reg->access->addr - A_IOU_AXI_WPRTCN_SD0);
    switch (offset) {
    case A_IOU_AXI_WPRTCN_SD0:
        if (s->memattr_w_sd[0]) {
            s->memattr_w_sd[0]->secure = sec;
            s->memattr_w_sd[0]->user = priv;
        }
        break;
    case A_IOU_AXI_RPRTCN_SD0:
        if (s->memattr_r_sd[0]) {
            s->memattr_r_sd[0]->secure = sec;
            s->memattr_r_sd[0]->user = priv;
        }
        break;
    case A_IOU_AXI_WPRTCN_SD1:
        if (s->memattr_w_sd[1]) {
            s->memattr_w_sd[1]->secure = sec;
            s->memattr_w_sd[1]->user = priv;
        }
        break;
    case A_IOU_AXI_RPRTCN_SD1:
        if (s->memattr_r_sd[1]) {
            s->memattr_r_sd[1]->secure = sec;
            s->memattr_r_sd[1]->user = priv;
        }
        break;
    case A_IOU_AXI_WPRTCN_QSPI:
        if (s->memattr_w_qspi) {
            s->memattr_w_qspi->secure = sec;
            s->memattr_w_qspi->user = priv;
        }
        break;
    case A_IOU_AXI_WPRTCN_OSPI:
        if (s->memattr_w_ospi) {
            s->memattr_w_ospi->secure = sec;
            s->memattr_w_ospi->user = priv;
        }
        break;
    default:
        g_assert_not_reached();
    };
}

static const RegisterAccessInfo pmc_iou_secure_slcr_regs_info[] = {
    {   .name = "IOU_AXI_WPRTCN_SD0",  .addr = A_IOU_AXI_WPRTCN_SD0,
        .rsvd = 0xfffffff8,
        .post_write = slcr_memattr_postw,
    },{ .name = "IOU_AXI_RPRTCN_SD0",  .addr = A_IOU_AXI_RPRTCN_SD0,
        .rsvd = 0xfffffff8,
        .post_write = slcr_memattr_postw,
    },{ .name = "IOU_AXI_WPRTCN_SD1",  .addr = A_IOU_AXI_WPRTCN_SD1,
        .rsvd = 0xfffffff8,
        .post_write = slcr_memattr_postw,
    },{ .name = "IOU_AXI_RPRTCN_SD1",  .addr = A_IOU_AXI_RPRTCN_SD1,
        .rsvd = 0xfffffff8,
        .post_write = slcr_memattr_postw,
    },{ .name = "IOU_AXI_WPRTCN_QSPI",  .addr = A_IOU_AXI_WPRTCN_QSPI,
        .rsvd = 0xfffffff8,
        .post_write = slcr_memattr_postw,
    },{ .name = "IOU_AXI_WPRTCN_OSPI",  .addr = A_IOU_AXI_WPRTCN_OSPI,
        .rsvd = 0xfffffff8,
        .post_write = slcr_memattr_postw,
    },{ .name = "CTRL",  .addr = A_CTRL,
    },{ .name = "ISR",  .addr = A_ISR,
        .w1c = 0x1,
        .post_write = isr_postw,
    },{ .name = "IMR",  .addr = A_IMR,
        .reset = 0x1,
        .ro = 0x1,
    },{ .name = "IER",  .addr = A_IER,
        .pre_write = ier_prew,
    },{ .name = "IDR",  .addr = A_IDR,
        .pre_write = idr_prew,
    },{ .name = "ITR",  .addr = A_ITR,
        .pre_write = itr_prew,
    },{ .name = "TZPROT",  .addr = A_TZPROT,
    }
};

static void pmc_iou_secure_slcr_reset_enter(Object *obj, ResetType type)
{
    PMC_IOU_SECURE_SLCR *s = XILINX_PMC_IOU_SECURE_SLCR(obj);
    unsigned int i;

    for (i = 0; i < ARRAY_SIZE(s->regs_info); ++i) {
        register_reset(&s->regs_info[i]);
    }
}

static void pmc_iou_secure_slcr_reset_hold(Object *obj)
{
    PMC_IOU_SECURE_SLCR *s = XILINX_PMC_IOU_SECURE_SLCR(obj);

    imr_update_irq(s);
}

static const MemoryRegionOps pmc_iou_secure_slcr_ops = {
    .read = register_read_memory,
    .write = register_write_memory,
    .endianness = DEVICE_LITTLE_ENDIAN,
    .valid = {
        .min_access_size = 4,
        .max_access_size = 4,
    },
};

static void pmc_iou_secure_slcr_init(Object *obj)
{
    PMC_IOU_SECURE_SLCR *s = XILINX_PMC_IOU_SECURE_SLCR(obj);
    SysBusDevice *sbd = SYS_BUS_DEVICE(obj);
    RegisterInfoArray *reg_array;

    memory_region_init(&s->iomem, obj, TYPE_XILINX_PMC_IOU_SECURE_SLCR,
                       PMC_IOU_SECURE_SLCR_R_MAX * 4);
    reg_array =
        register_init_block32(DEVICE(obj), pmc_iou_secure_slcr_regs_info,
                              ARRAY_SIZE(pmc_iou_secure_slcr_regs_info),
                              s->regs_info, s->regs,
                              &pmc_iou_secure_slcr_ops,
                              XILINX_PMC_IOU_SECURE_SLCR_ERR_DEBUG,
                              PMC_IOU_SECURE_SLCR_R_MAX * 4);
    memory_region_add_subregion(&s->iomem,
                                0x0,
                                &reg_array->mem);
    sysbus_init_mmio(sbd, &s->iomem);
    sysbus_init_irq(sbd, &s->irq_imr);

    object_property_add_link(obj, "memattr-sd0",
                             TYPE_MEMORY_TRANSACTION_ATTR,
                             (Object **)&s->memattr_r_sd[0],
                             qdev_prop_allow_set_link_before_realize,
                             OBJ_PROP_LINK_STRONG);
    object_property_add_link(obj, "memattr-write-sd0",
                             TYPE_MEMORY_TRANSACTION_ATTR,
                             (Object **)&s->memattr_w_sd[0],
                             qdev_prop_allow_set_link_before_realize,
                             OBJ_PROP_LINK_STRONG);
    object_property_add_link(obj, "memattr-sd1",
                             TYPE_MEMORY_TRANSACTION_ATTR,
                             (Object **)&s->memattr_r_sd[1],
                             qdev_prop_allow_set_link_before_realize,
                             OBJ_PROP_LINK_STRONG);
    object_property_add_link(obj, "memattr-write-sd1",
                             TYPE_MEMORY_TRANSACTION_ATTR,
                             (Object **)&s->memattr_w_sd[1],
                             qdev_prop_allow_set_link_before_realize,
                             OBJ_PROP_LINK_STRONG);
    object_property_add_link(obj, "memattr-write-qspi",
                             TYPE_MEMORY_TRANSACTION_ATTR,
                             (Object **)&s->memattr_w_qspi,
                             qdev_prop_allow_set_link_before_realize,
                             OBJ_PROP_LINK_STRONG);
    object_property_add_link(obj, "memattr-write-ospi",
                             TYPE_MEMORY_TRANSACTION_ATTR,
                             (Object **)&s->memattr_w_ospi,
                             qdev_prop_allow_set_link_before_realize,
                             OBJ_PROP_LINK_STRONG);
}

static const VMStateDescription vmstate_pmc_iou_secure_slcr = {
    .name = TYPE_XILINX_PMC_IOU_SECURE_SLCR,
    .version_id = 1,
    .minimum_version_id = 1,
    .fields = (VMStateField[]) {
        VMSTATE_UINT32_ARRAY(regs, PMC_IOU_SECURE_SLCR,
                             PMC_IOU_SECURE_SLCR_R_MAX),
        VMSTATE_END_OF_LIST(),
    }
};

static void pmc_iou_secure_slcr_class_init(ObjectClass *klass, void *data)
{
    ResettableClass *rc = RESETTABLE_CLASS(klass);
    DeviceClass *dc = DEVICE_CLASS(klass);

    dc->vmsd = &vmstate_pmc_iou_secure_slcr;
    rc->phases.enter = pmc_iou_secure_slcr_reset_enter;
    rc->phases.hold = pmc_iou_secure_slcr_reset_hold;
}

static const TypeInfo pmc_iou_secure_slcr_info = {
    .name          = TYPE_XILINX_PMC_IOU_SECURE_SLCR,
    .parent        = TYPE_SYS_BUS_DEVICE,
    .instance_size = sizeof(PMC_IOU_SECURE_SLCR),
    .class_init    = pmc_iou_secure_slcr_class_init,
    .instance_init = pmc_iou_secure_slcr_init,
};

static void pmc_iou_secure_slcr_register_types(void)
{
    type_register_static(&pmc_iou_secure_slcr_info);
}

type_init(pmc_iou_secure_slcr_register_types)
