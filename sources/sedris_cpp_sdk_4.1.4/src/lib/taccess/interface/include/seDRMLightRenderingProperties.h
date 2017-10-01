/*
 *  Copyright (c) 2006 Accent Geographic. All rights reserved.
 *  See the license file for licensing information.
 *  Created: Wed Jul 26 23:47:08 2006
 *
 *  DO NOT EDIT THIS FILE! (Autogenerated)
 */

// SEDRIS C++ SDK Release 4.1.4 - July 1, 2011

/*
 *                             NOTICE
 * 
 * This software is provided openly and freely for use in representing and
 * interchanging environmental data & databases.
 * 
 * This software was developed for use by the United States Government with
 * unlimited rights.  The software was developed under contract
 * DASG60-02-D-0006 TO-193 by Science Applications International Corporation.
 * The software is unclassified and is deemed as Distribution A, approved
 * for Public Release.
 * 
 * Use by others is permitted only upon the ACCEPTANCE OF THE TERMS AND
 * CONDITIONS, AS STIPULATED UNDER THE FOLLOWING PROVISIONS:
 * 
 *    1. Recipient may make unlimited copies of this software and give
 *       copies to other persons or entities as long as the copies contain
 *       this NOTICE, and as long as the same copyright notices that
 *       appear on, or in, this software remain.
 * 
 *    2. Trademarks. All trademarks belong to their respective trademark
 *       holders.  Third-Party applications/software/information are
 *       copyrighted by their respective owners.
 * 
 *    3. Recipient agrees to forfeit all intellectual property and
 *       ownership rights for any version created from the modification
 *       or adaptation of this software, including versions created from
 *       the translation and/or reverse engineering of the software design.
 * 
 *    4. Transfer.  Recipient may not sell, rent, lease, or sublicense
 *       this software.  Recipient may, however enable another person
 *       or entity the rights to use this software, provided that this
 *       AGREEMENT and NOTICE is furnished along with the software and
 *       /or software system utilizing this software.
 * 
 *       All revisions, modifications, created by the Recipient, to this
 *       software and/or related technical data shall be forwarded by the
 *       Recipient to the Government at the following address:
 * 
 *         SMDC
 *         Attention SEDRIS (TO193) TPOC
 *         P.O. Box 1500
 *         Huntsville, AL  35807-3801
 * 
 *         or via electronic mail to:  se-mgmt@sedris.org
 * 
 *    5. No Warranty. This software is being delivered to you AS IS
 *       and there is no warranty, EXPRESS or IMPLIED, as to its use
 *       or performance.
 * 
 *       The RECIPIENT ASSUMES ALL RISKS, KNOWN AND UNKNOWN, OF USING
 *       THIS SOFTWARE.  The DEVELOPER EXPRESSLY DISCLAIMS, and the
 *       RECIPIENT WAIVES, ANY and ALL PERFORMANCE OR RESULTS YOU MAY
 *       OBTAIN BY USING THIS SOFTWARE OR DOCUMENTATION.  THERE IS
 *       NO WARRANTY, EXPRESS OR, IMPLIED, AS TO NON-INFRINGEMENT OF
 *       THIRD PARTY RIGHTS, MERCHANTABILITY, OR FITNESS FOR ANY
 *       PARTICULAR PURPOSE.  IN NO EVENT WILL THE DEVELOPER, THE
 *       UNITED STATES GOVERNMENT OR ANYONE ELSE ASSOCIATED WITH THE
 *       DEVELOPMENT OF THIS SOFTWARE BE HELD LIABLE FOR ANY CONSEQUENTIAL,
 *       INCIDENTAL OR SPECIAL DAMAGES, INCLUDING ANY LOST PROFITS
 *       OR LOST SAVINGS WHATSOEVER.
 */

/** @file seDRMLightRenderingProperties.h
@author Warren Macchi (Accent Geographic)
@brief Accessors to the seDRMLightRenderingProperties (127) class.
*/

#ifndef _seDRMLightRenderingProperties_h
#define _seDRMLightRenderingProperties_h

#include "seDRMBase.h"

namespace sedris {

/** seDRMLightRenderingProperties wraps the DRM <a href="../drm/classes/LightRenderingProperties.htm">&lt;Light_Rendering_Properties&gt;</a> class.
@author Warren Macchi
@version Revision: 1.8
@see seDRMBase
*/
class seDRMLightRenderingProperties : public seDRMBase
{
public:

    /// Default constructor
    seDRMLightRenderingProperties() {}

    /// Constructor for seDRM... class conversions
    seDRMLightRenderingProperties( const seObject &other ) : seDRMBase(other) {}

    /// Get field <a href="../drm/classes/LightRenderingProperties.htm#display_type">display_type</a>
    SE_Point_Light_Display_Type get_display_type()
    {
        DRMBASE_RET_FIELDS(Light_Rendering_Properties, display_type);
    }

    /// Set field <a href="../drm/classes/LightRenderingProperties.htm#display_type">display_type</a>
    void set_display_type( SE_Point_Light_Display_Type display_type )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Light_Rendering_Properties, display_type, display_type);
    }

    /// Get field <a href="../drm/classes/LightRenderingProperties.htm#light_diameter">light_diameter</a>
    SE_Long_Float get_light_diameter()
    {
        DRMBASE_RET_FIELDS(Light_Rendering_Properties, light_diameter);
    }

    /// Set field <a href="../drm/classes/LightRenderingProperties.htm#light_diameter">light_diameter</a>
    void set_light_diameter( SE_Long_Float light_diameter )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Light_Rendering_Properties, light_diameter, light_diameter);
    }

    /// Get field <a href="../drm/classes/LightRenderingProperties.htm#light_extinguishing_range">light_extinguishing_range</a>
    SE_Long_Float get_light_extinguishing_range()
    {
        DRMBASE_RET_FIELDS(Light_Rendering_Properties, light_extinguishing_range);
    }

    /// Set field <a href="../drm/classes/LightRenderingProperties.htm#light_extinguishing_range">light_extinguishing_range</a>
    void set_light_extinguishing_range( SE_Long_Float light_extinguishing_range )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Light_Rendering_Properties, light_extinguishing_range, light_extinguishing_range);
    }

    /// Get field <a href="../drm/classes/LightRenderingProperties.htm#random_area_light">random_area_light</a>
    SE_Boolean get_random_area_light()
    {
        DRMBASE_RET_FIELDS(Light_Rendering_Properties, random_area_light);
    }

    /// Set field <a href="../drm/classes/LightRenderingProperties.htm#random_area_light">random_area_light</a>
    void set_random_area_light( SE_Boolean random_area_light )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Light_Rendering_Properties, random_area_light, random_area_light);
    }

    /// Get field <a href="../drm/classes/LightRenderingProperties.htm#active_light_value">active_light_value</a>
    SE_Boolean get_active_light_value()
    {
        DRMBASE_RET_FIELDS(Light_Rendering_Properties, active_light_value);
    }

    /// Set field <a href="../drm/classes/LightRenderingProperties.htm#active_light_value">active_light_value</a>
    void set_active_light_value( SE_Boolean active_light_value )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Light_Rendering_Properties, active_light_value, active_light_value);
    }

    /// Get field <a href="../drm/classes/LightRenderingProperties.htm#candela_value">candela_value</a>
    SE_Long_Float get_candela_value()
    {
        DRMBASE_RET_FIELDS(Light_Rendering_Properties, candela_value);
    }

    /// Set field <a href="../drm/classes/LightRenderingProperties.htm#candela_value">candela_value</a>
    void set_candela_value( SE_Long_Float candela_value )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Light_Rendering_Properties, candela_value, candela_value);
    }

    /** Gets the DRM class type this object can reference (mostly internal use).
        @warning Don't confuse with getDRMClass(), which is dependent on the
            actual type held by this DRM class object reference.
        @return SE_CLS_DRM_LIGHT_RENDERING_PROPERTIES
    */
    virtual SE_DRM_Class getClassType() const
    {
        return SE_CLS_DRM_LIGHT_RENDERING_PROPERTIES;
    }

};

} // namespace sedris

#endif // _seDRMLightRenderingProperties_h
