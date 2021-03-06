/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>
#import <Facebook/CKComponentProvider.h>
#import <Facebook/FBComponentCollectionViewDataSourceEventListener.h>
#import <Facebook/FBComponentScrollEventListener.h>
#import <Facebook/FBComponentCollectionViewDataSourceSelectionEventListener.h>
#import <libobjc.A.dylib/MKMapViewDelegate.h>
#import <Facebook/FBLocationAccessManagerDelegate.h>
#import <Facebook/FBSocialSearchPlaceListMapViewDelegate.h>
#import <Facebook/FBSocialSearchPlaceListDisplayProtocol.h>

@protocol FBSocialSearchPlaceListEditorDelegate;
@class FBFeedToolbox, FBMemFeedStory, NSArray, FBSocialSearchPlaceListMapView, FBComponentCollectionViewDataSource, FBComponentCollectionViewFlowLayoutDelegate, FBLocationAccessManager, FBNuxController, NSObject, NSString;

@interface FBSocialSearchPlaceListMapViewController : UIViewController <CKComponentProvider, FBComponentCollectionViewDataSourceEventListener, FBComponentScrollEventListener, FBComponentCollectionViewDataSourceSelectionEventListener, MKMapViewDelegate, FBLocationAccessManagerDelegate, FBSocialSearchPlaceListMapViewDelegate, FBSocialSearchPlaceListDisplayProtocol> {

	FBFeedToolbox* _toolbox;
	FBMemFeedStory* _targetStory;
	NSArray* _placeListItemModels;
	SCD_Struct_FB48 _defaultRegion;
	NSArray* _annotations;
	unsigned long long _currentIndex;
	FBSocialSearchPlaceListMapView* _placeListMapView;
	FBComponentCollectionViewDataSource* _componentDataSource;
	FBComponentCollectionViewFlowLayoutDelegate* _flowLayoutDelegate;
	FBLocationAccessManager* _locationAccessManager;
	long long _latestEditEventType;
	FBNuxController* _cfaButtonNuxController;
	NSObject*<FBSocialSearchPlaceListEditorDelegate> _placeListEditorDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) NSObject*<FBSocialSearchPlaceListEditorDelegate> placeListEditorDelegate;              //@synthesize placeListEditorDelegate=_placeListEditorDelegate - In the implementation block
+(id)componentForModel:(id)arg1 context:(id)arg2 ;
-(void)dataSourceDidEndUpdates:(id)arg1 changeset:(Changeset*)arg2 userInfo:(id)arg3 ;
-(void)scrollViewWillEndDragging:(FBScrollViewState)arg1 withVelocity:(CGPoint)arg2 fixedTargetContentOffset:(CGPoint)arg3 ;
-(void)locationAccessManager:(id)arg1 accessGranted:(id)arg2 ;
-(void)locationAccessManager:(id)arg1 accessDenied:(unsigned long long)arg2 ;
-(void)dataSource:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)_setupDataSource;
-(SCD_Struct_FB53)_userVisibleMapRect;
-(BOOL)_isAnnotationVisibleToUser:(id)arg1 ;
-(void)_centerPinIfNotVisibleOnMap:(id)arg1 ;
-(void)_didTapUserLocation;
-(void)_scrollToItemAtIndexPath:(id)arg1 ;
-(void)reloadPlaceList:(id)arg1 eventType:(long long)arg2 ;
-(NSObject*<FBSocialSearchPlaceListEditorDelegate>)placeListEditorDelegate;
-(void)setPlaceListEditorDelegate:(NSObject*<FBSocialSearchPlaceListEditorDelegate>)arg1 ;
-(id)initWithTargetStory:(id)arg1 placeListEditorDelegate:(id)arg2 toolbox:(id)arg3 ;
-(void)didLayoutCFAButton:(id)arg1 ;
-(void)didTapCommentFreeAddingButton:(id)arg1 ;
-(void)_centerMapAtUserLocation;
-(void)_centerMapAtCoordinate:(CLLocationCoordinate2D)arg1 animated:(BOOL)arg2 ;
-(void)_updateCurrentSelectedAnnotationView:(unsigned long long)arg1 ;
-(unsigned long long)itemIndexAtOffset:(CGPoint)arg1 ;
-(void)dealloc;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewWillLayoutSubviews;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
-(id)mapView:(id)arg1 viewForAnnotation:(id)arg2 ;
-(void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2 ;
@end

