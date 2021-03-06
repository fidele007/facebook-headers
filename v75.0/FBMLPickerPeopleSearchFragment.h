/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/SRSingleViewFragmentController.h>
#import <UIKit/UITextFieldDelegate.h>
#import <Facebook/SRFragmentHostViewLisenter.h>
#import <Facebook/FBMLPeopleSearchViewResponder.h>
#import <Facebook/FBMLTextFieldResponder.h>

@protocol FBMLPickerPeopleSearchFragmentDelegate;
@class FBMLPeopleSearchView, FBMLPeopleSearchCell, FBImageDownloader, FBMLPopoverPresenter, NSSet, NSString, NSArray;

@interface FBMLPickerPeopleSearchFragment : SRSingleViewFragmentController <UITextFieldDelegate, SRFragmentHostViewLisenter, FBMLPeopleSearchViewResponder, FBMLTextFieldResponder> {

	FBMLPeopleSearchView* _searchView;
	FBMLPeopleSearchCell* _searchCell;
	FBImageDownloader* _imageDownloader;
	FBMLPopoverPresenter* _facePopoverPresenter;
	id<FBMLPickerPeopleSearchFragmentDelegate> _delegate;
	NSSet* _cannotUnselectUUIDs;

}

@property (assign,nonatomic,__weak) id<FBMLPickerPeopleSearchFragmentDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * searchText; 
@property (nonatomic,copy) NSArray * selectedUsers; 
@property (nonatomic,copy) NSSet * cannotUnselectUUIDs;                                               //@synthesize cannotUnselectUUIDs=_cannotUnselectUUIDs - In the implementation block
@property (nonatomic,readonly) BOOL isFirstResponder; 
@property (assign,nonatomic) BOOL hidePrompt; 
@property (nonatomic,copy) NSString * placeholderText; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)hidePrompt;
-(void)setHidePrompt:(BOOL)arg1 ;
-(id)initWithImageDownloader:(id)arg1 ;
-(NSSet *)cannotUnselectUUIDs;
-(NSArray *)selectedUsers;
-(void)setCannotUnselectUUIDs:(NSSet *)arg1 ;
-(void)_searchTextChanged:(id)arg1 ;
-(void)willMountToHost:(id)arg1 ;
-(void)didMountToHost:(id)arg1 ;
-(void)textFieldDidDeleteBackward:(id)arg1 ;
-(Class)classOfSingleCell;
-(double)heightOfSingleCell;
-(void)configureSingleCell:(id)arg1 ;
-(void)setSelectedUsers:(NSArray *)arg1 ;
-(void)_didXOutFacePopover:(id)arg1 ;
-(void)peopleSearchView:(id)arg1 didTapProfilePicView:(id)arg2 ;
-(void)peopleSearchViewDidTapSearchIcon:(id)arg1 ;
-(void)setDelegate:(id<FBMLPickerPeopleSearchFragmentDelegate>)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(id<FBMLPickerPeopleSearchFragmentDelegate>)delegate;
-(void)resignFirstResponder;
-(BOOL)isFirstResponder;
-(void)becomeFirstResponder;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(NSString *)searchText;
-(void)setSearchText:(NSString *)arg1 ;
-(NSString *)placeholderText;
-(void)setPlaceholderText:(NSString *)arg1 ;
@end

