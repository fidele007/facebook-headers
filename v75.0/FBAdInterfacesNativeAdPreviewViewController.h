/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBAdInterfacesBaseEditViewController.h>

@protocol FBQueriedFeedUnitFieldsProtocol;
@class FBFeedToolbox, NSString, FBMemModelObject;

@interface FBAdInterfacesNativeAdPreviewViewController : FBAdInterfacesBaseEditViewController {

	FBFeedToolbox* _feedComponentToolbox;
	NSString* _instagramPermalink;
	BOOL _canShowInstagramPlacement;
	BOOL _isImageAutocroppedForInstagram;
	NSString* _tipText;
	FBMemModelObject*<FBQueriedFeedUnitFieldsProtocol> _feedUnit;

}

@property (nonatomic,copy) NSString * tipText;                                                         //@synthesize tipText=_tipText - In the implementation block
@property (nonatomic,retain) FBMemModelObject*<FBQueriedFeedUnitFieldsProtocol> feedUnit;              //@synthesize feedUnit=_feedUnit - In the implementation block
@property (assign,nonatomic) BOOL canShowInstagramPlacement;                                           //@synthesize canShowInstagramPlacement=_canShowInstagramPlacement - In the implementation block
@property (assign,nonatomic) BOOL isImageAutocroppedForInstagram;                                      //@synthesize isImageAutocroppedForInstagram=_isImageAutocroppedForInstagram - In the implementation block
+(id)componentWithModel:(id)arg1 context:(id)arg2 ;
+(SEL)openInstagramPreviewAction;
+(SEL)openInstagramPermalinkAction;
-(FBMemModelObject*<FBQueriedFeedUnitFieldsProtocol>)feedUnit;
-(id)feedComponentToolbox;
-(void)setTipText:(NSString *)arg1 ;
-(void)setFeedUnit:(FBMemModelObject*<FBQueriedFeedUnitFieldsProtocol>)arg1 ;
-(void)didTapBackButton;
-(BOOL)shouldShowFooter;
-(BOOL)canShowInstagramPlacement;
-(BOOL)isImageAutocroppedForInstagram;
-(void)setCanShowInstagramPlacement:(BOOL)arg1 ;
-(NSString *)tipText;
-(void)openInstagramPreview:(id)arg1 ;
-(void)openInstagramPermalink:(id)arg1 ;
-(id)initWithTipText:(id)arg1 adPreviewFeedUnit:(id)arg2 logger:(id)arg3 promotionActionType:(unsigned long long)arg4 instagramPermalink:(id)arg5 canShowInstagramPlacement:(BOOL)arg6 isImageAutocroppedForInstagram:(BOOL)arg7 session:(id)arg8 ;
-(void)setIsImageAutocroppedForInstagram:(BOOL)arg1 ;
-(unsigned long long)sectionCount;
-(BOOL)shouldShowDoneButton;
@end

