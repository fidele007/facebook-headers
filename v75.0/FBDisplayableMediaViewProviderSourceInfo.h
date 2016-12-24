/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBDisplayableMedia;
#import <Facebook/Facebook-Structs.h>
@interface FBDisplayableMediaViewProviderSourceInfo : NSObject {

	id<FBDisplayableMedia> _media;
	CGImageRef _contents;
	unsigned long long _contentsImageFlag;

}

@property (nonatomic,readonly) id<FBDisplayableMedia> media;                      //@synthesize media=_media - In the implementation block
@property (nonatomic,readonly) CGImageRef contents;                               //@synthesize contents=_contents - In the implementation block
@property (nonatomic,readonly) unsigned long long contentsImageFlag;              //@synthesize contentsImageFlag=_contentsImageFlag - In the implementation block
-(id)initWithMedia:(id)arg1 contents:(CGImageRef)arg2 contentsImageFlag:(unsigned long long)arg3 ;
-(unsigned long long)contentsImageFlag;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(CGImageRef)contents;
-(id<FBDisplayableMedia>)media;
@end

