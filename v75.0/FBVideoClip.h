/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:42 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AVAsset, FBVideoAssetEdits;

@interface FBVideoClip : NSObject <NSCopying> {

	AVAsset* _asset;
	FBVideoAssetEdits* _edits;
	GLKMatrix4 _playbackTransform;

}

@property (nonatomic,readonly) AVAsset * asset;                                                   //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) CGSize preferredSize; 
@property (nonatomic,retain) FBVideoAssetEdits * edits;                                           //@synthesize edits=_edits - In the implementation block
@property (nonatomic,readonly) SCD_Struct_FB101 timeRangeForAudioAndVideo; 
@property (nonatomic,readonly) _GLKMatrix4 playbackTransform;                                     //@synthesize playbackTransform=_playbackTransform - In the implementation block
@property (nonatomic,readonly) CGAffineTransform videoTrackTransform; 
@property (nonatomic,readonly) unsigned long long estimatedAssetByteCount; 
@property (nonatomic,readonly) unsigned long long estimatedAssetTranscodedByteCount; 
+(void)removeTemporaryFilesAtURLs:(id)arg1 ;
-(FBVideoAssetEdits *)edits;
-(void)setEdits:(FBVideoAssetEdits *)arg1 ;
-(CGAffineTransform)videoTrackTransform;
-(id)initWithAsset:(id)arg1 edits:(id)arg2 ;
-(unsigned long long)estimatedAssetByteCount;
-(unsigned long long)estimatedAssetTranscodedByteCount;
-(_GLKMatrix4)playbackTransform;
-(SCD_Struct_FB101)timeRangeForAudioAndVideo;
-(id)copyWithZone:(NSZone*)arg1 ;
-(AVAsset *)asset;
-(CGSize)preferredSize;
@end

