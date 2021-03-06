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

@interface FBThreadCustomizationParams : FBGraphQLInput {

	NSString* _backgroundColor;
	NSString* _emoji;
	NSString* _themeColor;
	NSString* _incomingBubbleColor;
	NSString* _outgoingBubbleColor;
	NSString* _source;

}

@property (nonatomic,copy) NSString * backgroundColor;                  //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,copy) NSString * emoji;                            //@synthesize emoji=_emoji - In the implementation block
@property (nonatomic,copy) NSString * themeColor;                       //@synthesize themeColor=_themeColor - In the implementation block
@property (nonatomic,copy) NSString * incomingBubbleColor;              //@synthesize incomingBubbleColor=_incomingBubbleColor - In the implementation block
@property (nonatomic,copy) NSString * outgoingBubbleColor;              //@synthesize outgoingBubbleColor=_outgoingBubbleColor - In the implementation block
@property (nonatomic,copy) NSString * source;                           //@synthesize source=_source - In the implementation block
-(NSString *)themeColor;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)incomingBubbleColor;
-(void)setIncomingBubbleColor:(NSString *)arg1 ;
-(void)setOutgoingBubbleColor:(NSString *)arg1 ;
-(void)setThemeColor:(NSString *)arg1 ;
-(void)setBackgroundColor:(NSString *)arg1 ;
-(NSString *)backgroundColor;
-(NSString *)emoji;
-(void)setEmoji:(NSString *)arg1 ;
-(void)setSource:(NSString *)arg1 ;
-(NSString *)source;
-(NSString *)outgoingBubbleColor;
@end

