/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, FBNativeTemplateListResolvableWriteProxy;

@interface FBNativeTemplateListConfiguration : NSObject {

	NSString* _surface;
	FBNativeTemplateListResolvableWriteProxy* _resolvableProxy;

}

@property (nonatomic,copy,readonly) NSString * surface;                                                 //@synthesize surface=_surface - In the implementation block
@property (nonatomic,readonly) FBNativeTemplateListResolvableWriteProxy * resolvableProxy;              //@synthesize resolvableProxy=_resolvableProxy - In the implementation block
+(id)newConfigurationForSurface:(id)arg1 ;
-(FBNativeTemplateListResolvableWriteProxy *)resolvableProxy;
-(NSString *)surface;
@end

