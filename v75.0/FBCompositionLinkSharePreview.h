/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMemStoryAttachment, FBMusicSong, FBMemExternalMusicAlbum;

@interface FBCompositionLinkSharePreview : NSObject <NSCoding, NSCopying> {

	unsigned long long _subtype;
	FBMemStoryAttachment* _storyAttachment;
	FBMusicSong* _musicSong_song;
	FBMusicSong* _musicAlbum_song;
	FBMemExternalMusicAlbum* _musicAlbum_albumMetadata;

}
+(id)musicAlbumWithSong:(id)arg1 albumMetadata:(id)arg2 ;
+(id)musicSongWithSong:(id)arg1 ;
+(id)storyAttachment:(id)arg1 ;
+(id)none;
-(void)matchNone:(/*^block*/id)arg1 storyAttachment:(/*^block*/id)arg2 musicSong:(/*^block*/id)arg3 musicAlbum:(/*^block*/id)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

