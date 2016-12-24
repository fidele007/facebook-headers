/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class UIView, CALayer, FBSegmentedView, UITableView, FBRichTextView, FBAnimatedProgressBarView;

@interface FBEventGuestMessageListView : UIView {

	UIView* _separatorView;
	CALayer* _divider;
	FBSegmentedView* _segmentedView;
	UITableView* _tableView;
	double _topOffset;
	FBRichTextView* _remainingInvitesLabel;
	FBAnimatedProgressBarView* _progressBar;
	long long _viewState;

}

@property (nonatomic,retain) FBSegmentedView * segmentedView;                       //@synthesize segmentedView=_segmentedView - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                               //@synthesize tableView=_tableView - In the implementation block
@property (assign,nonatomic) double topOffset;                                      //@synthesize topOffset=_topOffset - In the implementation block
@property (nonatomic,readonly) FBRichTextView * remainingInvitesLabel;              //@synthesize remainingInvitesLabel=_remainingInvitesLabel - In the implementation block
@property (nonatomic,retain) FBAnimatedProgressBarView * progressBar;               //@synthesize progressBar=_progressBar - In the implementation block
@property (assign,nonatomic) long long viewState;                                   //@synthesize viewState=_viewState - In the implementation block
-(FBSegmentedView *)segmentedView;
-(void)setViewState:(long long)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(FBRichTextView *)remainingInvitesLabel;
-(void)setSegmentedView:(FBSegmentedView *)arg1 ;
-(void)setViewState:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
-(void)setTopOffset:(double)arg1 ;
-(double)topOffset;
-(long long)viewState;
-(FBAnimatedProgressBarView *)progressBar;
-(void)setProgressBar:(FBAnimatedProgressBarView *)arg1 ;
@end
