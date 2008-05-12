//
//  CGUpnpService.m
//  CyberLink for C
//
//  Created by Satoshi Konno on 08/05/12.
//  Copyright 2008 Satoshi Konno. All rights reserved.
//

#include <cybergarage/upnp/cservice.h>

#import <CyberGarage/UPnP/CGUpnpService.h>

@implementation CGUpnpService

- (id) init
{
	if ((self = [super init]) == nil)
		return nil;
	return self;
}

- (void) finalize
{
	[super finalize];
}

- (CgUpnpService *)cObject
{
	return _cObject;
}

- (void)setCObject:(CgUpnpService *)object
{
	_cObject = object;
}

- (NSString *)serviceType
{
	if (!_cObject)
		return nil;
	return [[NSString alloc] initWithUTF8String:cg_upnp_service_getservicetype(_cObject)];
}

@end
