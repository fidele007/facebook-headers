/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UIView, UILabel, NSString, FBUserSession, UIControl;

@interface FBVideoPlayerEndScreenCallToActionView : UIView {

	UIImageView* _replayImageView;
	UIView* _callToActionImageView;
	UILabel* _replayLabel;
	UILabel* _callToActionLabel;
	UILabel* _sourceLabel;
	NSString* _endScreenReplayString;
	NSString* _defaultImageName;
	FBUserSession* _session;
	UIControl* _replayControl;
	UIControl* _callToActionControl;
	double _callToActionImageScale;

}

@property (nonatomic,readonly) UIControl * replayControl;                    //@synthesize replayControl=_replayControl - In the implementation block
@property (nonatomic,readonly) UIControl * callToActionControl;              //@synthesize callToActionControl=_callToActionControl - In the implementation block
@property (assign,nonatomic) double callToActionImageScale;                  //@synthesize callToActionImageScale=_callToActionImageScale - In the implementation block
-(id)initWithFrame:(CGRect)arg1 session:(id)arg2 ;
-(void)setCallToActionTitle:(id)arg1 andSource:(id)arg2 andDefaultImageName:(id)arg3 ;
-(void)setCallToActionImageWithURL:(id)arg1 ;
-(void)setCallToActionImageWithName:(id)arg1 ;
-(UIControl *)callToActionControl;
-(void)setCallToActionImageScale:(double)arg1 ;
-(UIControl *)replayControl;
-(void)setReplayLabelTitle:(id)arg1 ;
-(id)_makeAttributedCTAText:(id)arg1 isTitle:(BOOL)arg2 ;
-(double)_calculateMaxLabelWidth;
-(CGSize)_calculateCallToActionLabelSize;
-(CGSize)_calculateSourceLabelSize;
-(double)_calculateContainerWidth;
-(CGSize)_calculateReplayLabelSize;
-(double)_calculateTextMaxWidth;
-(void)_createCallToActionImageViewWithImageName:(id)arg1 ;
-(void)_createCallToActionImageViewWithImageURL:(id)arg1 ;
-(double)callToActionImageScale;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

