/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class FBStreamListView, FBMoviesHomeMapView;

@interface FBMoviesHomeNearbyTheatersStackView : UIView {

	FBStreamListView* _listView;
	FBMoviesHomeMapView* _mapView;
	double _listCenter;

}

@property (nonatomic,retain) FBStreamListView * listView;                //@synthesize listView=_listView - In the implementation block
@property (nonatomic,retain) FBMoviesHomeMapView * mapView;              //@synthesize mapView=_mapView - In the implementation block
@property (assign,nonatomic) double listCenter;                          //@synthesize listCenter=_listCenter - In the implementation block
-(void)setListCenter:(double)arg1 ;
-(double)listCenter;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setMapView:(FBMoviesHomeMapView *)arg1 ;
-(FBMoviesHomeMapView *)mapView;
-(void)setListView:(FBStreamListView *)arg1 ;
-(FBStreamListView *)listView;
@end
