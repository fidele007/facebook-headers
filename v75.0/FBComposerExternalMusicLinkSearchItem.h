/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL, FBComposerExternalMusicLinkSearchPickerState;

@interface FBComposerExternalMusicLinkSearchItem : FBValueObject <NSCopying> {

	NSString* _musicName;
	NSString* _graphQLID;
	NSString* _musicSummary;
	NSString* _sourceString;
	NSString* _author;
	NSURL* _externalUrl;
	NSURL* _coverImageUrl;
	FBComposerExternalMusicLinkSearchPickerState* _pickerState;

}

@property (nonatomic,copy,readonly) NSString * musicName;                                                    //@synthesize musicName=_musicName - In the implementation block
@property (nonatomic,copy,readonly) NSString * graphQLID;                                                    //@synthesize graphQLID=_graphQLID - In the implementation block
@property (nonatomic,copy,readonly) NSString * musicSummary;                                                 //@synthesize musicSummary=_musicSummary - In the implementation block
@property (nonatomic,copy,readonly) NSString * sourceString;                                                 //@synthesize sourceString=_sourceString - In the implementation block
@property (nonatomic,copy,readonly) NSString * author;                                                       //@synthesize author=_author - In the implementation block
@property (nonatomic,copy,readonly) NSURL * externalUrl;                                                     //@synthesize externalUrl=_externalUrl - In the implementation block
@property (nonatomic,copy,readonly) NSURL * coverImageUrl;                                                   //@synthesize coverImageUrl=_coverImageUrl - In the implementation block
@property (nonatomic,copy,readonly) FBComposerExternalMusicLinkSearchPickerState * pickerState;              //@synthesize pickerState=_pickerState - In the implementation block
-(NSString *)graphQLID;
-(NSURL *)externalUrl;
-(FBComposerExternalMusicLinkSearchPickerState *)pickerState;
-(NSURL *)coverImageUrl;
-(NSString *)musicName;
-(NSString *)musicSummary;
-(NSString *)sourceString;
-(id)initWithMusicName:(id)arg1 graphQLID:(id)arg2 musicSummary:(id)arg3 sourceString:(id)arg4 author:(id)arg5 externalUrl:(id)arg6 coverImageUrl:(id)arg7 pickerState:(id)arg8 ;
-(NSString *)author;
@end

