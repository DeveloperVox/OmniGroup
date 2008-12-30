// Copyright 2007 Omni Development, Inc.  All rights reserved.
//
// This software may only be used and reproduced according to the
// terms in the file OmniSourceLicense.html, which should be
// distributed with this project and can also be found at
// <http://www.omnigroup.com/developer/sourcecode/sourcelicense/>.
//
// $Id$

// This is linked by both OmniSoftwareUpdate and OmniCrashCatcher.
__private_extern__ BOOL OSURunTimeHasHandledApplicationTermination(void);
__private_extern__ void OSURunTimeApplicationStarted(void);
__private_extern__ void OSURunTimeApplicationTerminated(NSString *appIdentifier, NSString *bundleVersion, BOOL crashed);

__private_extern__ void OSURunTimeAddStatisticsToInfo(NSString *appIdentifier, NSMutableDictionary *info);