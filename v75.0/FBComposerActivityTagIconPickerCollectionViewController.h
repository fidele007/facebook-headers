/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UICollectionViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>

@protocol FBComposerActivityTagIconPickerCollectionViewControllerDelegate;
@class NSMutableDictionary, FBTypedNSArrayOfFBActivityIcon, FBTaggableActivityComposition, FBUserSession, NSString;

@interface FBComposerActivityTagIconPickerCollectionViewController : UICollectionViewController <UICollectionViewDataSource, UICollectionViewDelegate> {

	NSMutableDictionary* _allIconImages;
	FBTypedNSArrayOfFBActivityIcon* _allIcons;
	FBTaggableActivityComposition* _composition;
	FBTypedNSArrayOfFBActivityIcon* _customIcons;
	FBUserSession* _session;
	id<FBComposerActivityTagIconPickerCollectionViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBComposerActivityTagIconPickerCollectionViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithComposition:(id)arg1 customIcons:(id)arg2 session:(id)arg3 ;
-(void)setDelegate:(id<FBComposerActivityTagIconPickerCollectionViewControllerDelegate>)arg1 ;
-(id<FBComposerActivityTagIconPickerCollectionViewControllerDelegate>)delegate;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)loadView;
-(void)viewDidLoad;
@end

