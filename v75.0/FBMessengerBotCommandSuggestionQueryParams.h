/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:58 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBGraphQLInput.h>

@class NSString, FBMessengerThreadData;

@interface FBMessengerBotCommandSuggestionQueryParams : FBGraphQLInput {

	NSString* _text;
	FBMessengerThreadData* _thread;

}

@property (nonatomic,copy) NSString * text;                             //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) FBMessengerThreadData * thread;              //@synthesize thread=_thread - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setThread:(FBMessengerThreadData *)arg1 ;
-(FBMessengerThreadData *)thread;
@end

