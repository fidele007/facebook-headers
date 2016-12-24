/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol FBEventsDiscoverListFiltersViewDelegate;
@class NSString, UITableView;

@interface FBEventsDiscoverListFiltersView : UIView {

	NSString* _title;
	id<FBEventsDiscoverListFiltersViewDelegate> _delegate;
	UITableView* _tableView;

}

@property (nonatomic,readonly) UITableView * tableView;              //@synthesize tableView=_tableView - In the implementation block
-(id)initWithTitle:(id)arg1 delegate:(id)arg2 ;
-(void)_onApplyButtonTapped:(id)arg1 ;
-(void)_onClearButtonTapped:(id)arg1 ;
-(UITableView *)tableView;
-(void)_setupSubviews;
@end

