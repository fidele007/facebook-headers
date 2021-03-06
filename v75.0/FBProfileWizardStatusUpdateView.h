/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBProfileWizardView.h>

@protocol FBProfileWizardStatusUpdateViewDelegate;
@class FBUserSession, FBProfileWizardStatusUpdateContentView, FBFeedInlineComposerController, UIView;

@interface FBProfileWizardStatusUpdateView : FBProfileWizardView {

	FBUserSession* _session;
	FBProfileWizardStatusUpdateContentView* _contentView;
	FBFeedInlineComposerController* _feedInlineComposerController;
	UIView* _composerView;
	BOOL _appearanceHasAnimated;
	id<FBProfileWizardStatusUpdateViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBProfileWizardStatusUpdateViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)animatingAppearance;
-(void)animatingDisppearance;
-(void)_animatingTitleAndSubtitleViewDisappearance;
-(void)_animatingComposerViewAppearance;
-(id)initWithWizardModel:(id)arg1 currentStepIndex:(unsigned long long)arg2 session:(id)arg3 feedInlineComposerController:(id)arg4 ;
-(void)setDelegate:(id<FBProfileWizardStatusUpdateViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<FBProfileWizardStatusUpdateViewDelegate>)delegate;
@end

