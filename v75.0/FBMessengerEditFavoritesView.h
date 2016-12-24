/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol FBMessengerEditFavoritesViewDelegate;
@class UITableView, FBMessengerChatBarEditFavoritesSearchView;

@interface FBMessengerEditFavoritesView : UIView {

	int _style;
	UITableView* _tableView;
	FBMessengerChatBarEditFavoritesSearchView* _searchView;
	id<FBMessengerEditFavoritesViewDelegate> _delegate;

}

@property (nonatomic,retain) UITableView * tableView;                                               //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) FBMessengerChatBarEditFavoritesSearchView * searchView;                //@synthesize searchView=_searchView - In the implementation block
@property (assign,nonatomic) int style;                                                             //@synthesize style=_style - In the implementation block
@property (assign,nonatomic,__weak) id<FBMessengerEditFavoritesViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<FBMessengerEditFavoritesViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<FBMessengerEditFavoritesViewDelegate>)delegate;
-(int)style;
-(void)setStyle:(int)arg1 ;
-(id)initWithStyle:(int)arg1 ;
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
-(FBMessengerChatBarEditFavoritesSearchView *)searchView;
-(void)setSearchView:(FBMessengerChatBarEditFavoritesSearchView *)arg1 ;
-(void)_donePressed:(id)arg1 ;
@end
