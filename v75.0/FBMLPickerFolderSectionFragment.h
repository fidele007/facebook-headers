/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/SRCompositeFragmentController.h>
#import <Facebook/FBMLPickerSectionFragmentProtocol.h>

@class NSString, FBMLPickerTitleLabelFragment, FBMLPickerSectionSeeMoreEntryFragment, SRVerticalStackFragmentController, NSArray, SRStickyHeaderLayoutFragment;

@interface FBMLPickerFolderSectionFragment : SRCompositeFragmentController <FBMLPickerSectionFragmentProtocol> {

	NSString* _sessionUserUUID;
	FBMLPickerTitleLabelFragment* _headerFragment;
	FBMLPickerSectionSeeMoreEntryFragment* _seeMoreFrag;
	SRVerticalStackFragmentController* _contentFragment;
	NSArray* _folderEntryFragments;
	long long _seeMoreCountThreshold;
	BOOL _showSearchFragments;
	BOOL _isSearchFragment;
	SRStickyHeaderLayoutFragment* _stickyHeaderLayout;
	NSString* _title;
	NSString* _searchText;

}

@property (nonatomic,readonly) SRStickyHeaderLayoutFragment * stickyHeaderLayout;              //@synthesize stickyHeaderLayout=_stickyHeaderLayout - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                                          //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSArray * folderEntryFragments;                            //@synthesize folderEntryFragments=_folderEntryFragments - In the implementation block
@property (nonatomic,readonly) BOOL isSearchFragment;                                          //@synthesize isSearchFragment=_isSearchFragment - In the implementation block
@property (nonatomic,copy,readonly) NSString * searchText;                                     //@synthesize searchText=_searchText - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSearchText:(id)arg1 showSearchFragments:(BOOL)arg2 ;
-(NSArray *)folderEntryFragments;
-(id)initWithSessionUserUUID:(id)arg1 title:(id)arg2 folderEntryFragments:(id)arg3 isSearchFragment:(BOOL)arg4 seeMoreFragment:(id)arg5 seeMoreCountThreshold:(long long)arg6 ;
-(SRStickyHeaderLayoutFragment *)stickyHeaderLayout;
-(void)_configureHidden;
-(BOOL)_shouldHideSeeMore;
-(BOOL)_doesFolderThumb:(id)arg1 matchKeywords:(id)arg2 ;
-(BOOL)isSearchFragment;
-(id)layoutFragment;
-(NSString *)title;
-(NSString *)searchText;
@end
