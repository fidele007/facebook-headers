/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMemMessengerPlatformAttributionForGraphQL, FBMemMessengerPlatformMedia;

@interface FBCombinedMessengerPlatformMedia : FBValueObject <NSCopying> {

	FBMemMessengerPlatformAttributionForGraphQL* _appInfo;
	FBMemMessengerPlatformMedia* _preview;
	FBMemMessengerPlatformMedia* _full;

}

@property (nonatomic,copy,readonly) FBMemMessengerPlatformAttributionForGraphQL * appInfo;              //@synthesize appInfo=_appInfo - In the implementation block
@property (nonatomic,copy,readonly) FBMemMessengerPlatformMedia * preview;                              //@synthesize preview=_preview - In the implementation block
@property (nonatomic,copy,readonly) FBMemMessengerPlatformMedia * full;                                 //@synthesize full=_full - In the implementation block
-(id)initWithAppInfo:(id)arg1 preview:(id)arg2 full:(id)arg3 ;
-(FBMemMessengerPlatformMedia *)full;
-(FBMemMessengerPlatformAttributionForGraphQL *)appInfo;
-(FBMemMessengerPlatformMedia *)preview;
@end

