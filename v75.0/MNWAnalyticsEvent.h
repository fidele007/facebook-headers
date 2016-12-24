/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:01 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSDictionary;

@interface MNWAnalyticsEvent : FBValueObject <NSCopying, NSCoding> {

	NSString* _userFBID;
	NSString* _eventName;
	NSDictionary* _extra;
	double _timeIntervalSince1970;

}

@property (nonatomic,copy,readonly) NSString * userFBID;                  //@synthesize userFBID=_userFBID - In the implementation block
@property (nonatomic,copy,readonly) NSString * eventName;                 //@synthesize eventName=_eventName - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * extra;                 //@synthesize extra=_extra - In the implementation block
@property (nonatomic,readonly) double timeIntervalSince1970;              //@synthesize timeIntervalSince1970=_timeIntervalSince1970 - In the implementation block
-(NSDictionary *)extra;
-(NSString *)userFBID;
-(id)initWithUserFBID:(id)arg1 eventName:(id)arg2 extra:(id)arg3 timeIntervalSince1970:(double)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(double)timeIntervalSince1970;
-(NSString *)eventName;
@end
