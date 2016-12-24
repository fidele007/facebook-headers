/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol UIScrollViewDelegate, FBAlbumCollageGridCollectionViewCoordinatorDelegate;
@class UIScrollView, UICollectionView, FBKVOController, UIView, NSString;

@interface FBAlbumCollageGridCollectionViewCoordinator : NSObject <UIScrollViewDelegate> {

	UIScrollView* _scrollView;
	UICollectionView* _collectionView;
	FBKVOController* _KVOController;
	UIView* _contentCell;
	id<UIScrollViewDelegate> _forwardingScrollViewDelegate;
	CGPoint _previousCollectionViewContentOffset;
	BOOL _shouldOverrideScrollViewDelegate;
	id<FBAlbumCollageGridCollectionViewCoordinatorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBAlbumCollageGridCollectionViewCoordinatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCollectionView:(id)arg1 inScrollView:(id)arg2 shouldOverrideScrollViewDelegate:(BOOL)arg3 ;
-(void)_collectionViewContentSizeChanged:(id)arg1 ;
-(void)_collectionViewContentOffSetChanged:(id)arg1 ;
-(void)_processCollectionViewSizeFromScrollView:(id)arg1 ;
-(id)_contentCell;
-(double)contentDataSourceCellHeight;
-(void)setDelegate:(id<FBAlbumCollageGridCollectionViewCoordinatorDelegate>)arg1 ;
-(void)dealloc;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(id<FBAlbumCollageGridCollectionViewCoordinatorDelegate>)delegate;
-(void)invalidate;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
@end
