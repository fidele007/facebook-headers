/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:03 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class NSDictionary, UILabel, UITableView, FBMemoryProfilerTextField, FBMemoryProfilerSegmentedControl, UIButton;

@interface FBMemoryProfilerView : UIView {

	NSDictionary* _attributes;
	UILabel* _residentMemory;
	UITableView* _tableView;
	FBMemoryProfilerTextField* _subwordFilter;
	FBMemoryProfilerSegmentedControl* _sortControl;
	UIButton* _hideButton;
	UIButton* _markGenerationButton;

}

@property (nonatomic,readonly) UITableView * tableView;                                     //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,readonly) FBMemoryProfilerTextField * subwordFilter;                   //@synthesize subwordFilter=_subwordFilter - In the implementation block
@property (nonatomic,readonly) FBMemoryProfilerSegmentedControl * sortControl;              //@synthesize sortControl=_sortControl - In the implementation block
@property (nonatomic,readonly) UIButton * hideButton;                                       //@synthesize hideButton=_hideButton - In the implementation block
@property (nonatomic,readonly) UIButton * markGenerationButton;                             //@synthesize markGenerationButton=_markGenerationButton - In the implementation block
-(UIButton *)hideButton;
-(void)setResidentMemory:(id)arg1 ;
-(FBMemoryProfilerTextField *)subwordFilter;
-(FBMemoryProfilerSegmentedControl *)sortControl;
-(UIButton *)markGenerationButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UITableView *)tableView;
@end

