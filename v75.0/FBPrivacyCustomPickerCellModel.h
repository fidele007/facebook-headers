/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBComposerPrivacySetting, FBMemPerson;

@interface FBPrivacyCustomPickerCellModel : NSObject <NSCopying> {

	unsigned long long _subtype;
	FBComposerPrivacySetting* _fBPrivacyCustomPickerModelFriendList_friendList;
	BOOL _fBPrivacyCustomPickerModelFriendList_selected;
	long long _fBPrivacyCustomPickerModelFriendList_sectionIndex;
	unsigned long long _fBPrivacyCustomPickerModelFriendList_editableType;
	FBMemPerson* _fBPrivacyCustomPickerModelPerson_person;
	BOOL _fBPrivacyCustomPickerModelPerson_selected;
	long long _fBPrivacyCustomPickerModelPerson_sectionIndex;
	unsigned long long _fBPrivacyCustomPickerModelPerson_editableType;

}
+(id)fBPrivacyCustomPickerModelLoadingCell;
+(id)fBPrivacyCustomPickerModelFriendListWithFriendList:(id)arg1 selected:(BOOL)arg2 sectionIndex:(long long)arg3 editableType:(unsigned long long)arg4 ;
+(id)fBPrivacyCustomPickerModelPersonWithPerson:(id)arg1 selected:(BOOL)arg2 sectionIndex:(long long)arg3 editableType:(unsigned long long)arg4 ;
-(void)matchFBPrivacyCustomPickerModelFriendList:(/*^block*/id)arg1 fBPrivacyCustomPickerModelPerson:(/*^block*/id)arg2 fBPrivacyCustomPickerModelLoadingCell:(/*^block*/id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
