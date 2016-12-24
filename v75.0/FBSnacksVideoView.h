/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <Facebook/CKComponentProvider.h>
#import <Facebook/CKComponentHostingViewDelegate.h>
#import <Facebook/FBSnacksVideoViewConfiguration.h>
#import <Facebook/FBVideoPlaybackEventListener.h>
#import <Facebook/FBAudioMuteControllerListener.h>
#import <Facebook/FBSnacksMediaView.h>
#import <Facebook/FBClonePhotoView.h>

@protocol FBSnacksMediaViewDelegate, FBDirectInboxMessageProtocol;
@class FBSnacksViewerToolbox, FBActivityIndicatorView, CKComponentHostingView, FBVideoPlaybackController, NSString;

@interface FBSnacksVideoView : UIView <CKComponentProvider, CKComponentHostingViewDelegate, FBSnacksVideoViewConfiguration, FBVideoPlaybackEventListener, FBAudioMuteControllerListener, FBSnacksMediaView, FBClonePhotoView> {

	FBSnacksViewerToolbox* _toolbox;
	FBActivityIndicatorView* _spinner;
	CKComponentHostingView* _videoHostingView;
	FBVideoPlaybackController* _videoController;
	BOOL _paused;
	BOOL _videoLoaded;
	BOOL _videoFinished;
	BOOL _requestedPlay;
	id<FBSnacksMediaViewDelegate> _delegate;
	id<FBDirectInboxMessageProtocol> _item;

}

@property (nonatomic,readonly) id<FBDirectInboxMessageProtocol> item;              //@synthesize item=_item - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)componentForModel:(id)arg1 context:(id)arg2 ;
-(void)videoPlaybackControllerDidStartPlayback:(id)arg1 ;
-(void)videoPlaybackControllerDidStallPlayback:(id)arg1 ;
-(void)videoPlaybackControllerIsReady:(id)arg1 ;
-(void)videoPlaybackControllerDidFinishPlayback:(id)arg1 ;
-(void)videoPlaybackController:(id)arg1 didUpdatePlaybackTime:(double)arg2 ;
-(void)componentHostingViewDidInvalidateSize:(id)arg1 ;
-(id)initWithToolbox:(id)arg1 ;
-(BOOL)isViewFinishedLoading;
-(void)seekToBeginning;
-(void)configureWithItem:(id)arg1 delegate:(id)arg2 ;
-(id)displayedMedia;
-(id)clonePhotoViewInfoWithSourceInfo:(id)arg1 ;
-(void)videoPlayerControllerDidUpdate:(id)arg1 ;
-(void)audioMuteControllerDidUpdate:(id)arg1 ;
-(id)clonePhotoView;
-(void)dealloc;
-(void)layoutSubviews;
-(id<FBDirectInboxMessageProtocol>)item;
-(void)prepareForReuse;
-(void)pause;
-(void)play;
-(BOOL)isPaused;
@end
