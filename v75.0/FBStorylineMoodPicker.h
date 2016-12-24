/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UICollectionView.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <Facebook/FBStorylineMoodCategoryCellDelegate.h>

@protocol FBStorylineMoodPickerDelegate;
@class NSArray, NSString, NSMutableDictionary, FBUserSession;

@interface FBStorylineMoodPicker : UICollectionView <UICollectionViewDataSource, UICollectionViewDelegate, FBStorylineMoodCategoryCellDelegate> {

	NSArray* _moods;
	NSString* _selectedMoodKey;
	NSMutableDictionary* _audioIdentifierToItem;
	FBUserSession* _session;
	BOOL _shouldShowCategoryButton;
	NSString* _defaultMoodID;
	id<FBStorylineMoodPickerDelegate> _moodPickerDelegate;

}

@property (nonatomic,copy) NSArray * moods;                                                            //@synthesize moods=_moods - In the implementation block
@property (nonatomic,copy) NSString * defaultMoodID;                                                   //@synthesize defaultMoodID=_defaultMoodID - In the implementation block
@property (nonatomic,copy) NSString * selectedMoodKey;                                                 //@synthesize selectedMoodKey=_selectedMoodKey - In the implementation block
@property (assign,nonatomic,__weak) id<FBStorylineMoodPickerDelegate> moodPickerDelegate;              //@synthesize moodPickerDelegate=_moodPickerDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)defaultMoodID;
-(id)initWithFrame:(CGRect)arg1 collectionViewLayout:(id)arg2 session:(id)arg3 ;
-(NSString *)selectedMoodKey;
-(void)setMoodPickerDelegate:(id<FBStorylineMoodPickerDelegate>)arg1 ;
-(void)setMoods:(NSArray *)arg1 ;
-(void)setSelectedMoodKey:(NSString *)arg1 ;
-(void)setDefaultMoodID:(NSString *)arg1 ;
-(void)storylineMoodCategoryCellDidTapCell:(id)arg1 ;
-(NSArray *)moods;
-(void)_setSelectedMoodKey:(id)arg1 skipIfMoodKeyIsNotNull:(BOOL)arg2 ;
-(id<FBStorylineMoodPickerDelegate>)moodPickerDelegate;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)reset;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3 ;
@end

