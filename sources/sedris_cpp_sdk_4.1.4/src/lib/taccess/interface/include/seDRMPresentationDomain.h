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

/** @file seDRMPresentationDomain.h
@author Warren Macchi (Accent Geographic)
@brief Accessors to the seDRMPresentationDomain (186) class.
*/

#ifndef _seDRMPresentationDomain_h
#define _seDRMPresentationDomain_h

#include "seDRMBase.h"

namespace sedris {

/** seDRMPresentationDomain wraps the DRM <a href="../drm/classes/PresentationDomain.htm">&lt;Presentation_Domain&gt;</a> class.
@author Warren Macchi
@version Revision: 1.8
@see seDRMBase
*/
class seDRMPresentationDomain : public seDRMBase
{
public:

    /// Default constructor
    seDRMPresentationDomain() {}

    /// Constructor for seDRM... class conversions
    seDRMPresentationDomain( const seObject &other ) : seDRMBase(other) {}

    /// Get field <a href="../drm/classes/PresentationDomain.htm#presentation_domain">presentation_domain</a>
    SE_Presentation_Domain get_presentation_domain()
    {
        DRMBASE_RET_FIELDS(Presentation_Domain, presentation_domain);
    }

    /// Set field <a href="../drm/classes/PresentationDomain.htm#presentation_domain">presentation_domain</a>
    void set_presentation_domain( SE_Presentation_Domain presentation_domain )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Presentation_Domain, presentation_domain, presentation_domain);
    }

    /// Set field <a href="../drm/classes/PresentationDomain.htm#presentation_domain_OTW">presentation_domain_OTW</a>
    void set_presentation_domain_OTW( SE_Integer_Unsigned OTW )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Presentation_Domain, presentation_domain.member.OTW, OTW);
    }

    /// Set field <a href="../drm/classes/PresentationDomain.htm#presentation_domain_IR_Hi_Band">presentation_domain_IR_Hi_Band</a>
    void set_presentation_domain_IR_Hi_Band( SE_Integer_Unsigned IR_Hi_Band )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Presentation_Domain, presentation_domain.member.IR_Hi_Band, IR_Hi_Band);
    }

    /// Set field <a href="../drm/classes/PresentationDomain.htm#presentation_domain_IR_Low_Band">presentation_domain_IR_Low_Band</a>
    void set_presentation_domain_IR_Low_Band( SE_Integer_Unsigned IR_Low_Band )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Presentation_Domain, presentation_domain.member.IR_Low_Band, IR_Low_Band);
    }

    /// Set field <a href="../drm/classes/PresentationDomain.htm#presentation_domain_NVG">presentation_domain_NVG</a>
    void set_presentation_domain_NVG( SE_Integer_Unsigned NVG )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Presentation_Domain, presentation_domain.member.NVG, NVG);
    }

    /// Set field <a href="../drm/classes/PresentationDomain.htm#presentation_domain_Day_TV_Colour">presentation_domain_Day_TV_Colour</a>
    void set_presentation_domain_Day_TV_Colour( SE_Integer_Unsigned Day_TV_Colour )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Presentation_Domain, presentation_domain.member.Day_TV_Colour, Day_TV_Colour);
    }

    /// Set field <a href="../drm/classes/PresentationDomain.htm#presentation_domain_Day_TV_BW">presentation_domain_Day_TV_BW</a>
    void set_presentation_domain_Day_TV_BW( SE_Integer_Unsigned Day_TV_BW )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Presentation_Domain, presentation_domain.member.Day_TV_BW, Day_TV_BW);
    }

    /// Set field <a href="../drm/classes/PresentationDomain.htm#presentation_domain_Radar">presentation_domain_Radar</a>
    void set_presentation_domain_Radar( SE_Integer_Unsigned Radar )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Presentation_Domain, presentation_domain.member.Radar, Radar);
    }

    /// Set field <a href="../drm/classes/PresentationDomain.htm#presentation_domain_SAR">presentation_domain_SAR</a>
    void set_presentation_domain_SAR( SE_Integer_Unsigned SAR )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Presentation_Domain, presentation_domain.member.SAR, SAR);
    }

    /// Set field <a href="../drm/classes/PresentationDomain.htm#presentation_domain_Thermal">presentation_domain_Thermal</a>
    void set_presentation_domain_Thermal( SE_Integer_Unsigned Thermal )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Presentation_Domain, presentation_domain.member.Thermal, Thermal);
    }

    /// Set field <a href="../drm/classes/PresentationDomain.htm#presentation_domain_Low_Light_TV">presentation_domain_Low_Light_TV</a>
    void set_presentation_domain_Low_Light_TV( SE_Integer_Unsigned Low_Light_TV )
    {
        DRMBASE_ALLOC_FIELDS;
        DRMBASE_SET_FIELDS(Presentation_Domain, presentation_domain.member.Low_Light_TV, Low_Light_TV);
    }

    /** Gets the DRM class type this object can reference (mostly internal use).
        @warning Don't confuse with getDRMClass(), which is dependent on the
            actual type held by this DRM class object reference.
        @return SE_CLS_DRM_PRESENTATION_DOMAIN
    */
    virtual SE_DRM_Class getClassType() const
    {
        return SE_CLS_DRM_PRESENTATION_DOMAIN;
    }

};

} // namespace sedris

#endif // _seDRMPresentationDomain_h
