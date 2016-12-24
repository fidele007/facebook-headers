/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:03 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MNKeysConfiguration : FBValueObject <NSCopying> {

	NSString* _loginSecret;
	NSString* _appGroup;

}

@property (nonatomic,copy,readonly) NSString * loginSecret;              //@synthesize loginSecret=_loginSecret - In the implementation block
@property (nonatomic,copy,readonly) NSString * appGroup;                 //@synthesize appGroup=_appGroup - In the implementation block
-(NSString *)appGroup;
-(NSString *)loginSecret;
-(id)initWithLoginSecret:(id)arg1 appGroup:(id)arg2 ;
@end

