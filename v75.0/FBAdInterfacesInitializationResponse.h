/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBAdInterfacesPromotion, FBAdInterfacesAdminInfo, NSDictionary;

@interface FBAdInterfacesInitializationResponse : FBValueObject <NSCopying> {

	FBAdInterfacesPromotion* _promotion;
	FBAdInterfacesAdminInfo* _adminInfo;
	NSDictionary* _extraData;

}

@property (nonatomic,copy,readonly) FBAdInterfacesPromotion * promotion;              //@synthesize promotion=_promotion - In the implementation block
@property (nonatomic,copy,readonly) FBAdInterfacesAdminInfo * adminInfo;              //@synthesize adminInfo=_adminInfo - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * extraData;                         //@synthesize extraData=_extraData - In the implementation block
-(FBAdInterfacesAdminInfo *)adminInfo;
-(FBAdInterfacesPromotion *)promotion;
-(id)initWithPromotion:(id)arg1 adminInfo:(id)arg2 extraData:(id)arg3 ;
-(NSDictionary *)extraData;
@end

