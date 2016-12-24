/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:42 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CALayerDelegate.h>
#import <Facebook/FBDisplayableMediaViewProvider.h>

@protocol FBScrollPositionModifyingController, FBVideoFromViewDelegate;
@class UIView, FBVideoViewManager, NSString;

@interface FBVideoPlayerFromMediaProvider : NSObject <CALayerDelegate, FBDisplayableMediaViewProvider> {

	BOOL _didAddVideoViewInfo;
	UIView* _viewToReturnVideoTo;
	unsigned long long _layerOrViewPosition;
	FBVideoViewManager* _videoViewManager;
	id<FBScrollPositionModifyingController> _containingScrollController;
	BOOL _needsDismissal;
	id<FBVideoFromViewDelegate> _fromViewDelegate;

}

@property (nonatomic,retain) FBVideoViewManager * videoViewManager;                            //@synthesize videoViewManager=_videoViewManager - In the implementation block
@property (assign,nonatomic,__weak) id<FBVideoFromViewDelegate> fromViewDelegate;              //@synthesize fromViewDelegate=_fromViewDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FBVideoViewManager *)videoViewManager;
-(void)setVideoViewManager:(FBVideoViewManager *)arg1 ;
-(void)setFromViewDelegate:(id<FBVideoFromViewDelegate>)arg1 ;
-(id)initWithVideoViewManager:(id)arg1 containingScrollController:(id)arg2 ;
-(id)needsMediaViewInfoForSourceInfo:(id)arg1 sender:(id)arg2 ;
-(void)didAddMediaViewInfo:(id)arg1 forMedia:(id)arg2 sender:(id)arg3 ;
-(void)didFinishAnimatingViewInfo:(id)arg1 forMedia:(id)arg2 sender:(id)arg3 ;
-(id<FBVideoFromViewDelegate>)fromViewDelegate;
-(void)willFinishAnimatingViewInfo:(id)arg1 forMedia:(id)arg2 sender:(id)arg3 ;
-(id)_findWindowForLayerOrView:(id)arg1 ;
@end

