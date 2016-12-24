/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UICollectionView.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>

@protocol FBStorylineMoodCategoryListViewDelegate;
@class FBUserSession, NSArray, NSString;

@interface FBStorylineMoodCategoryListView : UICollectionView <UICollectionViewDelegate, UICollectionViewDataSource> {

	FBUserSession* _session;
	id<FBStorylineMoodCategoryListViewDelegate> _categoryListViewDelegate;
	NSArray* _categories;

}

@property (assign,nonatomic,__weak) id<FBStorylineMoodCategoryListViewDelegate> categoryListViewDelegate;              //@synthesize categoryListViewDelegate=_categoryListViewDelegate - In the implementation block
@property (nonatomic,copy) NSArray * categories;                                                                       //@synthesize categories=_categories - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 collectionViewLayout:(id)arg2 session:(id)arg3 ;
-(void)setCategoryListViewDelegate:(id<FBStorylineMoodCategoryListViewDelegate>)arg1 ;
-(id<FBStorylineMoodCategoryListViewDelegate>)categoryListViewDelegate;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(NSArray *)categories;
-(void)setCategories:(NSArray *)arg1 ;
@end
