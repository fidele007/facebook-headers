/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBSectionComponentTrackerWrapper, FBProfileSectionComponentChangesetWriter;

@interface FBPeopleCardSectionComponentTracker : NSObject {

	FBSectionComponentTrackerWrapper* _sectionComponentTracker;
	FBProfileSectionComponentChangesetWriter* _changesetWriter;

}
-(void)componentWillAppear;
-(void)didRequestReload;
-(id)initWithSectionStartIndex:(unsigned long long)arg1 session:(id)arg2 displaySurface:(id)arg3 shouldShowViewProfileFooter:(BOOL)arg4 shouldShowProtile:(BOOL)arg5 shouldShowProtileWithFeaturedPhoto:(BOOL)arg6 shouldHideFriendsTile:(BOOL)arg7 shouldShowPublicPosts:(BOOL)arg8 toolbox:(id)arg9 writeInterface:(id)arg10 profileHeaderDownloadStatusListenerAnnouncer:(id)arg11 ;
-(void)readyForChangesets;
@end

