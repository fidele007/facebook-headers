/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKComponentHostingViewDelegate.h>

@protocol FBGoodwillPinnedUnitCellControllerDelegate;
@class CKComponentHostingView, FBUserSession, FBFeedToolbox, FBMemCustomizedStory, NSString;

@interface FBGoodwillPinnedUnitCellController : NSObject <CKComponentHostingViewDelegate> {

	id<FBGoodwillPinnedUnitCellControllerDelegate> _delegate;
	CKComponentHostingView* _componentHostingView;
	FBUserSession* _session;
	FBFeedToolbox* _toolbox;
	FBMemCustomizedStory* _model;

}

@property (nonatomic,retain) FBMemCustomizedStory * model;              //@synthesize model=_model - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)componentHostingViewDidInvalidateSize:(id)arg1 ;
-(id)componentView;
-(id)initWithFeedComponentToolbox:(id)arg1 session:(id)arg2 delegate:(id)arg3 ;
-(FBMemCustomizedStory *)model;
-(void)setModel:(FBMemCustomizedStory *)arg1 ;
-(double)cellHeightForWidth:(double)arg1 ;
@end
