/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:59 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface FBAppState : FBValueObject <NSCopying, NSCoding> {

	long long _applicationTerminationState;
	NSString* _applicationTerminationLastNotification;

}

@property (nonatomic,readonly) long long applicationTerminationState;                               //@synthesize applicationTerminationState=_applicationTerminationState - In the implementation block
@property (nonatomic,copy,readonly) NSString * applicationTerminationLastNotification;              //@synthesize applicationTerminationLastNotification=_applicationTerminationLastNotification - In the implementation block
-(id)initWithApplicationTerminationState:(long long)arg1 applicationTerminationLastNotification:(id)arg2 ;
-(long long)applicationTerminationState;
-(NSString *)applicationTerminationLastNotification;
@end

