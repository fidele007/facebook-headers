/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:58 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBGraphQLInput.h>

@class NSString;

@interface FBAYMTTipSignature : FBGraphQLInput {

	NSString* _tipId;
	NSString* _channelGraphqlId;

}

@property (nonatomic,copy) NSString * tipId;                         //@synthesize tipId=_tipId - In the implementation block
@property (nonatomic,copy) NSString * channelGraphqlId;              //@synthesize channelGraphqlId=_channelGraphqlId - In the implementation block
-(void)setTipId:(NSString *)arg1 ;
-(void)setChannelGraphqlId:(NSString *)arg1 ;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)tipId;
-(NSString *)channelGraphqlId;
@end

