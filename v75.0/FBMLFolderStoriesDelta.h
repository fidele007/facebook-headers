/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface FBMLFolderStoriesDelta : NSObject {

	int _mutationSequence;
	NSArray* _sameObjectMappingItems;
	NSArray* _updateItems;
	NSArray* _updatedStoryCardItems;

}

@property (nonatomic,copy) NSArray * sameObjectMappingItems;              //@synthesize sameObjectMappingItems=_sameObjectMappingItems - In the implementation block
@property (nonatomic,copy) NSArray * updateItems;                         //@synthesize updateItems=_updateItems - In the implementation block
@property (nonatomic,copy) NSArray * updatedStoryCardItems;               //@synthesize updatedStoryCardItems=_updatedStoryCardItems - In the implementation block
@property (assign,nonatomic) int mutationSequence;                        //@synthesize mutationSequence=_mutationSequence - In the implementation block
-(void)setSameObjectMappingItems:(NSArray *)arg1 ;
-(void)setUpdateItems:(NSArray *)arg1 ;
-(NSArray *)sameObjectMappingItems;
-(int)mutationSequence;
-(NSArray *)updatedStoryCardItems;
-(void)setUpdatedStoryCardItems:(NSArray *)arg1 ;
-(void)setMutationSequence:(int)arg1 ;
-(NSArray *)updateItems;
@end

