/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FBPaymentsImage;

@interface FBPaymentsActor : FBValueObject <NSCopying> {

	NSString* _FBID;
	NSString* _shortName;
	NSString* _name;
	FBPaymentsImage* _profileImage;

}

@property (nonatomic,copy,readonly) NSString * FBID;                             //@synthesize FBID=_FBID - In the implementation block
@property (nonatomic,copy,readonly) NSString * shortName;                        //@synthesize shortName=_shortName - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                             //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) FBPaymentsImage * profileImage;              //@synthesize profileImage=_profileImage - In the implementation block
-(NSString *)FBID;
-(id)initWithFBID:(id)arg1 shortName:(id)arg2 name:(id)arg3 profileImage:(id)arg4 ;
-(NSString *)name;
-(FBPaymentsImage *)profileImage;
-(NSString *)shortName;
@end

