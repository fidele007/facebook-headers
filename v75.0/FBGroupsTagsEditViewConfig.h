/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBGroupsTagsEditViewConfig : FBValueObject <NSCopying> {

	BOOL _shouldShowBannerView;
	BOOL _shouldShowAddTagsSubtitle;
	BOOL _shouldShowSearchGlyphInTagsField;
	BOOL _shouldShowPlaceholderTextInTagsField;
	BOOL _shouldShowProfilePictureInTypeaheadList;
	NSString* _title;
	unsigned long long _maximumNumberOfTagsToShow;
	NSString* _tagsQueryContentType;

}

@property (nonatomic,copy,readonly) NSString * title;                                     //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowBannerView;                                 //@synthesize shouldShowBannerView=_shouldShowBannerView - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowAddTagsSubtitle;                            //@synthesize shouldShowAddTagsSubtitle=_shouldShowAddTagsSubtitle - In the implementation block
@property (nonatomic,readonly) unsigned long long maximumNumberOfTagsToShow;              //@synthesize maximumNumberOfTagsToShow=_maximumNumberOfTagsToShow - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowSearchGlyphInTagsField;                     //@synthesize shouldShowSearchGlyphInTagsField=_shouldShowSearchGlyphInTagsField - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowPlaceholderTextInTagsField;                 //@synthesize shouldShowPlaceholderTextInTagsField=_shouldShowPlaceholderTextInTagsField - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowProfilePictureInTypeaheadList;              //@synthesize shouldShowProfilePictureInTypeaheadList=_shouldShowProfilePictureInTypeaheadList - In the implementation block
@property (nonatomic,copy,readonly) NSString * tagsQueryContentType;                      //@synthesize tagsQueryContentType=_tagsQueryContentType - In the implementation block
-(BOOL)shouldShowBannerView;
-(unsigned long long)maximumNumberOfTagsToShow;
-(BOOL)shouldShowPlaceholderTextInTagsField;
-(BOOL)shouldShowSearchGlyphInTagsField;
-(id)initWithTitle:(id)arg1 shouldShowBannerView:(BOOL)arg2 shouldShowAddTagsSubtitle:(BOOL)arg3 maximumNumberOfTagsToShow:(unsigned long long)arg4 shouldShowSearchGlyphInTagsField:(BOOL)arg5 shouldShowPlaceholderTextInTagsField:(BOOL)arg6 shouldShowProfilePictureInTypeaheadList:(BOOL)arg7 tagsQueryContentType:(id)arg8 ;
-(BOOL)shouldShowAddTagsSubtitle;
-(BOOL)shouldShowProfilePictureInTypeaheadList;
-(NSString *)tagsQueryContentType;
-(NSString *)title;
@end

