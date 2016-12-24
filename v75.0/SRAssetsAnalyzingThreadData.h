/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:00 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableSet, NSMutableArray, NSHashTable;

@interface SRAssetsAnalyzingThreadData : NSObject {

	NSMutableDictionary* _metadataByAssetIdentifier;
	NSMutableSet* _deletedAssetIdentifiers;
	NSMutableArray* _platformAssetsWithPriorityToAnalyze;
	NSMutableArray* _logMessages;
	NSHashTable* _listenerSubscriptions;
	NSMutableSet* _updatedAssetIdentifiersSinceColdStart;

}

@property (nonatomic,retain) NSMutableDictionary * metadataByAssetIdentifier;                   //@synthesize metadataByAssetIdentifier=_metadataByAssetIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableSet * deletedAssetIdentifiers;                            //@synthesize deletedAssetIdentifiers=_deletedAssetIdentifiers - In the implementation block
@property (nonatomic,retain) NSMutableArray * platformAssetsWithPriorityToAnalyze;              //@synthesize platformAssetsWithPriorityToAnalyze=_platformAssetsWithPriorityToAnalyze - In the implementation block
@property (nonatomic,retain) NSMutableArray * logMessages;                                      //@synthesize logMessages=_logMessages - In the implementation block
@property (nonatomic,retain) NSHashTable * listenerSubscriptions;                               //@synthesize listenerSubscriptions=_listenerSubscriptions - In the implementation block
@property (nonatomic,retain) NSMutableSet * updatedAssetIdentifiersSinceColdStart;              //@synthesize updatedAssetIdentifiersSinceColdStart=_updatedAssetIdentifiersSinceColdStart - In the implementation block
-(NSMutableDictionary *)metadataByAssetIdentifier;
-(void)setMetadataByAssetIdentifier:(NSMutableDictionary *)arg1 ;
-(void)setDeletedAssetIdentifiers:(NSMutableSet *)arg1 ;
-(void)setPlatformAssetsWithPriorityToAnalyze:(NSMutableArray *)arg1 ;
-(void)setListenerSubscriptions:(NSHashTable *)arg1 ;
-(void)setUpdatedAssetIdentifiersSinceColdStart:(NSMutableSet *)arg1 ;
-(NSMutableArray *)platformAssetsWithPriorityToAnalyze;
-(NSMutableSet *)deletedAssetIdentifiers;
-(NSHashTable *)listenerSubscriptions;
-(NSMutableSet *)updatedAssetIdentifiersSinceColdStart;
-(NSMutableArray *)logMessages;
-(void)setLogMessages:(NSMutableArray *)arg1 ;
@end

