/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBAppDetailComponentCell.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <Facebook/FBLongTextExpandableViewDelegate.h>

@protocol FBAppDetailDescriptionCellDelegate;
@class UITableView, NSArray, FBAppDetailDescriptionSocialSummaryCell, FBLongTextExpandableCell, NSString;

@interface FBAppDetailDescriptionCell : FBAppDetailComponentCell <UITableViewDelegate, UITableViewDataSource, FBLongTextExpandableViewDelegate> {

	UITableView* _appDescriptionTableView;
	NSArray* _tableViewCells;
	FBAppDetailDescriptionSocialSummaryCell* _appSocialSummaryCell;
	FBLongTextExpandableCell* _appLongDescCell;
	id<FBAppDetailDescriptionCellDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBAppDetailDescriptionCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)tappedURL:(id)arg1 ;
-(void)_setupTableViewCells;
-(void)setDescription;
-(void)setDelegate:(id<FBAppDetailDescriptionCellDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)reload;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBAppDetailDescriptionCellDelegate>)delegate;
-(id)borderImage;
@end

