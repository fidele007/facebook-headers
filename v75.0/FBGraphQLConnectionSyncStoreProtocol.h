/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class FBScenePath;


@protocol FBGraphQLConnectionSyncStoreProtocol <NSObject>
@property (nonatomic,retain) FBScenePath * scenePath; 
@required
-(FBScenePath *)scenePath;
-(void)setScenePath:(id)arg1;
-(void)syncNext:(/*^block*/id)arg1;
-(id)allNodes;
-(void)forceRefresh:(/*^block*/id)arg1;
-(BOOL)canSyncMoreNext;
-(unsigned long long)countOfNodes;
-(unsigned long long)indexOfNode:(id)arg1;
-(void)applyFilter:(id)arg1;
-(BOOL)nodeIsSynced:(id)arg1;
-(BOOL)canSyncMorePrevious;
-(void)syncPrevious:(/*^block*/id)arg1;
-(void)updateNodes:(id)arg1;
-(void)cancelSync;
-(BOOL)isSyncing;
-(void)removeListener:(id)arg1;
-(void)addListener:(id)arg1;
-(id)nodeAtIndex:(unsigned long long)arg1;

@end

