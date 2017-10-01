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

/** @file seDRMPolygon.h
@author Warren Macchi (Accent Geographic)
@brief Accessors to the seDRMPolygon (181) class.
*/

#ifndef _seDRMPolygon_h
#define _seDRMPolygon_h

#include "seDRMSurfaceGeometry.h"

namespace sedris {

/** seDRMPolygon wraps the DRM <a href="../drm/classes/Polygon.htm">&lt;Polygon&gt;</a> class.
@author Warren Macchi
@version Revision: 1.8
@see seDRMSurfaceGeometry
*/
class seDRMPolygon : public seDRMSurfaceGeometry
{
public:

    /// Default constructor
    seDRMPolygon() {}

    /// Constructor for seDRM... class conversions
    seDRMPolygon( const seObject &other ) : seDRMSurfaceGeometry(other) {}

    /// Get field <a href="../drm/classes/Polygon.htm#polygon_flags">polygon_flags</a>
    SE_Polygon_Flag get_polygon_flags()
    {
        DRMBASE_RET_FIELDS(Polygon, polygon_flags);
    }

    /// Set field <a href="../drm/classes/Polygon.htm#polygon_flags">polygon_flags</a>
    void set_polygon_flags( SE_Polygon_Flag polygon_flags )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Polygon, polygon_flags, polygon_flags);
    }

    /// Set field <a href="../drm/classes/Polygon.htm#polygon_flags_Backdrop_Ground">polygon_flags_Backdrop_Ground</a>
    void set_polygon_flags_Backdrop_Ground( SE_Integer_Unsigned Backdrop_Ground )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Polygon, polygon_flags.member.Backdrop_Ground, Backdrop_Ground);
    }

    /// Set field <a href="../drm/classes/Polygon.htm#polygon_flags_Backdrop_Sky">polygon_flags_Backdrop_Sky</a>
    void set_polygon_flags_Backdrop_Sky( SE_Integer_Unsigned Backdrop_Sky )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Polygon, polygon_flags.member.Backdrop_Sky, Backdrop_Sky);
    }

    /// Set field <a href="../drm/classes/Polygon.htm#polygon_flags_Clutter_Enhanced">polygon_flags_Clutter_Enhanced</a>
    void set_polygon_flags_Clutter_Enhanced( SE_Integer_Unsigned Clutter_Enhanced )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Polygon, polygon_flags.member.Clutter_Enhanced, Clutter_Enhanced);
    }

    /// Set field <a href="../drm/classes/Polygon.htm#polygon_flags_Collidible">polygon_flags_Collidible</a>
    void set_polygon_flags_Collidible( SE_Integer_Unsigned Collidible )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Polygon, polygon_flags.member.Collidible, Collidible);
    }

    /// Set field <a href="../drm/classes/Polygon.htm#polygon_flags_Concave">polygon_flags_Concave</a>
    void set_polygon_flags_Concave( SE_Integer_Unsigned Concave )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Polygon, polygon_flags.member.Concave, Concave);
    }

    /// Set field <a href="../drm/classes/Polygon.htm#polygon_flags_Cut">polygon_flags_Cut</a>
    void set_polygon_flags_Cut( SE_Integer_Unsigned Cut )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Polygon, polygon_flags.member.Cut, Cut);
    }

    /// Set field <a href="../drm/classes/Polygon.htm#polygon_flags_Cut_Imagery">polygon_flags_Cut_Imagery</a>
    void set_polygon_flags_Cut_Imagery( SE_Integer_Unsigned Cut_Imagery )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Polygon, polygon_flags.member.Cut_Imagery, Cut_Imagery);
    }

    /// Set field <a href="../drm/classes/Polygon.htm#polygon_flags_Decal">polygon_flags_Decal</a>
    void set_polygon_flags_Decal( SE_Integer_Unsigned Decal )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Polygon, polygon_flags.member.Decal, Decal);
    }

    /// Set field <a href="../drm/classes/Polygon.htm#polygon_flags_Dont_Drape">polygon_flags_Dont_Drape</a>
    void set_polygon_flags_Dont_Drape( SE_Integer_Unsigned Dont_Drape )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Polygon, polygon_flags.member.Dont_Drape, Dont_Drape);
    }

    /// Set field <a href="../drm/classes/Polygon.htm#polygon_flags_Enable_Feature_Size_Blending">polygon_flags_Enable_Feature_Size_Blending</a>
    void set_polygon_flags_Enable_Feature_Size_Blending( SE_Integer_Unsigned Enable_Feature_Size_Blending )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Polygon, polygon_flags.member.Enable_Feature_Size_Blending, Enable_Feature_Size_Blending);
    }

    /// Set field <a href="../drm/classes/Polygon.htm#polygon_flags_Enable_Fractal">polygon_flags_Enable_Fractal</a>
    void set_polygon_flags_Enable_Fractal( SE_Integer_Unsigned Enable_Fractal )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Polygon, polygon_flags.member.Enable_Fractal, Enable_Fractal);
    }

    /// Set field <a href="../drm/classes/Polygon.htm#polygon_flags_Enable_Polygon_Range_Blending">polygon_flags_Enable_Polygon_Range_Blending</a>
    void set_polygon_flags_Enable_Polygon_Range_Blending( SE_Integer_Unsigned Enable_Polygon_Range_Blending )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Polygon, polygon_flags.member.Enable_Polygon_Range_Blending, Enable_Polygon_Range_Blending);
    }

    /// Set field <a href="../drm/classes/Polygon.htm#polygon_flags_Footprint">polygon_flags_Footprint</a>
    void set_polygon_flags_Footprint( SE_Integer_Unsigned Footprint )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Polygon, polygon_flags.member.Footprint, Footprint);
    }

    /// Set field <a href="../drm/classes/Polygon.htm#polygon_flags_Hat_Test">polygon_flags_Hat_Test</a>
    void set_polygon_flags_Hat_Test( SE_Integer_Unsigned Hat_Test )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Polygon, polygon_flags.member.Hat_Test, Hat_Test);
    }

    /// Set field <a href="../drm/classes/Polygon.htm#polygon_flags_Inactive">polygon_flags_Inactive</a>
    void set_polygon_flags_Inactive( SE_Integer_Unsigned Inactive )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Polygon, polygon_flags.member.Inactive, Inactive);
    }

    /// Set field <a href="../drm/classes/Polygon.htm#polygon_flags_Invisible">polygon_flags_Invisible</a>
    void set_polygon_flags_Invisible( SE_Integer_Unsigned Invisible )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Polygon, polygon_flags.member.Invisible, Invisible);
    }

    /// Set field <a href="../drm/classes/Polygon.htm#polygon_flags_Laser_Range_Finding">polygon_flags_Laser_Range_Finding</a>
    void set_polygon_flags_Laser_Range_Finding( SE_Integer_Unsigned Laser_Range_Finding )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Polygon, polygon_flags.member.Laser_Range_Finding, Laser_Range_Finding);
    }

    /// Set field <a href="../drm/classes/Polygon.htm#polygon_flags_Moon_Reflection">polygon_flags_Moon_Reflection</a>
    void set_polygon_flags_Moon_Reflection( SE_Integer_Unsigned Moon_Reflection )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Polygon, polygon_flags.member.Moon_Reflection, Moon_Reflection);
    }

    /// Set field <a href="../drm/classes/Polygon.htm#polygon_flags_Opaque_Top">polygon_flags_Opaque_Top</a>
    void set_polygon_flags_Opaque_Top( SE_Integer_Unsigned Opaque_Top )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Polygon, polygon_flags.member.Opaque_Top, Opaque_Top);
    }

    /// Set field <a href="../drm/classes/Polygon.htm#polygon_flags_Projectile_Collidible">polygon_flags_Projectile_Collidible</a>
    void set_polygon_flags_Projectile_Collidible( SE_Integer_Unsigned Projectile_Collidible )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Polygon, polygon_flags.member.Projectile_Collidible, Projectile_Collidible);
    }

    /// Set field <a href="../drm/classes/Polygon.htm#polygon_flags_Raised">polygon_flags_Raised</a>
    void set_polygon_flags_Raised( SE_Integer_Unsigned Raised )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Polygon, polygon_flags.member.Raised, Raised);
    }

    /// Set field <a href="../drm/classes/Polygon.htm#polygon_flags_Reflective">polygon_flags_Reflective</a>
    void set_polygon_flags_Reflective( SE_Integer_Unsigned Reflective )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Polygon, polygon_flags.member.Reflective, Reflective);
    }

    /// Set field <a href="../drm/classes/Polygon.htm#polygon_flags_Shadow">polygon_flags_Shadow</a>
    void set_polygon_flags_Shadow( SE_Integer_Unsigned Shadow )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Polygon, polygon_flags.member.Shadow, Shadow);
    }

    /// Set field <a href="../drm/classes/Polygon.htm#polygon_flags_Sun_Illuminated">polygon_flags_Sun_Illuminated</a>
    void set_polygon_flags_Sun_Illuminated( SE_Integer_Unsigned Sun_Illuminated )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Polygon, polygon_flags.member.Sun_Illuminated, Sun_Illuminated);
    }

    /// Set field <a href="../drm/classes/Polygon.htm#polygon_flags_Terrain">polygon_flags_Terrain</a>
    void set_polygon_flags_Terrain( SE_Integer_Unsigned Terrain )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Polygon, polygon_flags.member.Terrain, Terrain);
    }

    /// Set field <a href="../drm/classes/Polygon.htm#polygon_flags_Visible_Floor">polygon_flags_Visible_Floor</a>
    void set_polygon_flags_Visible_Floor( SE_Integer_Unsigned Visible_Floor )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Polygon, polygon_flags.member.Visible_Floor, Visible_Floor);
    }

    /// Set field <a href="../drm/classes/Polygon.htm#polygon_flags_Visible_Interior">polygon_flags_Visible_Interior</a>
    void set_polygon_flags_Visible_Interior( SE_Integer_Unsigned Visible_Interior )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Polygon, polygon_flags.member.Visible_Interior, Visible_Interior);
    }

    /// Set field <a href="../drm/classes/Polygon.htm#polygon_flags_Visible_Perimeter">polygon_flags_Visible_Perimeter</a>
    void set_polygon_flags_Visible_Perimeter( SE_Integer_Unsigned Visible_Perimeter )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Polygon, polygon_flags.member.Visible_Perimeter, Visible_Perimeter);
    }

    /// Set field <a href="../drm/classes/Polygon.htm#polygon_flags_Waterbody_Surface">polygon_flags_Waterbody_Surface</a>
    void set_polygon_flags_Waterbody_Surface( SE_Integer_Unsigned Waterbody_Surface )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Polygon, polygon_flags.member.Waterbody_Surface, Waterbody_Surface);
    }

    /** Gets the DRM class type this object can reference (mostly internal use).
        @warning Don't confuse with getDRMClass(), which is dependent on the
            actual type held by this DRM class object reference.
        @return SE_CLS_DRM_POLYGON
    */
    virtual SE_DRM_Class getClassType() const
    {
        return SE_CLS_DRM_POLYGON;
    }

};

} // namespace sedris

#endif // _seDRMPolygon_h