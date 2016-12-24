/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL;

@interface FBComposerExternalMusicLinkSearchPickerState : FBValueObject <NSCopying> {

	NSString* _musicSearchTerm;
	NSURL* _selectedMusicUrl;

}

@property (nonatomic,copy,readonly) NSString * musicSearchTerm;              //@synthesize musicSearchTerm=_musicSearchTerm - In the implementation block
@property (nonatomic,copy,readonly) NSURL * selectedMusicUrl;                //@synthesize selectedMusicUrl=_selectedMusicUrl - In the implementation block
-(id)initWithMusicSearchTerm:(id)arg1 selectedMusicUrl:(id)arg2 ;
-(NSURL *)selectedMusicUrl;
-(NSString *)musicSearchTerm;
@end
