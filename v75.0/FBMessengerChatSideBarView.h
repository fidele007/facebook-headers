/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol FBMessengerChatSideBarViewDelegate;
@class UITableView, FBMessengerChatBarSearchView, UIView, UIButton;

@interface FBMessengerChatSideBarView : UIView {

	double _searchViewHeight;
	BOOL _isCollapsed;
	BOOL _didHideSearchBarAtStart;
	int _style;
	UITableView* _tableView;
	FBMessengerChatBarSearchView* _searchView;
	UIView* _chatDisabledOverlayView;
	UIView* _megaphoneView;
	double _megaphoneViewHeight;
	double _searchViewOffset;
	id<FBMessengerChatSideBarViewDelegate> _delegate;
	UIButton* _gearButton;

}

@property (nonatomic,retain) FBMessengerChatBarSearchView * searchView;                           //@synthesize searchView=_searchView - In the implementation block
@property (nonatomic,retain) UIView * chatDisabledOverlayView;                                    //@synthesize chatDisabledOverlayView=_chatDisabledOverlayView - In the implementation block
@property (assign,nonatomic) int style;                                                           //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) BOOL didHideSearchBarAtStart;                                        //@synthesize didHideSearchBarAtStart=_didHideSearchBarAtStart - In the implementation block
@property (nonatomic,retain) UIButton * gearButton;                                               //@synthesize gearButton=_gearButton - In the implementation block
@property (nonatomic,readonly) UITableView * tableView;                                           //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) UIView * megaphoneView;                                              //@synthesize megaphoneView=_megaphoneView - In the implementation block
@property (assign,nonatomic) double megaphoneViewHeight;                                          //@synthesize megaphoneViewHeight=_megaphoneViewHeight - In the implementation block
@property (assign,nonatomic) double searchViewOffset;                                             //@synthesize searchViewOffset=_searchViewOffset - In the implementation block
@property (assign,nonatomic) BOOL isCollapsed;                                                    //@synthesize isCollapsed=_isCollapsed - In the implementation block
@property (assign,nonatomic,__weak) id<FBMessengerChatSideBarViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)backgroundColorForStyle:(int)arg1 ;
-(void)setIsCollapsed:(BOOL)arg1 ;
-(void)setMegaphoneView:(UIView *)arg1 ;
-(UIView *)megaphoneView;
-(void)setMegaphoneViewHeight:(double)arg1 ;
-(void)updateChatDisabledOverlayView:(BOOL)arg1 online:(BOOL)arg2 ;
-(void)updateTableAndReloadSections:(id)arg1 ;
-(UIButton *)gearButton;
-(void)setGearButton:(UIButton *)arg1 ;
-(void)_onGearButton:(id)arg1 ;
-(UIView *)chatDisabledOverlayView;
-(void)setChatDisabledOverlayView:(UIView *)arg1 ;
-(double)megaphoneViewHeight;
-(double)searchViewOffset;
-(void)setSearchViewOffset:(double)arg1 ;
-(BOOL)didHideSearchBarAtStart;
-(void)setDidHideSearchBarAtStart:(BOOL)arg1 ;
-(id)backgroundColor;
-(void)setDelegate:(id<FBMessengerChatSideBarViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<FBMessengerChatSideBarViewDelegate>)delegate;
-(int)style;
-(void)setStyle:(int)arg1 ;
-(id)initWithStyle:(int)arg1 ;
-(UITableView *)tableView;
-(BOOL)isCollapsed;
-(FBMessengerChatBarSearchView *)searchView;
-(void)setSearchView:(FBMessengerChatBarSearchView *)arg1 ;
-(void)scrollToTopAnimated:(BOOL)arg1 ;
@end

