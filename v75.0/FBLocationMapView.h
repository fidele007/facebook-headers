/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/MKMapViewDelegate.h>

@class MKMapView, UIView, NSArray, UIImage, NSString;

@interface FBLocationMapView : UIView <MKMapViewDelegate> {

	MKMapView* _mapView;
	UIView* _divider;
	BOOL _showsUserLocation;
	BOOL _shouldOverrideSpan;
	BOOL _shouldAnnotateMap;
	NSArray* _locations;
	UIImage* _annotationImage;
	unsigned long long _visibleMarkers;
	CGPoint _span;
	CGPoint _annotationCenterOffset;

}

@property (nonatomic,copy) NSArray * locations;                              //@synthesize locations=_locations - In the implementation block
@property (assign,nonatomic) BOOL showsUserLocation;                         //@synthesize showsUserLocation=_showsUserLocation - In the implementation block
@property (assign,nonatomic) BOOL shouldOverrideSpan;                        //@synthesize shouldOverrideSpan=_shouldOverrideSpan - In the implementation block
@property (assign,nonatomic) CGPoint span;                                   //@synthesize span=_span - In the implementation block
@property (assign,nonatomic) BOOL shouldAnnotateMap;                         //@synthesize shouldAnnotateMap=_shouldAnnotateMap - In the implementation block
@property (nonatomic,retain) UIImage * annotationImage;                      //@synthesize annotationImage=_annotationImage - In the implementation block
@property (assign,nonatomic) CGPoint annotationCenterOffset;                 //@synthesize annotationCenterOffset=_annotationCenterOffset - In the implementation block
@property (assign,nonatomic) unsigned long long visibleMarkers;              //@synthesize visibleMarkers=_visibleMarkers - In the implementation block
@property (nonatomic,readonly) BOOL shouldRenderMap; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setShouldAnnotateMap:(BOOL)arg1 ;
-(void)setShouldOverrideSpan:(BOOL)arg1 ;
-(void)setVisibleMarkers:(unsigned long long)arg1 ;
-(void)setAnnotationImage:(UIImage *)arg1 ;
-(BOOL)shouldAnnotateMap;
-(void)_createMapView;
-(void)_updateMapViewRegion;
-(void)_updateMapViewIfNeeded;
-(BOOL)shouldRenderMap;
-(SCD_Struct_FB47)_regionThatFitsLocations:(id)arg1 ;
-(UIImage *)annotationImage;
-(void)setAnnotationCenterOffset:(CGPoint)arg1 ;
-(CGPoint)annotationCenterOffset;
-(BOOL)shouldOverrideSpan;
-(unsigned long long)visibleMarkers;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setLocations:(NSArray *)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGPoint)span;
-(NSArray *)locations;
-(void)setSpan:(CGPoint)arg1 ;
-(BOOL)showsUserLocation;
-(void)setShowsUserLocation:(BOOL)arg1 ;
-(id)mapView:(id)arg1 viewForAnnotation:(id)arg2 ;
@end

