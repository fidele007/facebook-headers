/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBCustomizablePullToRefreshContentPresenter.h>

@protocol FBPullToRefreshContentViewProtocol;
@class KFVectorLayer, UIView, NSString;

@interface FBKeyframesAnimationCustomizedContentPresenter : NSObject <FBCustomizablePullToRefreshContentPresenter> {

	KFVectorLayer* _stretchLayer;
	KFVectorLayer* _connectorLayer;
	KFVectorLayer* _loopLayer;
	long long _uiState;
	UIView*<FBPullToRefreshContentViewProtocol> _view;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long uiState;                                                    //@synthesize uiState=_uiState - In the implementation block
@property (assign,nonatomic,__weak) UIView*<FBPullToRefreshContentViewProtocol> view;              //@synthesize view=_view - In the implementation block
-(void)setupAnimationsFromKeyframes:(id)arg1 ;
-(void)presentInBounds:(CGRect)arg1 ;
-(long long)uiState;
-(double)thresholdHiddenToInitiating;
-(double)thresholdRefreshingHasCompletedToHidden;
-(void)updateInitiatingStateWithScrolledAmount:(double)arg1 ;
-(void)_clearLayer;
-(void)setUiState:(long long)arg1 ;
-(UIView*<FBPullToRefreshContentViewProtocol>)view;
-(void)setView:(UIView*<FBPullToRefreshContentViewProtocol>)arg1 ;
-(void)setState:(long long)arg1 animated:(BOOL)arg2 ;
@end

