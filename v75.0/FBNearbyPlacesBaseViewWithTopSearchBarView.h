/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <Facebook/FBNearbyPlacesExtendableSearchBarDelegete.h>

@protocol FBNearbyPlacesBaseViewWithTopSearchBarViewDelegete;
@class FBNearbyPlacesExtendableSearchBar, UITableView, UIView, UITextField, UIButton;

@interface FBNearbyPlacesBaseViewWithTopSearchBarView : UIView <FBNearbyPlacesExtendableSearchBarDelegete> {

	FBNearbyPlacesExtendableSearchBar* _searchBar;
	id<FBNearbyPlacesBaseViewWithTopSearchBarViewDelegete> _delegate;
	UITableView* _tableView;
	UIView* _contentView;

}

@property (assign,nonatomic,__weak) id<FBNearbyPlacesBaseViewWithTopSearchBarViewDelegete> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UITextField * searchTextField; 
@property (nonatomic,readonly) UITextField * locationTextField; 
@property (nonatomic,readonly) UIButton * filterButton; 
@property (nonatomic,readonly) UITableView * tableView;                                                           //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,readonly) UIView * contentView;                                                              //@synthesize contentView=_contentView - In the implementation block
-(UITextField *)searchTextField;
-(void)updateBaseViewSearchBarWithState:(unsigned long long)arg1 useAnimation:(BOOL)arg2 ;
-(void)setContentView:(id)arg1 withAnimation:(unsigned long long)arg2 ;
-(BOOL)isSearchBarInAnimation;
-(void)nearbyPlacesExtendableSearchBarDidTapOnSearchBarContentView;
-(void)toggleIconForSearchTextField:(BOOL)arg1 ;
-(void)toggleIconForLocationTextField:(BOOL)arg1 ;
-(UITextField *)locationTextField;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<FBNearbyPlacesBaseViewWithTopSearchBarViewDelegete>)arg1 ;
-(void)layoutSubviews;
-(id<FBNearbyPlacesBaseViewWithTopSearchBarViewDelegete>)delegate;
-(UIView *)contentView;
-(UITableView *)tableView;
-(UIButton *)filterButton;
@end

