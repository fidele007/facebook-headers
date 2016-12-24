/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBPhotosCollageGridViewController.h>
#import <Facebook/FBEmbeddedTab.h>

@class UIView, UIScrollView;

@interface FBPhotosCollageInsetsTrackingViewController : FBPhotosCollageGridViewController <FBEmbeddedTab> {

	UIView* secondaryStickyHeaderView;

}

@property (nonatomic,readonly) UIScrollView * scrollView; 
@property (nonatomic,retain) UIView * secondaryStickyHeaderView; 
-(void)refreshData;
-(BOOL)shouldApplyTabBarContentInsets;
-(UIView *)secondaryStickyHeaderView;
-(void)setSecondaryStickyHeaderView:(UIView *)arg1 ;
-(UIScrollView *)scrollView;
-(void)loadView;
-(void)viewWillLayoutSubviews;
@end

