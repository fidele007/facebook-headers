/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBEntityCardsDataSource.h>
#import <Facebook/FBEntityCardsCollectionDataSourceProtocol.h>

@protocol FBEntityCardsCollectionPageDownloading;
@class NSString, FBUserSession, NSMutableArray, CLLocation, NSError;

@interface FBEntityCardsCollectionDataSource : NSObject <FBEntityCardsDataSource, FBEntityCardsCollectionDataSourceProtocol> {

	FBUserSession* _session;
	NSMutableArray* _entities;
	unsigned long long _selectedEntityIndex;
	CLLocation* _location;
	NSRange _initialEntityRange;
	NSRange _loadedEntitiesRange;
	id<FBEntityCardsCollectionPageDownloading> _collectionPageDownloader;
	NSError* _initialLoadError;
	BOOL _hasOutstandingRequest;
	NSString* displaySurface;
	NSString* displaySurfaceSourceId;

}

@property (assign,nonatomic) BOOL hasOutstandingRequest;                           //@synthesize hasOutstandingRequest=_hasOutstandingRequest - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long initialEntityIndex; 
@property (nonatomic,copy) NSString * displaySurface; 
@property (nonatomic,copy) NSString * displaySurfaceSourceId; 
+(id)dataSourceWithForEntities:(id)arg1 selectedEntityIndex:(unsigned long long)arg2 location:(id)arg3 requestProvider:(id)arg4 tailPageInfo:(id)arg5 session:(id)arg6 ;
-(NSString *)displaySurface;
-(void)setDisplaySurface:(NSString *)arg1 ;
-(void)setDisplaySurfaceSourceId:(NSString *)arg1 ;
-(NSString *)displaySurfaceSourceId;
-(id)initWithPageDownloader:(id)arg1 entities:(id)arg2 selectedEntityIndex:(unsigned long long)arg3 location:(id)arg4 session:(id)arg5 ;
-(void)setInitialEntities:(id)arg1 selectedIndex:(unsigned long long)arg2 ;
-(void)setHasOutstandingRequest:(BOOL)arg1 ;
-(id)_entityIDsForRange:(NSRange)arg1 ;
-(unsigned long long)initialEntityIndex;
-(void)_initialEntitesLoaded:(id)arg1 isComplete:(BOOL)arg2 error:(id)arg3 networkStats:(id)arg4 batchLoadBlock:(/*^block*/id)arg5 ;
-(BOOL)entityCardsViewController:(id)arg1 canLoadEntitiesInScrollDirection:(unsigned long long)arg2 pageSize:(unsigned long long*)arg3 ;
-(void)_loadCompletedForEntities:(id)arg1 entitiesRange:(NSRange)arg2 error:(id)arg3 networkStats:(id)arg4 loadBlock:(/*^block*/id)arg5 ;
-(BOOL)areAllEntitiesSupported:(id)arg1 ;
-(void)_updateEntities:(id)arg1 atRange:(NSRange)arg2 ;
-(id)initialEntitiesForPageSize:(unsigned long long*)arg1 ;
-(id)initialEntityIDsForPageSize:(unsigned long long*)arg1 ;
-(void)entityCardsViewController:(id)arg1 loadInitialEntitiesWithContextItems:(unsigned long long)arg2 pageSize:(unsigned long long)arg3 batchLoadBlock:(/*^block*/id)arg4 ;
-(void)entityCardsViewController:(id)arg1 loadEntitiesInScrollDirection:(unsigned long long)arg2 pageSize:(unsigned long long)arg3 contextItemCount:(unsigned long long)arg4 loadBlock:(/*^block*/id)arg5 ;
-(void)setEntitiesOrIDs:(id)arg1 displayIndex:(unsigned long long)arg2 ;
-(void)entityCardsViewController:(id)arg1 loadEntitiesForIDs:(id)arg2 contextItemCount:(unsigned long long)arg3 loadBlock:(/*^block*/id)arg4 ;
-(BOOL)hasOutstandingRequest;
@end

