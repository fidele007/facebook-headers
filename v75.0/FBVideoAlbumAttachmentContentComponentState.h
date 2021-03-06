/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBVideoAlbumAttachmentContentInfo;

@interface FBVideoAlbumAttachmentContentComponentState : FBValueObject <NSCopying> {

	FBVideoAlbumAttachmentContentInfo* _info;
	unsigned long long _playState;

}

@property (nonatomic,copy,readonly) FBVideoAlbumAttachmentContentInfo * info;              //@synthesize info=_info - In the implementation block
@property (nonatomic,readonly) unsigned long long playState;                               //@synthesize playState=_playState - In the implementation block
-(id)initWithInfo:(id)arg1 playState:(unsigned long long)arg2 ;
-(FBVideoAlbumAttachmentContentInfo *)info;
-(unsigned long long)playState;
@end

