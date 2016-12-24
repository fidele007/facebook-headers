/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/MKMapViewDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>

@protocol FBNavigationCoordinator;
@class FBMKAnnotationAdapterForPlaceInFeed, FBUserSession, MKMapView, FBMemPage, UIActionSheet, FBFeedMapCardView, NSString;

@interface FBFeedMapViewController : UIViewController <MKMapViewDelegate, UIActionSheetDelegate> {

	FBMKAnnotationAdapterForPlaceInFeed* _annotation;
	FBUserSession* _session;
	MKMapView* _mapView;
	FBMemPage* _place;
	UIActionSheet* _actionSheet;
	id<FBNavigationCoordinator> _navigationCoordinator;
	FBFeedMapCardView* _cardView;

}

@property (nonatomic,readonly) MKMapView * mapView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(double)fb_navigationSearchBarRightOffset;
-(id)initWithSession:(id)arg1 place:(id)arg2 navigationCoordinator:(id)arg3 ;
-(void)setActionSheet:(id)arg1 ;
-(void)_showActionSheet:(id)arg1 ;
-(void)handlePlaceTap:(id)arg1 ;
-(id)pinAnnotationView;
-(void)dealloc;
-(unsigned long long)supportedInterfaceOrientations;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(id)mapView:(id)arg1 viewForAnnotation:(id)arg2 ;
-(MKMapView *)mapView;
@end

