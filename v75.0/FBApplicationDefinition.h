/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:52 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBApplicationDefinition : FBValueObject <NSCopying> {

	NSString* _FBID;
	NSString* _secret;

}

@property (nonatomic,copy,readonly) NSString * FBID;                //@synthesize FBID=_FBID - In the implementation block
@property (nonatomic,copy,readonly) NSString * secret;              //@synthesize secret=_secret - In the implementation block
-(NSString *)FBID;
-(id)initWithFBID:(id)arg1 secret:(id)arg2 ;
-(NSString *)secret;
@end

