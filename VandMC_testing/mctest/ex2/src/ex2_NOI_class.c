/*----------------------------------------------------------------------------
 * File:  ex2_NOI_class.c
 *
 * Class:       No Instances  (NOI)
 * Component:   ex2
 *
 * (C) Copyright 1998-2012 Mentor Graphics Corporation.  All rights reserved.
 *--------------------------------------------------------------------------*/

#include "ex2_sys_types.h"
#include "ex2_BR_bridge.h"
#include "ARCH_bridge.h"
#include "NVS_bridge.h"
#include "PERSIST_bridge.h"
#include "LOG_bridge.h"
#include "TIM_bridge.h"
#include "ex2_classes.h"


/*
 * Statically allocate space for the instance population for this class.
 * Allocate space for the class instance and its attribute values.
 * Depending upon the collection scheme, allocate containoids (collection
 * nodes) for gathering instances into free and active extents.
 */
static Escher_SetElement_s ex2_NOI_container[ ex2_NOI_MAX_EXTENT_SIZE ];
static ex2_NOI ex2_NOI_instances[ ex2_NOI_MAX_EXTENT_SIZE ];
Escher_Extent_t pG_ex2_NOI_extent = {
  {0}, {0}, &ex2_NOI_container[ 0 ],
  (Escher_iHandle_t) &ex2_NOI_instances,
  sizeof( ex2_NOI ), 0, ex2_NOI_MAX_EXTENT_SIZE
  };


