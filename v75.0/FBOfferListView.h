/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <Facebook/CKComponentSizeRangeProviding.h>

@class FBOfferListViewHeaderView, UITableView, NSString;

@interface FBOfferListView : UIView <CKComponentSizeRangeProviding> {

	FBOfferListViewHeaderView* _headerView;
	UITableView* _tableView;

}

@property (nonatomic,retain) FBOfferListViewHeaderView * headerView;              //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                             //@synthesize tableView=_tableView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CKSizeRange)sizeRangeForBoundingSize:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
-(FBOfferListViewHeaderView *)headerView;
-(void)setHeaderView:(FBOfferListViewHeaderView *)arg1 ;
@end

