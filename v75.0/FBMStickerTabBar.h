/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@protocol FBMStickerTabBarDelegate, FBMStickerTabBarDataSource;
@class NSMutableArray, UIScrollView, UIView;

@interface FBMStickerTabBar : UIView {

	NSMutableArray* _tabBarButtons;
	UIScrollView* _contentScrollView;
	UIView* _selectedButtonShadow;
	BOOL _stickyStickerSearchButtonEnabled;
	id<FBMStickerTabBarDelegate> _delegate;
	id<FBMStickerTabBarDataSource> _dataSource;
	long long _selectedTabIndex;

}

@property (assign,nonatomic,__weak) id<FBMStickerTabBarDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<FBMStickerTabBarDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) long long selectedTabIndex;                                    //@synthesize selectedTabIndex=_selectedTabIndex - In the implementation block
-(void)setSelectedTabIndex:(long long)arg1 ;
-(long long)selectedTabIndex;
-(void)setStickyStickerSearchButtonEnabled:(BOOL)arg1 ;
-(void)reloadTabBar;
-(id)tabarButtonAtIndex:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 showsHorizontalScrollIndicator:(BOOL)arg2 ;
-(void)_scrollToSelectedButton:(BOOL)arg1 ;
-(void)tabBarButtonPressed:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDataSource:(id<FBMStickerTabBarDataSource>)arg1 ;
-(void)setDelegate:(id<FBMStickerTabBarDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<FBMStickerTabBarDataSource>)dataSource;
-(id<FBMStickerTabBarDelegate>)delegate;
@end

