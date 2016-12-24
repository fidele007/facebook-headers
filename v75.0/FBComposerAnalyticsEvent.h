/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:45 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary;

@interface FBComposerAnalyticsEvent : FBValueObject <NSCopying> {

	NSString* _name;
	NSString* _module;
	NSDictionary* _extra;

}

@property (nonatomic,copy,readonly) NSString * name;                   //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * module;                 //@synthesize module=_module - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * extra;              //@synthesize extra=_extra - In the implementation block
-(NSString *)module;
-(NSDictionary *)extra;
-(id)initWithName:(id)arg1 module:(id)arg2 extra:(id)arg3 ;
-(NSString *)name;
@end

