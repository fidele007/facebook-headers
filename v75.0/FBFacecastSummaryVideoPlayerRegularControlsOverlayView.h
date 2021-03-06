/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <Facebook/FBFacecastSummaryVideoPlayerOverlayView.h>

@protocol FBFacecastSummaryVideoPlayerActionProvider;
@class NSString;

@interface FBFacecastSummaryVideoPlayerRegularControlsOverlayView : UIView <FBFacecastSummaryVideoPlayerOverlayView> {

	id<FBFacecastSummaryVideoPlayerActionProvider> actionProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBFacecastSummaryVideoPlayerActionProvider> actionProvider; 
-(void)videoPlayerStateChanged:(id)arg1 ;
-(id<FBFacecastSummaryVideoPlayerActionProvider>)actionProvider;
-(void)setActionProvider:(id<FBFacecastSummaryVideoPlayerActionProvider>)arg1 ;
@end

