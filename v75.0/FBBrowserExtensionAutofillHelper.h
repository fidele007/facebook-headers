/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBBrowserExtensionAutofillHelper : NSObject
+(id)filteredAutofillData:(id)arg1 forAutofillTags:(id)arg2 ;
+(BOOL)isGroup:(id)arg1 equalToObject:(id)arg2 ;
+(BOOL)joinStringIfNonEmpty:(id)arg1 withJoinString:(id)arg2 toBaseString:(id)arg3 ;
+(id)_autofillTagsForGroupType:(id)arg1 ;
+(id)autofillGroupTypeFromSelectedField:(id)arg1 ;
+(id)subsetOfAutofillTags:(id)arg1 inGroupType:(id)arg2 ;
+(id)autofillGroupsThatHaveAnyRequestedTags:(id)arg1 ;
+(id)allAutofillGroupsForGroupType:(id)arg1 requestedAutofillTags:(id)arg2 withAutofillMultiRecordCache:(id)arg3 ;
+(id)autofillGroupForGroupType:(id)arg1 autofillData:(id)arg2 requestedAutofillTags:(id)arg3 ;
+(BOOL)isAutofillGroup:(id)arg1 displaySubsetOfAnyAutofillGroups:(id)arg2 ;
+(BOOL)isDictionary:(id)arg1 subsetOfDictionary:(id)arg2 ;
+(BOOL)isAutofillGroup:(id)arg1 subsetOfAnyAutofillGroups:(id)arg2 ;
+(id)autofillGroupTypesInOrder;
+(id)autofillTagsInOrder;
@end

