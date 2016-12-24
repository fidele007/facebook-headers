/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>
#import <Facebook/FBMoviesHomeTheatersListViewControllerDelegate.h>
#import <Facebook/FBMoviesHomeTheatersMapViewControllerDelegate.h>
#import <Facebook/FBComponentScrollEventListener.h>

@protocol FBMoviesHomeNearbyTheatersStackViewControllerDelegate;
@class FBUserSession, FBMoviesHomeTheatersListViewController, FBMoviesHomeTheatersMapViewController, FBMoviesHomeNearbyTheatersStackView, UITapGestureRecognizer, UIPanGestureRecognizer, UIPinchGestureRecognizer, FBMoviesHomeFunnelLogger, FBMoviesHomeLocationContext, NSString;

@interface FBMoviesHomeNearbyTheatersStackViewController : UIViewController <FBMoviesHomeTheatersListViewControllerDelegate, FBMoviesHomeTheatersMapViewControllerDelegate, FBComponentScrollEventListener> {

	FBUserSession* _session;
	FBMoviesHomeTheatersListViewController* _listViewController;
	FBMoviesHomeTheatersMapViewController* _mapViewController;
	FBMoviesHomeNearbyTheatersStackView* _stackView;
	UITapGestureRecognizer* _mapTapGestureRecognizer;
	UIPanGestureRecognizer* _mapPanGestureRecognizer;
	UIPinchGestureRecognizer* _mapPinchGestureRecognizer;
	double _listOriginCenterY;
	double _listScrollViewContentOffsetY;
	FBMoviesHomeFunnelLogger* _funnelLogger;
	FBMoviesHomeLocationContext* _locationContext;
	id<FBMoviesHomeNearbyTheatersStackViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBMoviesHomeNearbyTheatersStackViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)_isMapVisible;
-(void)_loadTheatersList;
-(void)_loadMapWithTheaters:(id)arg1 ;
-(void)_setUpMapGestureRecognizers;
-(double)_initialListCenter;
-(void)_addListCenterSpringAnimationWithVelocity:(double)arg1 toValue:(double)arg2 ;
-(id)_listScrollView;
-(void)_updateListViewCenter:(double)arg1 ;
-(void)_updateListViewContentOffset:(double)arg1 ;
-(void)_didEndDraggingListWithVelocity:(double)arg1 ;
-(double)_constrainedListCenter:(double)arg1 ;
-(void)_addListContentOffsetDecayAnimationWithVelocity:(double)arg1 ;
-(BOOL)_isListCenterBelowInitial:(double)arg1 ;
-(BOOL)_isListCenterBelowButFarEnoughToInitial;
-(double)_fullScreenMapListCenter;
-(void)_addListCenterDecayAnimationWithVelocity:(double)arg1 ;
-(void)_addListContentOffsetSpringAnimationWithVelocity:(double)arg1 toValue:(double)arg2 ;
-(BOOL)_isListCenterAboveButCloseEnoughToInitial;
-(id)_listCenterAnimableProperty;
-(void)_updateMapUserInteractionState:(BOOL)arg1 ;
-(id)_listContentOffsetAnimableProperty;
-(id)initWithSession:(id)arg1 locationContext:(id)arg2 funnelLogger:(id)arg3 ;
-(void)_didInteractWithMap:(id)arg1 ;
-(void)didFetchSuccessWithNearbyTheaters:(id)arg1 ;
-(void)didInteractWithMapForRegionChange;
-(void)didTapViewListItemView;
-(void)fetchTheatersInMapRegion:(SCD_Struct_FB47)arg1 ;
-(void)setDelegate:(id<FBMoviesHomeNearbyTheatersStackViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)scrollViewDidScroll:(FBScrollViewState)arg1 ;
-(void)scrollViewWillBeginDragging:(FBScrollViewState)arg1 ;
-(void)scrollViewDidEndDragging:(FBScrollViewState)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewWillBeginDecelerating:(FBScrollViewState)arg1 ;
-(id<FBMoviesHomeNearbyTheatersStackViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewDidLoad;
-(void)_removeAllAnimations;
-(void)cancelCurrentQuery;
@end
