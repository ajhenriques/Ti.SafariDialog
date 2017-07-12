/**
 * Ti.Safaridialog
 *
 * Copyright (c) 2009-2015 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */

@interface TiSafaridialogModuleAssets : NSObject
{
}
- (NSData*) moduleAsset;
- (NSData*) resolveModuleAsset:(NSString*)path;

@end