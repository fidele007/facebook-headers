/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface FBTemporaryDeletionIndexPathTranslator : NSObject {

	NSMutableDictionary* _temporaryDeletedItems;

}
-(BOOL)originalIndexPathIsDeleted:(id)arg1 ;
-(void)restoreOriginalIndexPath:(id)arg1 ;
-(id)adjustedIndexPathsForOriginalIndexPaths:(id)arg1 ;
-(long long)deletedItemsInSection:(long long)arg1 ;
-(id)originalIndexPathForAdjustedIndexPath:(id)arg1 ;
-(void)removeOriginalIndexPath:(id)arg1 ;
-(long long)_numItemsLessThanIndexPath:(id)arg1 ;
-(long long)_transformIndexPath:(id)arg1 ;
-(id)adjustedIndexPathForOriginalIndexPath:(id)arg1 ;
-(id)originalIndexPathsForAdjustedIndexPaths:(id)arg1 ;
-(id)init;
@end
