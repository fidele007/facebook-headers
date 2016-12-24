/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:44 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL;

@interface FBWebAppLink : FBValueObject <NSCopying> {

	BOOL _appInstalled;
	NSString* _appName;
	NSURL* _url;

}

@property (nonatomic,copy,readonly) NSString * appName;              //@synthesize appName=_appName - In the implementation block
@property (nonatomic,copy,readonly) NSURL * url;                     //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) BOOL appInstalled;                    //@synthesize appInstalled=_appInstalled - In the implementation block
-(id)initWithAppName:(id)arg1 url:(id)arg2 appInstalled:(BOOL)arg3 ;
-(NSURL *)url;
-(BOOL)appInstalled;
-(NSString *)appName;
@end
