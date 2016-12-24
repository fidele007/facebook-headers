/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Facebook/FBLocalNewsLiveMapDataModelDelegate.h>
#import <libobjc.A.dylib/MKMapViewDelegate.h>

@class FBUserSession, CLLocation, MKMapView, FBLocalNewsLiveMapDataModel, FBLocalNewsLiveMapVideoComponentHostingView, FBMemVideo, MKPinAnnotationView, NSString;

@interface FBLocalNewsLiveMapViewController : UIViewController <FBLocalNewsLiveMapDataModelDelegate, MKMapViewDelegate> {

	FBUserSession* _session;
	CLLocation* _location;
	MKMapView* _mapView;
	FBLocalNewsLiveMapDataModel* _liveMapDataModel;
	double _maxRenderRadius;
	FBLocalNewsLiveMapVideoComponentHostingView* _liveVideoView;
	FBMemVideo* _selectedLiveVideo;
	MKPinAnnotationView* _selectedLiveVideoAnnotationView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_configureMapView;
-(void)_configureLiveVideoView;
-(void)didFetchLiveMapVideos:(id)arg1 ;
-(void)updateWithLocation:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(id)initWithSession:(id)arg1 ;
-(id)mapView:(id)arg1 viewForAnnotation:(id)arg2 ;
-(void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2 ;
@end

