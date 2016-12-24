/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@protocol FBReactionStaticMapWithBreadcrumbsViewDelegate;
@class CKComponentHostingView, UIImageView, UIView;

@interface FBReactionStaticMapWithBreadcrumbsView : UIView {

	CKComponentHostingView* _mapHostingView;
	CKComponentHostingView* _breadcrumbsHostingView;
	double _viewHeight;
	UIImageView* _gradient;
	UIView* _mapTappableArea;
	id<FBReactionStaticMapWithBreadcrumbsViewDelegate> _delegate;

}
-(id)initWithMapView:(id)arg1 viewHeight:(double)arg2 breadcrumbsAndTitle:(id)arg3 delegate:(id)arg4 ;
-(void)_didTapMap;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end
