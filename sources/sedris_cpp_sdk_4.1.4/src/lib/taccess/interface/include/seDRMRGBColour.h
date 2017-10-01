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

/** @file seDRMRGBColour.h
@author Warren Macchi (Accent Geographic)
@brief Accessors to the seDRMRGBColour (225) class.
*/

#ifndef _seDRMRGBColour_h
#define _seDRMRGBColour_h

#include "seDRMColourData.h"

namespace sedris {

/** seDRMRGBColour wraps the DRM <a href="../drm/classes/RGBColour.htm">&lt;RGB_Colour&gt;</a> class.
@author Warren Macchi
@version Revision: 1.8
@see seDRMColourData
*/
class seDRMRGBColour : public seDRMColourData
{
public:

    /// Default constructor
    seDRMRGBColour() {}

    /// Constructor for seDRM... class conversions
    seDRMRGBColour( const seObject &other ) : seDRMColourData(other) {}

    /// Get field <a href="../drm/classes/RGBColour.htm#rgb_data">rgb_data</a>
    const SE_RGB_Data& get_rgb_data()
    {
        DRMBASE_RET_FIELDS(RGB_Colour, rgb_data);
    }

    /// Set field <a href="../drm/classes/RGBColour.htm#rgb_data">rgb_data</a>
    void set_rgb_data( const SE_RGB_Data& rgb_data )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(RGB_Colour, rgb_data, rgb_data);
    }

    /// Set field <a href="../drm/classes/RGBColour.htm#rgb_data">rgb_data</a> by parameter list
    void set_rgb_data
    (
         SE_Long_Float red,
         SE_Long_Float green,
         SE_Long_Float blue
    )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(RGB_Colour, rgb_data.red, red);
        DRMBASE_SET_FIELDS(RGB_Colour, rgb_data.green, green);
        DRMBASE_SET_FIELDS(RGB_Colour, rgb_data.blue, blue);
    }

    /// Set field <a href="../drm/classes/RGBColour.htm#rgb_data_red">rgb_data_red</a>
    void set_rgb_data_red( SE_Long_Float red )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(RGB_Colour, rgb_data.red, red);
    }

    /// Set field <a href="../drm/classes/RGBColour.htm#rgb_data_green">rgb_data_green</a>
    void set_rgb_data_green( SE_Long_Float green )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(RGB_Colour, rgb_data.green, green);
    }

    /// Set field <a href="../drm/classes/RGBColour.htm#rgb_data_blue">rgb_data_blue</a>
    void set_rgb_data_blue( SE_Long_Float blue )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(RGB_Colour, rgb_data.blue, blue);
    }

    /** Gets the DRM class type this object can reference (mostly internal use).
        @warning Don't confuse with getDRMClass(), which is dependent on the
            actual type held by this DRM class object reference.
        @return SE_CLS_DRM_RGB_COLOUR
    */
    virtual SE_DRM_Class getClassType() const
    {
        return SE_CLS_DRM_RGB_COLOUR;
    }

};

} // namespace sedris

#endif // _seDRMRGBColour_h