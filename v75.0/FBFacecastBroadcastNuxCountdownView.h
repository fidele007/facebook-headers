/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@protocol FBFacecastBroadcastNuxCountdownViewDelegate;
@class FBFacecastCountdownView, FBTimer, NSString;

@interface FBFacecastBroadcastNuxCountdownView : UIView {

	FBFacecastCountdownView* _countdownView;
	FBTimer* _countdownTimer;
	id<FBFacecastBroadcastNuxCountdownViewDelegate> _delegate;
	NSString* _identifier;

}

@property (assign,nonatomic,__weak) id<FBFacecastBroadcastNuxCountdownViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                                          //@synthesize identifier=_identifier - In the implementation block
-(void)startCountdown;
-(void)_updateCountdown;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<FBFacecastBroadcastNuxCountdownViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<FBFacecastBroadcastNuxCountdownViewDelegate>)delegate;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
@end
