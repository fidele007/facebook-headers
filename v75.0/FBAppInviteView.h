/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class UITableView, FBPullToRefreshView;

@interface FBAppInviteView : UIView {

	UITableView* _tableView;
	FBPullToRefreshView* _ptrView;
	double _topGuideLength;

}

@property (nonatomic,readonly) UITableView * tableView;                    //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,readonly) FBPullToRefreshView * ptrView;              //@synthesize ptrView=_ptrView - In the implementation block
@property (assign,nonatomic) double topGuideLength;                        //@synthesize topGuideLength=_topGuideLength - In the implementation block
-(FBPullToRefreshView *)ptrView;
-(double)topGuideLength;
-(void)setTopGuideLength:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UITableView *)tableView;
@end

