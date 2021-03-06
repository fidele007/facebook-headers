/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol FBShareSheetHeaderDelegate;
@class UIView, UILabel, FBUserSession, UIButton;

@interface FBShareSheetHeaderView : UIView {

	UIView* _border;
	UIView* _bottomBorder;
	UILabel* _sectionLabel;
	FBUserSession* _session;
	UIView* _nuxView;
	UILabel* _nuxText;
	UIButton* _nuxCloseButton;
	BOOL _showNUX;
	id<FBShareSheetHeaderDelegate> _delegate;

}
-(void)_createNux;
-(void)_nuxClosed;
-(id)initWithSession:(id)arg1 title:(id)arg2 showNUX:(BOOL)arg3 delegate:(id)arg4 ;
-(void)layoutSubviews;
@end

