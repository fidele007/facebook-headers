/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:42 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBStoryStreamDataSourcePerfListener.h>

@class NSString;

@interface FBFeedEndToEndDisplayDebuggingLogger : NSObject <FBStoryStreamDataSourcePerfListener>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)loggerWithUserSession:(id)arg1 feedType:(long long)arg2 ;
-(void)dataSource:(id)arg1 willEnqueueChangesetToPreparationQueueFromSource:(id)arg2 ;
-(void)dataSource:(id)arg1 didEnqueueChangesetToPreparationQueueFromSource:(id)arg2 batchID:(unsigned long long)arg3 ;
-(void)dataSource:(id)arg1 didInsertEdges:(unsigned long long)arg2 fromSource:(id)arg3 ;
@end

