/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate;

@interface MNPresence : FBValueObject <NSCopying> {

	NSString* _personId;
	NSDate* _lastActiveTime;
	unsigned long long _presenceState;
	unsigned long long _voipCapabilities;

}

@property (nonatomic,copy,readonly) NSString * personId;                         //@synthesize personId=_personId - In the implementation block
@property (nonatomic,copy,readonly) NSDate * lastActiveTime;                     //@synthesize lastActiveTime=_lastActiveTime - In the implementation block
@property (nonatomic,readonly) unsigned long long presenceState;                 //@synthesize presenceState=_presenceState - In the implementation block
@property (nonatomic,readonly) unsigned long long voipCapabilities;              //@synthesize voipCapabilities=_voipCapabilities - In the implementation block
-(unsigned long long)voipCapabilities;
-(id)initWithPersonId:(id)arg1 lastActiveTime:(id)arg2 presenceState:(unsigned long long)arg3 voipCapabilities:(unsigned long long)arg4 ;
-(NSDate *)lastActiveTime;
-(unsigned long long)presenceState;
-(NSString *)personId;
@end

