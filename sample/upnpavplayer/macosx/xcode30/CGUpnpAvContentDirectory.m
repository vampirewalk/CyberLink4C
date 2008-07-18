//
//  CGUpnpAvContentDirectory.m
//  CyberLink for C
//
//  Created by Satoshi Konno on 08/07/02.
//  Copyright 2008 Satoshi Konno. All rights reserved.
//

#import <CGUpnpAvContentDirectory.h>

@implementation CGUpnpAvContentDirectory

- (id)init
{
	if ((self = [super init]) == nil)
		return nil;
	contentMgr = [[CGUpnpAvContentManager alloc] init];
	return self;
}

- (void)dealloc
{
	[contentMgr release];
	[super dealloc];
}

- (void)finalize
{
	[contentMgr release];
	[super finalize];
}

- (CGUpnpAvObject *)objectForTitlePath:(NSString *)titlePath
{
	return [contentMgr objectForTitlePath:titlePath];
}

@end
