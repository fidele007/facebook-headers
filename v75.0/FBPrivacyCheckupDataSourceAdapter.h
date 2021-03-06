/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBComponentCollectionViewDataSource, FBUserSession, NSArray, NSString, FBPrivacySettingComposingSet;

@interface FBPrivacyCheckupDataSourceAdapter : NSObject {

	FBComponentCollectionViewDataSource* _dataSource;
	FBUserSession* _session;
	NSArray* _privacyCheckupItems;
	unsigned long long _queryType;
	NSString* _afterCursor;
	BOOL _canFetchMoreData;
	unsigned long long _loadingState;
	BOOL _showHeaderTopDivider;
	FBPrivacySettingComposingSet* _composingSet;

}
-(void)_updateLoadingState:(unsigned long long)arg1 ;
-(void)_fetchPrivacySettings;
-(void)_createDataSections;
-(void)_updateComposingSetForAllCheckupModels:(id)arg1 ;
-(id)_dataFromCheckupItems:(id)arg1 ;
-(void)insertItemsFromArray:(id)arg1 ;
-(unsigned long long)_currentProgressIndex;
-(id)initWithSession:(id)arg1 queryType:(unsigned long long)arg2 dataSource:(id)arg3 ;
-(void)fetchMoreData;
-(void)updateCheckupModel:(id)arg1 withCheckupItem:(id)arg2 ;
-(void)deleteCheckupModel:(id)arg1 withCheckupItem:(id)arg2 ;
-(void)reloadData;
@end

