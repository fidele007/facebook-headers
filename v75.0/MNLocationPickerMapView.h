/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <Facebook/MNLocationPickerMapGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/MKMapViewDelegate.h>

@protocol MNLocationPickerMapViewDelegate;
@class MKMapView, UIButton, UIImageView, MNLocationPickerMapGestureRecognizer, CLLocation, NSString;

@interface MNLocationPickerMapView : UIView <MNLocationPickerMapGestureRecognizerDelegate, MKMapViewDelegate> {

	MKMapView* _mapView;
	BOOL _shouldDisableCurrentLocationSending;
	UIButton* _mapResetButton;
	BOOL _shouldHidePin;
	UIImageView* _pinImageView;
	CLLocationCoordinate2D _manuallySetCenterCoordinate;
	MNLocationPickerMapGestureRecognizer* _gestureRecognizer;
	id<MNLocationPickerMapViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNLocationPickerMapViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) CLLocationCoordinate2D centerCoordinate; 
@property (nonatomic,readonly) CLLocation * userLocation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_didStartDragging;
-(void)gestureRecognizerDidDetectTap:(id)arg1 ;
-(void)gestureRecognizerDidDetectDragging:(id)arg1 ;
-(void)gestureRecognizerDidDetectZooming:(id)arg1 ;
-(BOOL)_shouldShowResetButton;
-(void)_resetButtonTapped;
-(void)_layoutPinImageView;
-(BOOL)_shouldSetRegionWhenSettingMapCenter;
-(void)_setUserTrackingModeFollow;
-(void)_setUserTrackingModeNone;
-(BOOL)_shouldAlwaysShowUserLocationOnMap;
-(id)initWithInitialUserLocation:(id)arg1 shouldDisableCurrentLocationSending:(BOOL)arg2 ;
-(void)setResetButtonHidden:(BOOL)arg1 ;
-(void)setLocationPickerPinHidden:(BOOL)arg1 ;
-(void)setUserTrackingEnabled:(BOOL)arg1 ;
-(void)setDelegate:(id<MNLocationPickerMapViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<MNLocationPickerMapViewDelegate>)delegate;
-(CLLocationCoordinate2D)centerCoordinate;
-(void)setCenterCoordinate:(CLLocationCoordinate2D)arg1 ;
-(CLLocation *)userLocation;
-(void)mapView:(id)arg1 regionDidChangeAnimated:(BOOL)arg2 ;
@end

