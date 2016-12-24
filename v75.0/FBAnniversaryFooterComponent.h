/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>

@protocol FBIntentHandler;
@class FBLabelTextComponent, CKComponent, CKButtonComponent, FBAnalyticsInfo, FBMemGoodwillAnniversaryCampaignFeedUnit;

@interface FBAnniversaryFooterComponent : CKCompositeComponent {

	FBLabelTextComponent* _sharedText;
	CKComponent* _checkmark;
	CKButtonComponent* _button;
	FBAnalyticsInfo* _analyticsInfo;
	id<FBIntentHandler> _intentHandler;
	FBMemGoodwillAnniversaryCampaignFeedUnit* _unit;

}

@property (nonatomic,retain) FBLabelTextComponent * sharedText;                            //@synthesize sharedText=_sharedText - In the implementation block
@property (nonatomic,retain) CKComponent * checkmark;                                      //@synthesize checkmark=_checkmark - In the implementation block
@property (nonatomic,retain) CKButtonComponent * button;                                   //@synthesize button=_button - In the implementation block
@property (nonatomic,retain) FBAnalyticsInfo * analyticsInfo;                              //@synthesize analyticsInfo=_analyticsInfo - In the implementation block
@property (nonatomic,retain) id<FBIntentHandler> intentHandler;                            //@synthesize intentHandler=_intentHandler - In the implementation block
@property (nonatomic,retain) FBMemGoodwillAnniversaryCampaignFeedUnit * unit;              //@synthesize unit=_unit - In the implementation block
+(id)newWithUnit:(id)arg1 toolbox:(id)arg2 ;
-(id<FBIntentHandler>)intentHandler;
-(void)setIntentHandler:(id<FBIntentHandler>)arg1 ;
-(vector<CKComponentAnimation, std::__1::allocator<CKComponentAnimation> >*)animationsFromPreviousComponent:(id)arg1 ;
-(FBAnalyticsInfo *)analyticsInfo;
-(void)setAnalyticsInfo:(FBAnalyticsInfo *)arg1 ;
-(void)tappedShare:(id)arg1 ;
-(FBLabelTextComponent *)sharedText;
-(void)setSharedText:(FBLabelTextComponent *)arg1 ;
-(CKButtonComponent *)button;
-(void)setButton:(CKButtonComponent *)arg1 ;
-(CKComponent *)checkmark;
-(void)setCheckmark:(CKComponent *)arg1 ;
-(FBMemGoodwillAnniversaryCampaignFeedUnit *)unit;
-(void)setUnit:(FBMemGoodwillAnniversaryCampaignFeedUnit *)arg1 ;
@end
