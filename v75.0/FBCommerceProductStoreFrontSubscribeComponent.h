/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKCompositeComponent.h>

@class FBCommerceProductContext, FBMemCommerceMerchantSettings;

@interface FBCommerceProductStoreFrontSubscribeComponent : CKCompositeComponent {

	FBCommerceProductContext* _context;
	FBMemCommerceMerchantSettings* _settings;

}

@property (nonatomic,readonly) FBCommerceProductContext * context;                  //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) FBMemCommerceMerchantSettings * settings;              //@synthesize settings=_settings - In the implementation block
+(id)newWithSection:(id)arg1 context:(id)arg2 ;
-(FBMemCommerceMerchantSettings *)settings;
-(FBCommerceProductContext *)context;
-(void)setSettings:(FBMemCommerceMerchantSettings *)arg1 ;
@end

