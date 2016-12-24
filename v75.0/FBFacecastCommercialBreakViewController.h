/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Facebook/FBFacecastCommercialBreakViewDelegate.h>
#import <Facebook/FBFacecastCommercialBreakConfirmationViewDelegate.h>

@protocol FBFacecastCommercialBreakViewControllerDelegate;
@class FBTimer, FBFacecastCommercialBreakSkywalkerPublisher, FBFacecastBroadcastManager, FBUserSession, NSString, FBFacecastCommercialBreakView;

@interface FBFacecastCommercialBreakViewController : UIViewController <FBFacecastCommercialBreakViewDelegate, FBFacecastCommercialBreakConfirmationViewDelegate> {

	unsigned long long _commercialBreakLengthMilliseconds;
	FBTimer* _countdownTimer;
	FBFacecastCommercialBreakSkywalkerPublisher* _skywalkerPublisher;
	FBFacecastBroadcastManager* _broadcastManager;
	FBUserSession* _session;
	NSString* _targetID;
	NSString* _videoID;
	int _timeLeftToNextBreak;
	id<FBFacecastCommercialBreakViewControllerDelegate> _delegate;
	unsigned long long _numberOfAdBreaks;

}

@property (nonatomic,retain) FBFacecastCommercialBreakView * view; 
@property (assign,nonatomic) unsigned long long numberOfAdBreaks;                                              //@synthesize numberOfAdBreaks=_numberOfAdBreaks - In the implementation block
@property (assign,nonatomic,__weak) id<FBFacecastCommercialBreakViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) FBFacecastCommercialBreakView * commercialBreakView; 
@property (getter=isCompressed,nonatomic,readonly) BOOL compressed; 
@property (assign,nonatomic) int timeLeftToNextBreak;                                                          //@synthesize timeLeftToNextBreak=_timeLeftToNextBreak - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setTimeLeftToNextBreak:(int)arg1 ;
-(int)timeLeftToNextBreak;
-(void)facecastCommercialBreakConfirmationViewDidTapConfirmButton:(id)arg1 ;
-(void)facecastCommercialBreakConfirmationViewDidTapCancelButton:(id)arg1 ;
-(BOOL)payoutEstimateFactorSmallerOrEqualToZero;
-(id)calculateEstimatePayout;
-(unsigned long long)_payoutEstimateLow;
-(unsigned long long)_payoutEstimateHigh;
-(void)_updateTimeLeftToNextBreak;
-(void)_updateResumeViewCount;
-(void)facecastCommercialBreakViewDidShowPopup:(id)arg1 ;
-(void)facecastCommercialBreakViewDidDismissPopup:(id)arg1 ;
-(id)initWithVideoID:(id)arg1 broadcastID:(id)arg2 targetID:(id)arg3 broadcastManager:(id)arg4 session:(id)arg5 ;
-(void)showConfirmationView;
-(void)showAlertViewWithType:(unsigned long long)arg1 ;
-(unsigned long long)numberOfAdBreaks;
-(void)setNumberOfAdBreaks:(unsigned long long)arg1 ;
-(FBFacecastCommercialBreakView *)commercialBreakView;
-(void)setDelegate:(id<FBFacecastCommercialBreakViewControllerDelegate>)arg1 ;
-(id<FBFacecastCommercialBreakViewControllerDelegate>)delegate;
-(void)loadView;
-(void)dismiss;
-(void)_invalidateTimer;
-(BOOL)isCompressed;
@end
