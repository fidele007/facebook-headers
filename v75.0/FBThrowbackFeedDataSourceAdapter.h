/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBGraphQLConnectionStoreListener.h>
#import <Facebook/FBGraphQLConnectionControllerListener.h>

@protocol FBSectionedDataSourceWriting;
@class FBThrowbackFeedModel, NSString, FBMemImage, FBMemGoodwillThrowbackAccentImagesConnection, NSMutableDictionary, NSMutableOrderedSet;

@interface FBThrowbackFeedDataSourceAdapter : NSObject <FBGraphQLConnectionStoreListener, FBGraphQLConnectionControllerListener> {

	id<FBSectionedDataSourceWriting> _writeInterface;
	long long _nextItemInContentSection;
	FBThrowbackFeedModel* _currentContentInContentSection;
	long long _headerNotificationItem;
	BOOL _hadUpdatedHeader;
	BOOL _hadSetupFooter;
	NSString* _footerText;
	FBMemImage* _footerImage;
	FBMemGoodwillThrowbackAccentImagesConnection* _accentImages;
	NSMutableDictionary* _contentSectionToNumOfEdges;
	NSMutableOrderedSet* _contentSectionkeys;
	FBMemImage* _headerImage;

}

@property (nonatomic,retain) FBMemImage * headerImage;              //@synthesize headerImage=_headerImage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)graphQLConnectionControllerDidFinishAttemptingToRestoreFirstPersistedPage:(id)arg1 ;
-(void)graphQLConnectionController:(id)arg1 didModifyPreviousState:(id)arg2 byInsertingChunkAtIndex:(unsigned long long)arg3 userInfo:(id)arg4 ;
-(void)graphQLConnectionController:(id)arg1 didModifyPreviousState:(id)arg2 byRemovingChunksAtIndexes:(id)arg3 userInfo:(id)arg4 ;
-(void)graphQLConnectionController:(id)arg1 didModifyPreviousState:(id)arg2 byMergingChunkAtIndexWithPrecedingChunk:(unsigned long long)arg3 userInfo:(id)arg4 ;
-(void)graphQLConnectionController:(id)arg1 didModifyPreviousState:(id)arg2 byInsertingEdgesAtIndexPaths:(id)arg3 userInfo:(id)arg4 ;
-(void)graphQLConnectionController:(id)arg1 didModifyPreviousState:(id)arg2 byRemovingEdgesAtIndexPaths:(id)arg3 deletionReason:(id)arg4 ;
-(void)graphQLConnectionController:(id)arg1 didModifyPreviousState:(id)arg2 byUpdatingEdgesAtIndexPaths:(id)arg3 userInfo:(id)arg4 ;
-(void)graphQLConnectionController:(id)arg1 didModifyPreviousState:(id)arg2 byUpdatingLocations:(id)arg3 userInfo:(id)arg4 ;
-(void)graphQLConnectionStoreDidFinishAttemptingToRestoreFirstPersistedPage:(id)arg1 ;
-(void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byInsertingChunkAtIndex:(unsigned long long)arg3 userInfo:(id)arg4 ;
-(void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byRemovingChunksAtIndexes:(id)arg3 userInfo:(id)arg4 ;
-(void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byMergingChunkAtIndexWithPrecedingChunk:(unsigned long long)arg3 userInfo:(id)arg4 ;
-(void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byInsertingEdgesAtIndexPaths:(id)arg3 userInfo:(id)arg4 ;
-(void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byRemovingEdgesAtIndexPaths:(id)arg3 deletionReason:(id)arg4 ;
-(void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byUpdatingEdgesAtIndexPaths:(id)arg3 userInfo:(id)arg4 ;
-(void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byUpdatingLocations:(id)arg3 userInfo:(id)arg4 ;
-(void)appendThrowbackResponse:(id)arg1 hasNextPage:(BOOL)arg2 notificationType:(unsigned long long)arg3 ;
-(void)_updateHeaderForItems:(Items*)arg1 notificationType:(unsigned long long)arg2 responseData:(id)arg3 promoEdge:(id)arg4 ;
-(id)_modelObjectFromEdge:(id)arg1 ;
-(unsigned long long)_getSectionHeaderTypeWithKey:(id)arg1 ;
-(void)_insertContent:(id)arg1 toItemsInContentSection:(Items*)arg2 ;
-(unsigned long long)_firstNonHeaderContentItem;
-(IndexPath)_dataSourceIndexPathFromContentSectionKey:(id)arg1 ;
-(IndexPath)_dataSourceIndexPathFromGraphQLConnectionStoreIndexPath:(id)arg1 sectionKey:(id)arg2 ;
-(void)_updateItems:(Items*)arg1 withSectionToRemovingNumOfEdges:(id)arg2 ;
-(void)_graphQLConnection:(id)arg1 didModifyPreviousState:(id)arg2 byRemovingEdgesAtIndexPaths:(id)arg3 deletionReason:(id)arg4 ;
-(id)initWithConnection:(id)arg1 writeInterface:(id)arg2 ;
-(void)resetThrowbackResponse:(id)arg1 hasNextPage:(BOOL)arg2 notificationType:(unsigned long long)arg3 ;
-(void)removeHeaderNotification;
-(void)willReloadDataSource;
-(void)_reset;
-(FBMemImage *)headerImage;
-(void)setHeaderImage:(FBMemImage *)arg1 ;
@end
