/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:00 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UIActivityIndicatorView;

@interface FBActivityIndicatorView : UIView {

	BOOL _animating;
	BOOL _scheduledStartAnimating;
	UIActivityIndicatorView* _activityIndicatorView;
	BOOL _startDelayed;

}

@property (assign,nonatomic) long long activityIndicatorViewStyle; 
@property (assign,nonatomic) BOOL hidesWhenStopped; 
@property (assign,getter=isStartDelayed,nonatomic) BOOL startDelayed;              //@synthesize startDelayed=_startDelayed - In the implementation block
-(void)setStartDelayed:(BOOL)arg1 ;
-(void)_startAnimatingNow;
-(BOOL)isStartDelayed;
-(id)init;
-(void)layoutSubviews;
-(BOOL)isAnimating;
-(void)stopAnimating;
-(void)startAnimating;
-(long long)activityIndicatorViewStyle;
-(void)setActivityIndicatorViewStyle:(long long)arg1 ;
-(void)setHidesWhenStopped:(BOOL)arg1 ;
-(BOOL)hidesWhenStopped;
-(id)initWithActivityIndicatorStyle:(long long)arg1 ;
@end
