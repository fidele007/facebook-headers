/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:03 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSDictionary;

@interface FBAppExtensionPublisherAnalyticsEventData : FBValueObject <NSCopying, NSCoding> {

	NSString* _eventName;
	NSString* _module;
	NSString* _UUID;
	NSDictionary* _extra;

}

@property (nonatomic,copy,readonly) NSString * eventName;              //@synthesize eventName=_eventName - In the implementation block
@property (nonatomic,copy,readonly) NSString * module;                 //@synthesize module=_module - In the implementation block
@property (nonatomic,copy,readonly) NSString * UUID;                   //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * extra;              //@synthesize extra=_extra - In the implementation block
-(NSString *)module;
-(NSDictionary *)extra;
-(id)initWithEventName:(id)arg1 module:(id)arg2 UUID:(id)arg3 extra:(id)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)UUID;
-(NSString *)eventName;
@end

