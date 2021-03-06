/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBTransparentView.h>
#import <Facebook/FBCommentComposerBannerHosting.h>

@class UIView, FBUserSession, UIColor, FBComposerMentionsContainerView, FBCommentComposerView, FBComposerGIFPickerView, NSString;

@interface FBCommentComposerContainerView : FBTransparentView <FBCommentComposerBannerHosting> {

	FBUserSession* _session;
	UIColor* _mentionsBackgroundColor;
	unsigned long long _theme;
	UIView* _composerContainer;
	UIEdgeInsets _composerInsets;
	UIView* _composerDimmingView;
	UIView* _bannerDividerView;
	BOOL _useFloatingViewMentionsPicker;
	BOOL _isInGIFSearch;
	UIView* _bannerView;
	FBComposerMentionsContainerView* _mentionPickerContainerView;
	FBCommentComposerView* _composerView;
	FBComposerGIFPickerView* _gifPickerView;

}

@property (nonatomic,readonly) FBCommentComposerView * composerView;                                      //@synthesize composerView=_composerView - In the implementation block
@property (nonatomic,readonly) FBComposerGIFPickerView * gifPickerView;                                   //@synthesize gifPickerView=_gifPickerView - In the implementation block
@property (nonatomic,readonly) FBComposerMentionsContainerView * mentionPickerContainerView;              //@synthesize mentionPickerContainerView=_mentionPickerContainerView - In the implementation block
@property (assign,nonatomic) BOOL isInGIFSearch;                                                          //@synthesize isInGIFSearch=_isInGIFSearch - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIView * bannerView;                                                         //@synthesize bannerView=_bannerView - In the implementation block
-(FBCommentComposerView *)composerView;
-(FBComposerMentionsContainerView *)mentionPickerContainerView;
-(double)heightOfCommentComposerRegionWithWidth:(double)arg1 ;
-(id)initWithMentionsBackgroundColor:(id)arg1 theme:(unsigned long long)arg2 useFloatingViewMentionsPicker:(BOOL)arg3 shouldShowLikeButton:(BOOL)arg4 session:(id)arg5 ;
-(FBComposerGIFPickerView *)gifPickerView;
-(void)setIsInGIFSearch:(BOOL)arg1 ;
-(CGRect)_onScreenFrameForBannerView;
-(CGRect)_onScreenFrameForBannerDividerView;
-(CGRect)_offScreenFrameForBannerView;
-(CGRect)_offScreenFrameForBannerDividerView;
-(void)dimComposerViewAnimated:(BOOL)arg1 ;
-(void)undimComposerView;
-(BOOL)isInGIFSearch;
-(void)setFeedbackReactionKey:(long long)arg1 ;
-(void)layoutSubviews;
-(void)setBannerView:(UIView *)arg1 ;
-(UIView *)bannerView;
@end

