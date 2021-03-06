/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/MKMapViewDelegate.h>
#import <Facebook/FBComponentCollectionViewDataSourceEventListener.h>
#import <Facebook/FBComponentCollectionViewDataSourceSelectionEventListener.h>
#import <Facebook/FBComponentScrollEventListener.h>
#import <Facebook/FBLocationAccessManagerDelegate.h>

@protocol FBPlacesMapCardLayoutProvider, FBPlacesMapViewControllerDelegate;
@class NSArray, FBPlacesMapCollectionViewLayout, FBComponentCollectionViewFlowLayoutDelegate, FBLocationAccessManager, FBPlacesMapView, FBUserSession, FBToastContainerView, FBToastPresenter, FBComponentCollectionViewDataSource, NSString;

@interface FBPlacesMapViewController : UIViewController <MKMapViewDelegate, FBComponentCollectionViewDataSourceEventListener, FBComponentCollectionViewDataSourceSelectionEventListener, FBComponentScrollEventListener, FBLocationAccessManagerDelegate> {

	NSArray* _annotations;
	Class _annotationViewClass;
	id<FBPlacesMapCardLayoutProvider> _cardLayoutProvider;
	FBPlacesMapCollectionViewLayout* _cardsCollectionViewLayout;
	unsigned long long _currentIndex;
	SCD_Struct_FB48 _defaultRegion;
	FBComponentCollectionViewFlowLayoutDelegate* _flowLayoutDelegate;
	BOOL _isUserInteractingWithMap;
	FBLocationAccessManager* _locationAccessManager;
	FBPlacesMapView* _placesMapView;
	FBUserSession* _userSession;
	FBToastContainerView* _toastContainer;
	FBToastPresenter* _toastPresenter;
	id<FBPlacesMapViewControllerDelegate> _delegate;
	FBComponentCollectionViewDataSource* _componentDataSource;

}

@property (assign,nonatomic,__weak) id<FBPlacesMapViewControllerDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) FBComponentCollectionViewDataSource * componentDataSource;              //@synthesize componentDataSource=_componentDataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(SCD_Struct_FB53)MKMapRectForCoordinateRegion:(SCD_Struct_FB47)arg1 ;
+(SCD_Struct_FB47)regionForAnnotations:(id)arg1 ;
-(void)dataSourceWillBeginUpdates:(id)arg1 ;
-(void)dataSourceWillEndUpdates:(id)arg1 changeset:(Changeset*)arg2 ;
-(void)dataSourceDidEndUpdates:(id)arg1 changeset:(Changeset*)arg2 userInfo:(id)arg3 ;
-(void)scrollViewWillEndDragging:(FBScrollViewState)arg1 withVelocity:(CGPoint)arg2 fixedTargetContentOffset:(CGPoint)arg3 ;
-(void)locationAccessManager:(id)arg1 accessGranted:(id)arg2 ;
-(void)locationAccessManager:(id)arg1 accessDenied:(unsigned long long)arg2 ;
-(void)dataSource:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(FBComponentCollectionViewDataSource *)componentDataSource;
-(id)initWithUserSession:(id)arg1 componentCollectionViewDataSource:(id)arg2 delegate:(id)arg3 defaultRegion:(SCD_Struct_FB47)arg4 annotationViewClass:(Class)arg5 cardLayoutProvider:(id)arg6 ;
-(void)hideToastAnimated:(BOOL)arg1 ;
-(void)showToastWithMessage:(id)arg1 ;
-(SCD_Struct_FB53)_userVisibleMapRect;
-(BOOL)_isAnnotationVisibleToUser:(id)arg1 ;
-(void)_centerPinIfNotVisibleOnMap:(id)arg1 ;
-(void)_updateDidUserInteractWithMapForRegionChange;
-(void)_didTapUserLocation;
-(void)_didTapSearchThisAreaButton;
-(void)_setupComponentDataSource;
-(void)_scrollToItemAtIndexPath:(id)arg1 ;
-(void)_centerMapAtUserLocation;
-(void)_centerMapAtCoordinate:(CLLocationCoordinate2D)arg1 animated:(BOOL)arg2 ;
-(unsigned long long)itemIndexAtOffset:(CGPoint)arg1 ;
-(void)_reloadMapAnnotations;
-(void)_updateCardCollectionVewLayoutWithNewItems;
-(void)_zoomMapToAnnotationsAnimated:(BOOL)arg1 ;
-(void)prepareToasts;
-(double)_cardsCollectionViewHeight;
-(void)_updateCurrentSelected:(unsigned long long)arg1 ;
-(void)_adjustCardsCollectionViewHeight;
-(void)_centerMapOnThePin:(id)arg1 ;
-(void)reloadMapData;
-(void)setDelegate:(id<FBPlacesMapViewControllerDelegate>)arg1 ;
-(void)scrollViewDidEndDecelerating:(FBScrollViewState)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(FBScrollViewState)arg1 ;
-(id<FBPlacesMapViewControllerDelegate>)delegate;
-(void)viewDidLoad;
-(void)showLoadingIndicator;
-(void)hideLoadingIndicator;
-(void)mapView:(id)arg1 regionWillChangeAnimated:(BOOL)arg2 ;
-(void)mapView:(id)arg1 regionDidChangeAnimated:(BOOL)arg2 ;
-(id)mapView:(id)arg1 viewForAnnotation:(id)arg2 ;
-(void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2 ;
@end

