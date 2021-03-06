/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBPagePublisherBarViewProvider, FBPagePublisherBarView;
@class FBUserSession, UIView;

@interface FBPageOthersPostsPublisherBarViewProvider : NSObject {

	FBUserSession* _session;
	id<FBPagePublisherBarViewProvider> _publisherBarViewProvider;
	UIView*<FBPagePublisherBarView> _publisherBarView;

}
-(id)composerViewWithPageFBID:(id)arg1 delegate:(id)arg2 navigationCoordinator:(id)arg3 timelineHeaderTableView:(id)arg4 hasWritePost:(BOOL)arg5 hasSharePhoto:(BOOL)arg6 canMessage:(BOOL)arg7 ;
-(void)setDelegate:(id)arg1 ;
-(id)initWithSession:(id)arg1 ;
@end

