/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBEntityCardsDataSource.h>
#import <Facebook/FBEntityCardsCollectionDataSourceProtocol.h>

@class FBUserSession, CLLocation, NSArray, FBEntityFetcher, NSString;

@interface FBEntityCardsSimpleDataSource : NSObject <FBEntityCardsDataSource, FBEntityCardsCollectionDataSourceProtocol> {

	FBUserSession* _session;
	CLLocation* _location;
	NSArray* _entitiesOrEntityIDs;
	unsigned long long _selectedEntityIndex;
	FBEntityFetcher* _fetcher;
	NSString* displaySurface;
	NSString* displaySurfaceSourceId;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long initialEntityIndex; 
@property (nonatomic,copy) NSString * displaySurface; 
@property (nonatomic,copy) NSString * displaySurfaceSourceId; 
-(NSString *)displaySurface;
-(void)setDisplaySurface:(NSString *)arg1 ;
-(void)setDisplaySurfaceSourceId:(NSString *)arg1 ;
-(NSString *)displaySurfaceSourceId;
-(unsigned long long)initialEntityIndex;
-(BOOL)entityCardsViewController:(id)arg1 canLoadEntitiesInScrollDirection:(unsigned long long)arg2 pageSize:(unsigned long long*)arg3 ;
-(BOOL)areAllEntitiesSupported:(id)arg1 ;
-(id)initialEntitiesForPageSize:(unsigned long long*)arg1 ;
-(id)initialEntityIDsForPageSize:(unsigned long long*)arg1 ;
-(void)entityCardsViewController:(id)arg1 loadInitialEntitiesWithContextItems:(unsigned long long)arg2 pageSize:(unsigned long long)arg3 batchLoadBlock:(/*^block*/id)arg4 ;
-(void)entityCardsViewController:(id)arg1 loadEntitiesInScrollDirection:(unsigned long long)arg2 pageSize:(unsigned long long)arg3 contextItemCount:(unsigned long long)arg4 loadBlock:(/*^block*/id)arg5 ;
-(void)setEntitiesOrIDs:(id)arg1 displayIndex:(unsigned long long)arg2 ;
-(void)entityCardsViewController:(id)arg1 loadEntitiesForIDs:(id)arg2 contextItemCount:(unsigned long long)arg3 loadBlock:(/*^block*/id)arg4 ;
-(id)_queryToFetchEntitiesWithContextItems:(unsigned long long)arg1 ;
-(id)initWithEntities:(id)arg1 selectedEntityIndex:(unsigned long long)arg2 location:(id)arg3 session:(id)arg4 ;
@end

