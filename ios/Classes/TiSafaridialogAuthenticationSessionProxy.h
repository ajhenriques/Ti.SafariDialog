/**
 * Ti.Safaridialog
 *
 * Copyright (c) 2009-2015 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */

#if IS_IOS_11

#import "TiProxy.h"
#import <SafariServices/SafariServices.h>

@interface TiSafaridialogAuthenticationSessionProxy : TiProxy {
  SFAuthenticationSession *_authSession;
}

#pragma mark Public API's

- (void)start:(id)unused;

- (void)cancel:(id)unused;

- (NSNumber *)isSupported:(id)unused;

@end

#endif

