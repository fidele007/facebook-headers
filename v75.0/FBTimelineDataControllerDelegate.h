/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBTimelineDataControllerDelegate <NSObject>
@optional
-(unsigned long long)timelineHeaderIndexOfGraphQLQueryForConsistentValuesUpdate;

@required
-(void)timelineDataController:(id)arg1 targetDidChange:(id)arg2;
-(void)timelineDataControllerDidFailSyncing:(id)arg1;
-(id)timelineHeaderGraphQLQueriesForTargetID:(id)arg1;
-(void)timelineDataController:(id)arg1 didDownloadTimelineSections:(id)arg2;
-(void)timelineDataControllerDidFinishSyncing:(id)arg1;
-(void)timelineDataController:(id)arg1 targetDidUpdate:(id)arg2;
-(id)logName;

@end

