/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:59 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBGraphQLInput.h>

@class NSString;

@interface FBTipJarTipEventSubscribeData : FBGraphQLInput {

	NSString* _clientSubscriptionId;
	NSString* _videoId;
	NSString* _videoBroadcastId;

}

@property (nonatomic,copy) NSString * clientSubscriptionId;              //@synthesize clientSubscriptionId=_clientSubscriptionId - In the implementation block
@property (nonatomic,copy) NSString * videoId;                           //@synthesize videoId=_videoId - In the implementation block
@property (nonatomic,copy) NSString * videoBroadcastId;                  //@synthesize videoBroadcastId=_videoBroadcastId - In the implementation block
-(void)setClientSubscriptionId:(NSString *)arg1 ;
-(void)setVideoId:(NSString *)arg1 ;
-(void)setVideoBroadcastId:(NSString *)arg1 ;
-(NSString *)videoId;
-(NSString *)clientSubscriptionId;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)videoBroadcastId;
@end

