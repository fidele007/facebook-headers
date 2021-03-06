/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBVideoChannelDimmableView.h>
#import <Facebook/FBVideoChannelTrackableVideoView.h>

@class FBVideoChannelDimmingLayer, FBVideoPlayerComponentStatefulView, NSString;

@interface FBVideoChannelPlaylistItemView : FBVideoChannelDimmableView <FBVideoChannelTrackableVideoView> {

	FBVideoChannelDimmingLayer* _upperChromeDimmingLayer;
	FBVideoChannelDimmingLayer* _lowerChromeDimmingLayer;
	FBVideoPlayerComponentStatefulView* _componentStatefulView;

}

@property (assign,nonatomic,__weak) FBVideoPlayerComponentStatefulView * componentStatefulView;              //@synthesize componentStatefulView=_componentStatefulView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FBVideoPlayerComponentStatefulView *)componentStatefulView;
-(void)focusOnVideoAnimated:(BOOL)arg1 ;
-(void)loseFocusOnVideoAnimated:(BOOL)arg1 ;
-(id)_findComponentStatefulViewForRootView:(id)arg1 ;
-(void)setComponentStatefulView:(FBVideoPlayerComponentStatefulView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)addSubview:(id)arg1 ;
-(void)layoutSubviews;
@end

