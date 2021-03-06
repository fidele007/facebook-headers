/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FBMemTimelineContextListItem, FBMemPerson, FBMemTimelineContextListItemsConnection, FBProfileTileBasicInfo, NSArray;

@interface FBProfileTileModel : NSObject <NSCopying> {

	unsigned long long _subtype;
	NSString* _selfItems_title;
	FBMemTimelineContextListItem* _selfItems_contextListItem;
	BOOL _selfItems_isViewingSelf;
	BOOL _selfItems_shouldShowBottomLine;
	FBMemPerson* _selfItems_targetPerson;
	NSString* _about_title;
	FBMemTimelineContextListItemsConnection* _about_connection;
	BOOL _about_shouldCollapseItems;
	long long _about_cellType;
	BOOL _about_isViewingSelf;
	FBMemPerson* _about_targetPerson;
	BOOL _about_shouldHideContextListItemNux;
	FBProfileTileBasicInfo* _friendsGrid_basicInfo;
	NSArray* _friendsGrid_friends;
	FBProfileTileBasicInfo* _friendsHScroll_basicInfo;
	NSArray* _friendsHScroll_friends;
	FBProfileTileBasicInfo* _photosMosaic_basicInfo;
	FBProfileTileBasicInfo* _photosHScroll_basicInfo;
	FBProfileTileBasicInfo* _videosMosaic_basicInfo;
	NSString* _bottomLabel_title;
	NSString* _bioBelowName_bio;
	BOOL _bioBelowName_shouldShowBottomLine;

}
+(id)sectionPlaceholder;
+(id)bottomLabelWithTitle:(id)arg1 ;
+(id)aboutWithTitle:(id)arg1 connection:(id)arg2 shouldCollapseItems:(BOOL)arg3 cellType:(long long)arg4 isViewingSelf:(BOOL)arg5 targetPerson:(id)arg6 shouldHideContextListItemNux:(BOOL)arg7 ;
+(id)bioBelowNameWithBio:(id)arg1 shouldShowBottomLine:(BOOL)arg2 ;
+(id)friendsGridWithBasicInfo:(id)arg1 friends:(id)arg2 ;
+(id)friendsHScrollWithBasicInfo:(id)arg1 friends:(id)arg2 ;
+(id)photosHScrollWithBasicInfo:(id)arg1 ;
+(id)photosMosaicWithBasicInfo:(id)arg1 ;
+(id)selfItemsWithTitle:(id)arg1 contextListItem:(id)arg2 isViewingSelf:(BOOL)arg3 shouldShowBottomLine:(BOOL)arg4 targetPerson:(id)arg5 ;
+(id)videosMosaicWithBasicInfo:(id)arg1 ;
+(id)loading;
-(void)matchSelfItems:(/*^block*/id)arg1 about:(/*^block*/id)arg2 friendsGrid:(/*^block*/id)arg3 friendsHScroll:(/*^block*/id)arg4 photosMosaic:(/*^block*/id)arg5 photosHScroll:(/*^block*/id)arg6 videosMosaic:(/*^block*/id)arg7 bottomLabel:(/*^block*/id)arg8 loading:(/*^block*/id)arg9 bioBelowName:(/*^block*/id)arg10 sectionPlaceholder:(/*^block*/id)arg11 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

