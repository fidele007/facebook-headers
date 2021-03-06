/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:45 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FBComposerAlbumPublishButtonTextBehaviour, FBComposerPostContentTypePublishButtonTextBehaviour;

@interface FBComposerPublishButtonTextBehaviour : NSObject <NSCoding, NSCopying> {

	unsigned long long _subtype;
	NSString* _static_buttonTitle;
	FBComposerAlbumPublishButtonTextBehaviour* _changeWhenPublishingToAlbum_behaviour;
	FBComposerPostContentTypePublishButtonTextBehaviour* _changeWithPostContentType_behaviour;
	FBComposerAlbumPublishButtonTextBehaviour* _changeWithAlbumOrPostContentType_albumBehaviour;
	FBComposerPostContentTypePublishButtonTextBehaviour* _changeWithAlbumOrPostContentType_postContentTypeBehaviour;

}
+(id)staticWithButtonTitle:(id)arg1 ;
+(id)changeWhenPublishingToAlbumWithBehaviour:(id)arg1 ;
+(id)changeWithAlbumOrPostContentTypeWithAlbumBehaviour:(id)arg1 postContentTypeBehaviour:(id)arg2 ;
+(id)changeWithPostContentTypeWithBehaviour:(id)arg1 ;
-(void)matchStatic:(/*^block*/id)arg1 changeWhenPublishingToAlbum:(/*^block*/id)arg2 changeWithPostContentType:(/*^block*/id)arg3 changeWithAlbumOrPostContentType:(/*^block*/id)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

