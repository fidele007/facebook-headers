/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBGraphQLConnectionSyncStoreListener <NSObject>
@optional
-(void)connectionSyncStore:(id)arg1 didUpdateNodes:(id)arg2;
-(void)connectionSyncStore:(id)arg1 didAddNodesAtIndexes:(id)arg2;
-(void)connectionSyncStore:(id)arg1 didUpdateNodesAtIndexes:(id)arg2;
-(void)connectionSyncStore:(id)arg1 didRemoveNodesAtIndexes:(id)arg2;
-(void)connectionSyncStoreDidReachEnd:(id)arg1;
-(void)connectionSyncStoreDidReachStart:(id)arg1;
-(void)connectionSyncStoreDidChangeContent:(id)arg1;
-(void)connectionSyncStoreDidReplaceCache:(id)arg1;
-(void)connectionSyncStore:(id)arg1 willUseFirstCachedResponse:(BOOL)arg2;
-(void)connectionSyncStoreDidStartRequest:(id)arg1;
-(void)connectionSyncStoreDidFinishRequest:(id)arg1 error:(id)arg2;
-(void)connectionSyncStore:(id)arg1 requestProvider:(id)arg2 didReceiveResponse:(id)arg3 fromCache:(BOOL)arg4;
-(void)connectionSyncStoreWillPerformRequest:(id)arg1;

@end

