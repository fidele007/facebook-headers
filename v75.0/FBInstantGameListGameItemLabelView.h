/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class FBInstantGameListUIMetrics, FBUserSession, UILabel, NSMutableArray, NSString, NSArray;

@interface FBInstantGameListGameItemLabelView : UIView {

	FBInstantGameListUIMetrics* _metrics;
	FBUserSession* _session;
	UILabel* _titleLabel;
	NSMutableArray* _socialRowViews;
	NSMutableArray* _tagViews;
	NSString* _gameName;
	NSArray* _gameTags;
	NSArray* _socialInfos;

}
-(void)_initSocialRowViews;
-(void)_initTagViews;
-(void)_resetTagViews;
-(void)_updateTags:(id)arg1 ;
-(void)_resetSocialRowViews;
-(void)_updateSocialRowViews:(id)arg1 ;
-(void)setGameName:(id)arg1 gameTags:(id)arg2 socialInfos:(id)arg3 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithSession:(id)arg1 ;
@end

