/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBModalAnimatedTransitioning.h>

@protocol FBDisplayableMediaViewProvider, FBPhotoViewerPresentationAnimationControllerDelegate;
@class FBMemPhoto, FBPhotoViewerPresentationAnimationListenerAnnouncer, NSString;

@interface FBPhotoViewerPresentationAnimationController : NSObject <FBModalAnimatedTransitioning> {

	FBMemPhoto* _photo;
	long long _theme;
	id<FBDisplayableMediaViewProvider> _photoViewProvider;
	FBPhotoViewerPresentationAnimationListenerAnnouncer* _announcer;
	id<FBPhotoViewerPresentationAnimationControllerDelegate> _delegate;
	long long _cloneViewState;

}

@property (assign,nonatomic,__weak) id<FBPhotoViewerPresentationAnimationControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long cloneViewState;                                                            //@synthesize cloneViewState=_cloneViewState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)animateTransition:(id)arg1 withAnimationGroup:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithPhoto:(id)arg1 theme:(long long)arg2 photoViewProvider:(id)arg3 ;
-(long long)cloneViewState;
-(void)setDelegate:(id<FBPhotoViewerPresentationAnimationControllerDelegate>)arg1 ;
-(id<FBPhotoViewerPresentationAnimationControllerDelegate>)delegate;
-(double)animationDuration;
-(void)_transitionToState:(long long)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

