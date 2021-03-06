/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBListViewController.h>

@protocol FBLocalNewsListViewControllerDelegate;
@class FBUserSession, FBFeedScrollingCenterFocusedVideoDelegate, FBLocalNewsLocationIdentifier, NSString;

@interface FBLocalNewsListViewController : FBListViewController {

	FBUserSession* _session;
	FBFeedScrollingCenterFocusedVideoDelegate* _centeringDelegate;
	BOOL _hasSetScrollViewInsets;
	FBLocalNewsLocationIdentifier* _locationIdentifier;
	id<FBLocalNewsListViewControllerDelegate> _delegate;
	NSString* _source;
	UIEdgeInsets _additiveInsets;

}

@property (nonatomic,retain) FBLocalNewsLocationIdentifier * locationIdentifier;                     //@synthesize locationIdentifier=_locationIdentifier - In the implementation block
@property (assign,nonatomic,__weak) id<FBLocalNewsListViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) UIEdgeInsets additiveInsets;                                            //@synthesize additiveInsets=_additiveInsets - In the implementation block
@property (nonatomic,copy) NSString * source;                                                        //@synthesize source=_source - In the implementation block
-(void)streamListViewDidScroll:(id)arg1 ;
-(id)initWithSession:(id)arg1 location:(id)arg2 additiveInsets:(UIEdgeInsets)arg3 delegate:(id)arg4 source:(id)arg5 ;
-(id)initWithSession:(id)arg1 locationIdentifier:(id)arg2 additiveInsets:(UIEdgeInsets)arg3 delegate:(id)arg4 source:(id)arg5 ;
-(void)_restoreInsetsWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithSession:(id)arg1 locationPage:(id)arg2 additiveInsets:(UIEdgeInsets)arg3 delegate:(id)arg4 source:(id)arg5 ;
-(void)updateAdditiveInsetsWithAnimationIfPossibleBeforeScrolling:(UIEdgeInsets)arg1 ;
-(void)restoreInsetsWithAnimationCompletion:(/*^block*/id)arg1 ;
-(UIEdgeInsets)additiveInsets;
-(void)setAdditiveInsets:(UIEdgeInsets)arg1 ;
-(void)setDelegate:(id<FBLocalNewsListViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBLocalNewsListViewControllerDelegate>)delegate;
-(void)setSource:(NSString *)arg1 ;
-(NSString *)source;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(FBLocalNewsLocationIdentifier *)locationIdentifier;
-(void)setLocationIdentifier:(FBLocalNewsLocationIdentifier *)arg1 ;
@end

