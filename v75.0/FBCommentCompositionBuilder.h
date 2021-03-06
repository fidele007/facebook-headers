/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@class FBCommentPublishTarget, NSString, NSArray, NSData, FBCompositionLinkShare;

@interface FBCommentCompositionBuilder : NSObject {

	FBCommentPublishTarget* _publishTarget;
	NSString* _authorGraphQLID;
	NSString* _body;
	NSArray* _mentions;
	NSArray* _hashtags;
	NSData* _photoData;
	NSString* _videoAssetID;
	CGSize _videoSize;
	NSString* _videoFBID;
	FBCompositionLinkShare* _linkShare;
	NSString* _stickerGraphQLID;
	NSString* _gifUrlString;
	NSString* _vodVideoTimestamp;
	NSString* _liveVideoTimestamp;
	BOOL _isPrivate;

}
+(id)commentComposition;
+(id)commentCompositionWithComment:(id)arg1 ;
+(id)commentCompositionFromExistingCommentComposition:(id)arg1 ;
-(id)withBody:(id)arg1 ;
-(id)withAuthorGraphQLID:(id)arg1 ;
-(id)withMentions:(id)arg1 ;
-(id)withHashtags:(id)arg1 ;
-(id)withPublishTarget:(id)arg1 ;
-(id)withLiveVideoTimestamp:(id)arg1 ;
-(id)withVodVideoTimestamp:(id)arg1 ;
-(id)withStickerGraphQLID:(id)arg1 ;
-(id)withVideoAssetID:(id)arg1 ;
-(id)withVideoSize:(CGSize)arg1 ;
-(id)withIsPrivate:(BOOL)arg1 ;
-(id)withGifUrlString:(id)arg1 ;
-(id)withPhotoData:(id)arg1 ;
-(id)withVideoFBID:(id)arg1 ;
-(id)withLinkShare:(id)arg1 ;
-(id)build;
@end

