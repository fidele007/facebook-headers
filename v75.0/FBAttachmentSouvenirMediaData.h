/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:58 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBGraphQLInput.h>

@class NSString, NSArray;

@interface FBAttachmentSouvenirMediaData : FBGraphQLInput {

	NSString* _mediaType;
	NSArray* _mediaIds;
	NSString* _highlightedState;

}

@property (nonatomic,copy) NSString * mediaType;                     //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,copy) NSArray * mediaIds;                       //@synthesize mediaIds=_mediaIds - In the implementation block
@property (nonatomic,copy) NSString * highlightedState;              //@synthesize highlightedState=_highlightedState - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSArray *)mediaIds;
-(void)setMediaIds:(NSArray *)arg1 ;
-(NSString *)highlightedState;
-(void)setHighlightedState:(NSString *)arg1 ;
-(NSString *)mediaType;
-(void)setMediaType:(NSString *)arg1 ;
@end

