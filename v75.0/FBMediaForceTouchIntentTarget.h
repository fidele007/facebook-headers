/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:42 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBIntentTarget.h>

@protocol FBQueriedMediaFieldsProtocol;
@class FBMemModelObject, FBMemAlbum, NSArray;

@interface FBMediaForceTouchIntentTarget : FBIntentTarget {

	BOOL _onlyUseAlbumItemsForPreviewing;
	FBMemModelObject*<FBQueriedMediaFieldsProtocol> _mediaItem;
	FBMemAlbum* _album;
	NSArray* _albumItems;
	/*^block*/id _committingBlock;

}

@property (nonatomic,retain) FBMemModelObject*<FBQueriedMediaFieldsProtocol> mediaItem;              //@synthesize mediaItem=_mediaItem - In the implementation block
@property (nonatomic,copy) FBMemAlbum * album;                                                       //@synthesize album=_album - In the implementation block
@property (nonatomic,copy) NSArray * albumItems;                                                     //@synthesize albumItems=_albumItems - In the implementation block
@property (assign,nonatomic) BOOL onlyUseAlbumItemsForPreviewing;                                    //@synthesize onlyUseAlbumItemsForPreviewing=_onlyUseAlbumItemsForPreviewing - In the implementation block
@property (nonatomic,copy) id committingBlock;                                                       //@synthesize committingBlock=_committingBlock - In the implementation block
+(id)mediaForceTouchTargetWithMediaItem:(id)arg1 album:(id)arg2 albumItems:(id)arg3 ;
+(id)mediaForceTouchTargetWithMediaItem:(id)arg1 album:(id)arg2 albumItems:(id)arg3 onlyUseAlbumItemsForPreviewing:(BOOL)arg4 ;
-(BOOL)onlyUseAlbumItemsForPreviewing;
-(id)committingBlock;
-(void)setCommittingBlock:(id)arg1 ;
-(void)setOnlyUseAlbumItemsForPreviewing:(BOOL)arg1 ;
-(FBMemAlbum *)album;
-(void)setAlbum:(FBMemAlbum *)arg1 ;
-(FBMemModelObject*<FBQueriedMediaFieldsProtocol>)mediaItem;
-(void)setMediaItem:(FBMemModelObject*<FBQueriedMediaFieldsProtocol>)arg1 ;
-(void)setAlbumItems:(NSArray *)arg1 ;
-(NSArray *)albumItems;
@end
