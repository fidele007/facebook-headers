/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBTimelineHeaderDownloaderDelegate <NSObject>
@required
-(id)timelineHeaderGraphQLQueriesForTargetID:(id)arg1 indexOfQueryForConsistentValuesUpdate:(out unsigned long long*)arg2;
-(void)headerDownloader:(id)arg1 didReceiveParsedResponse:(id)arg2 withDate:(id)arg3 isLastResponse:(BOOL)arg4;
-(void)headerDownloaderDidFailParsingNetworkResponse:(id)arg1;
-(void)headerDownloaderDidFinishNetworkRequest:(id)arg1;
-(id)logName;

@end

