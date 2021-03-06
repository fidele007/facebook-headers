/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMagicStoryCollectionData, NSString;

@interface FBInlineComposerMagicStoryPrompt : FBValueObject <NSCopying> {

	BOOL _allowMultilineSubtitle;
	FBMagicStoryCollectionData* _collectionData;
	NSString* _privacyInfoText;
	NSString* _promptTitle;
	NSString* _promptSubtitle;

}

@property (nonatomic,copy,readonly) FBMagicStoryCollectionData * collectionData;              //@synthesize collectionData=_collectionData - In the implementation block
@property (nonatomic,readonly) BOOL allowMultilineSubtitle;                                   //@synthesize allowMultilineSubtitle=_allowMultilineSubtitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * privacyInfoText;                               //@synthesize privacyInfoText=_privacyInfoText - In the implementation block
@property (nonatomic,copy,readonly) NSString * promptTitle;                                   //@synthesize promptTitle=_promptTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * promptSubtitle;                                //@synthesize promptSubtitle=_promptSubtitle - In the implementation block
-(NSString *)promptSubtitle;
-(NSString *)promptTitle;
-(FBMagicStoryCollectionData *)collectionData;
-(NSString *)privacyInfoText;
-(id)initWithCollectionData:(id)arg1 allowMultilineSubtitle:(BOOL)arg2 privacyInfoText:(id)arg3 promptTitle:(id)arg4 promptSubtitle:(id)arg5 ;
-(BOOL)allowMultilineSubtitle;
@end

