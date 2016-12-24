/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>

@protocol FBPaymentsHorizontalActorListViewDelegate;
@class FBUserSession, UICollectionView, NSArray, NSString;

@interface FBPaymentsHorizontalActorListView : UIView <UICollectionViewDelegate, UICollectionViewDataSource> {

	FBUserSession* _session;
	UICollectionView* _collectionView;
	NSArray* _actors;
	id<FBPaymentsHorizontalActorListViewDelegate> _delegate;

}

@property (nonatomic,copy) NSArray * actors;                                                             //@synthesize actors=_actors - In the implementation block
@property (assign,nonatomic,__weak) id<FBPaymentsHorizontalActorListViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)height;
-(void)setDelegate:(id<FBPaymentsHorizontalActorListViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<FBPaymentsHorizontalActorListViewDelegate>)delegate;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(NSArray *)actors;
-(void)setActors:(NSArray *)arg1 ;
-(id)initWithSession:(id)arg1 ;
@end

