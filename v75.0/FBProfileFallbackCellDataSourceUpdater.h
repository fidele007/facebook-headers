/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBProfileFallbackCellDataSourceUpdaterDataSource, FBProfileFallbackCellDataSourceUpdaterDelegate;
@class NSMutableArray;

@interface FBProfileFallbackCellDataSourceUpdater : NSObject {

	BOOL _initialRowsAndSectionsAdded;
	NSMutableArray* _currentSectionViewModels;
	id<FBProfileFallbackCellDataSourceUpdaterDataSource> _dataSource;
	id<FBProfileFallbackCellDataSourceUpdaterDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBProfileFallbackCellDataSourceUpdaterDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<FBProfileFallbackCellDataSourceUpdaterDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
-(void)addInitialSectionsAndRowsIfNecessary;
-(void)applyUpdatesWithSizeInvalidated:(BOOL)arg1 ;
-(void)setDataSource:(id<FBProfileFallbackCellDataSourceUpdaterDataSource>)arg1 ;
-(void)setDelegate:(id<FBProfileFallbackCellDataSourceUpdaterDelegate>)arg1 ;
-(id)init;
-(id<FBProfileFallbackCellDataSourceUpdaterDataSource>)dataSource;
-(id<FBProfileFallbackCellDataSourceUpdaterDelegate>)delegate;
@end

