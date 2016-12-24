/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBMegaphoneLogging.h>
#import <Facebook/FBMegaphoneProtocol.h>

@class FBQPPromotion, FBMemMegaphone, FBMemMegaphoneAction;

@interface FBQuickPromotionMegaphone : NSObject <FBMegaphoneLogging, FBMegaphoneProtocol> {

	BOOL _supportsXOut;
	FBQPPromotion* _promotion;
	FBMemMegaphone* _megaphone;
	FBMemMegaphoneAction* _secondaryAction;

}

@property (nonatomic,retain) FBMemMegaphone * megaphone;                          //@synthesize megaphone=_megaphone - In the implementation block
@property (nonatomic,retain) FBQPPromotion * promotion;                           //@synthesize promotion=_promotion - In the implementation block
@property (nonatomic,retain) FBMemMegaphoneAction * secondaryAction;              //@synthesize secondaryAction=_secondaryAction - In the implementation block
@property (assign,nonatomic) BOOL supportsXOut;                                   //@synthesize supportsXOut=_supportsXOut - In the implementation block
+(id)graphQLTypeName;
-(id)socialContext;
-(id)cacheId;
-(id)surveySession;
-(FBQPPromotion *)promotion;
-(FBMemMegaphoneAction *)secondaryAction;
-(void)setPromotion:(FBQPPromotion *)arg1 ;
-(void)setSecondaryAction:(FBMemMegaphoneAction *)arg1 ;
-(FBMemMegaphone *)megaphone;
-(void)setMegaphone:(FBMemMegaphone *)arg1 ;
-(void)logEvent:(id)arg1 session:(id)arg2 ;
-(id)uiVersion;
-(BOOL)isQuickPromotion;
-(BOOL)supportsXOut;
-(id)closeLabel;
-(BOOL)isPersistentValue;
-(void)setSupportsXOut:(BOOL)arg1 ;
-(id)action;
-(id)title;
-(id)image;
-(CGSize)imageSize;
-(id)content;
-(id)location;
-(id)isPersistent;
-(id)tracking;
@end

