/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIButton.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol FBLiveViewerTipJarOptionButtonDelegate;
@class FBUserSession, UITapGestureRecognizer, UILabel, KFVector, KFVectorLayer, FBCommunicationSoundEffect, FBFacecastTipJarOption, NSString;

@interface FBLiveViewerTipJarOptionButton : UIButton <UIGestureRecognizerDelegate> {

	FBUserSession* _session;
	UITapGestureRecognizer* _tapGestureRecognizer;
	UILabel* _currencyLabel;
	UILabel* _amountLabel;
	KFVector* _vector;
	KFVector* _loopVector;
	KFVectorLayer* _vectorLayer;
	KFVectorLayer* _loopVectorLayer;
	FBCommunicationSoundEffect* _selectSound;
	id<FBLiveViewerTipJarOptionButtonDelegate> _delegate;
	FBFacecastTipJarOption* _option;

}

@property (assign,nonatomic,__weak) id<FBLiveViewerTipJarOptionButtonDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) FBFacecastTipJarOption * option;                                       //@synthesize option=_option - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 session:(id)arg2 option:(id)arg3 delegate:(id)arg4 ;
-(void)setSelectedOption:(id)arg1 animated:(BOOL)arg2 ;
-(void)_loadVectorAndSoundFromDisk;
-(void)_didTapOnTipJarOption:(id)arg1 ;
-(void)_setUpKeyframesAnimation;
-(void)setDelegate:(id<FBLiveViewerTipJarOptionButtonDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBLiveViewerTipJarOptionButtonDelegate>)delegate;
-(void)_stopAnimation;
-(FBFacecastTipJarOption *)option;
-(void)_startAnimation;
@end

