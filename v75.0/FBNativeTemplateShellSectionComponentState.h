/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBNativeTemplateContext, FBNativeTemplateListConfiguration, NSString;

@interface FBNativeTemplateShellSectionComponentState : NSObject {

	FBNativeTemplateContext* _ntContext;
	FBNativeTemplateListConfiguration* _configuration;
	NSString* _childIdentifier;

}

@property (nonatomic,readonly) FBNativeTemplateContext * ntContext;                            //@synthesize ntContext=_ntContext - In the implementation block
@property (nonatomic,readonly) FBNativeTemplateListConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,copy,readonly) NSString * childIdentifier;                                //@synthesize childIdentifier=_childIdentifier - In the implementation block
+(id)newWithContext:(id)arg1 configuration:(id)arg2 childIdentifier:(id)arg3 ;
-(FBNativeTemplateContext *)ntContext;
-(NSString *)childIdentifier;
-(FBNativeTemplateListConfiguration *)configuration;
@end

