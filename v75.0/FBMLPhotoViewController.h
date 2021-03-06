/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Facebook/FBMLNativeBridgeListener.h>
#import <Facebook/FBMLPhotoViewResponder.h>

@protocol FBMLPhotoViewControllerDelegate;
@class FBMLSession, FBMLNativeBridgeSubscription, FBMLFullScreenPhotoView, UITapGestureRecognizer, SYNPhotoIdentifier, SYNPhotoViewerData, FBMLSentinelToken, FBMLPhotoView, NSString;

@interface FBMLPhotoViewController : UIViewController <FBMLNativeBridgeListener, FBMLPhotoViewResponder> {

	FBMLSession* _session;
	FBMLNativeBridgeSubscription* _nativeBridgeSubscription;
	FBMLFullScreenPhotoView* _fullScreenPhotoView;
	UITapGestureRecognizer* _doubleTapGestureRecognizer;
	id<FBMLPhotoViewControllerDelegate> _delegate;
	unsigned long long _pageIndex;
	SYNPhotoIdentifier* _photoIdentifier;
	SYNPhotoViewerData* _photoViewerData;
	FBMLSentinelToken* _sentinelToken;

}

@property (nonatomic,copy) FBMLSentinelToken * sentinelToken;                                  //@synthesize sentinelToken=_sentinelToken - In the implementation block
@property (assign,nonatomic,__weak) id<FBMLPhotoViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long pageIndex;                                     //@synthesize pageIndex=_pageIndex - In the implementation block
@property (nonatomic,readonly) FBMLPhotoView * photoView; 
@property (nonatomic,copy,readonly) SYNPhotoIdentifier * photoIdentifier;                      //@synthesize photoIdentifier=_photoIdentifier - In the implementation block
@property (nonatomic,readonly) SYNPhotoViewerData * photoViewerData;                           //@synthesize photoViewerData=_photoViewerData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)nativeDataSourceChanged;
-(void)photoViewImageDidLoad:(id)arg1 ;
-(SYNPhotoIdentifier *)photoIdentifier;
-(FBMLSentinelToken *)sentinelToken;
-(void)setSentinelToken:(FBMLSentinelToken *)arg1 ;
-(void)_clearSentinel;
-(SYNPhotoViewerData *)photoViewerData;
-(void)_updatePhotoViewerData:(id)arg1 ;
-(void)_doubleTappedOnPhoto:(id)arg1 ;
-(void)_singleTappedOnPhoto:(id)arg1 ;
-(id)initWithMomentsSession:(id)arg1 photoIdentifier:(id)arg2 ;
-(void)setDelegate:(id<FBMLPhotoViewControllerDelegate>)arg1 ;
-(id<FBMLPhotoViewControllerDelegate>)delegate;
-(BOOL)prefersStatusBarHidden;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)viewWillLayoutSubviews;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(unsigned long long)pageIndex;
-(void)setPageIndex:(unsigned long long)arg1 ;
-(FBMLPhotoView *)photoView;
@end

