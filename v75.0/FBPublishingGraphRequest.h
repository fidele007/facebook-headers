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

@interface FBPublishingGraphRequest : FBValueObject <NSCopying> {

	NSString* _path;
	NSDictionary* _parameters;
	NSString* _requestName;
	NSString* _overrideActorFBID;

}

@property (nonatomic,copy,readonly) NSString * path;                           //@synthesize path=_path - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * parameters;                 //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,copy,readonly) NSString * requestName;                    //@synthesize requestName=_requestName - In the implementation block
@property (nonatomic,copy,readonly) NSString * overrideActorFBID;              //@synthesize overrideActorFBID=_overrideActorFBID - In the implementation block
-(id)initWithPath:(id)arg1 parameters:(id)arg2 requestName:(id)arg3 overrideActorFBID:(id)arg4 ;
-(NSString *)overrideActorFBID;
-(NSString *)path;
-(NSDictionary *)parameters;
-(NSString *)requestName;
@end

