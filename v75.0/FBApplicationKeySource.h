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

@interface FBApplicationKeySource : FBValueObject <NSCopying> {

	NSString* _loginSecret;
	NSString* _appGroup;
	NSString* _publicAppName;
	NSString* _pushTransmitterID;

}

@property (nonatomic,copy,readonly) NSString * loginSecret;                    //@synthesize loginSecret=_loginSecret - In the implementation block
@property (nonatomic,copy,readonly) NSString * appGroup;                       //@synthesize appGroup=_appGroup - In the implementation block
@property (nonatomic,copy,readonly) NSString * publicAppName;                  //@synthesize publicAppName=_publicAppName - In the implementation block
@property (nonatomic,copy,readonly) NSString * pushTransmitterID;              //@synthesize pushTransmitterID=_pushTransmitterID - In the implementation block
-(NSString *)appGroup;
-(NSString *)loginSecret;
-(NSString *)publicAppName;
-(id)initWithLoginSecret:(id)arg1 appGroup:(id)arg2 publicAppName:(id)arg3 pushTransmitterID:(id)arg4 ;
-(NSString *)pushTransmitterID;
@end
