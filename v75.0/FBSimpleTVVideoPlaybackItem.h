/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface FBSimpleTVVideoPlaybackItem : FBValueObject <NSCopying, NSCoding> {

	NSString* _videoID;
	NSString* _payload;
	double _position;

}

@property (nonatomic,copy,readonly) NSString * videoID;              //@synthesize videoID=_videoID - In the implementation block
@property (nonatomic,copy,readonly) NSString * payload;              //@synthesize payload=_payload - In the implementation block
@property (nonatomic,readonly) double position;                      //@synthesize position=_position - In the implementation block
-(NSString *)videoID;
-(id)initWithVideoID:(id)arg1 payload:(id)arg2 position:(double)arg3 ;
-(NSString *)payload;
-(double)position;
@end

