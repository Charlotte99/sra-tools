/*===========================================================================
*
*                            PUBLIC DOMAIN NOTICE
*               National Center for Biotechnology Information
*
*  This software/database is a "United States Government Work" under the
*  terms of the United States Copyright Act.  It was written as part of
*  the author's official duties as a United States Government employee and
*  thus cannot be copyrighted.  This software/database is freely available
*  to the public for use. The National Library of Medicine and the U.S.
*  Government have not placed any restriction on its use or reproduction.
*
*  Although all reasonable efforts have been taken to ensure the accuracy
*  and reliability of the software and data, the NLM and the U.S.
*  Government do not and cannot warrant the performance or results that
*  may be obtained by using this software or data. The NLM and the U.S.
*  Government disclaim all warranties, express or implied, including
*  warranties of performance, merchantability or fitness for any particular
*  purpose.
*
*  Please cite the author in any work or product based on this material.
*
* ===========================================================================
*
*/

#ifndef _h_util_test_sra_priv_
#define _h_util_test_sra_priv_

#ifndef _h_klib_defs_
#include <klib/defs.h> /* rc_t */
#endif

#ifdef __cplusplus
extern "C" {
#endif


struct KEndPoint;
struct KNSManager;


rc_t endpoint_to_string ( char * buffer, size_t buflen, struct KEndPoint * ep );

rc_t MainQuickCheck ( const struct KNSManager * mgr );

rc_t PrintOS(bool xml);


#ifdef __cplusplus
}
#endif

#endif /*  _h_util_test_sra_priv_ */
