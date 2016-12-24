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

@interface FBMessengerPlatformWebviewShareData : FBGraphQLInput {

	NSString* _clientMutationId;
	NSString* _actorId;
	NSString* _pageId;
	NSString* _messageText;
	NSString* _title;
	NSString* _subtitle;
	NSString* _imageURLString;
	NSString* _itemURLString;
	NSString* _buttonURLString;
	NSString* _buttonTitle;
	NSString* _trigger;
	NSArray* _threadIds;

}

@property (nonatomic,copy) NSString * clientMutationId;              //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                       //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) NSString * pageId;                        //@synthesize pageId=_pageId - In the implementation block
@property (nonatomic,copy) NSString * messageText;                   //@synthesize messageText=_messageText - In the implementation block
@property (nonatomic,copy) NSString * title;                         //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                      //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) NSString * imageURLString;                //@synthesize imageURLString=_imageURLString - In the implementation block
@property (nonatomic,copy) NSString * itemURLString;                 //@synthesize itemURLString=_itemURLString - In the implementation block
@property (nonatomic,copy) NSString * buttonURLString;               //@synthesize buttonURLString=_buttonURLString - In the implementation block
@property (nonatomic,copy) NSString * buttonTitle;                   //@synthesize buttonTitle=_buttonTitle - In the implementation block
@property (nonatomic,copy) NSString * trigger;                       //@synthesize trigger=_trigger - In the implementation block
@property (nonatomic,copy) NSArray * threadIds;                      //@synthesize threadIds=_threadIds - In the implementation block
-(void)setActorId:(NSString *)arg1 ;
-(void)setPageId:(NSString *)arg1 ;
-(void)setClientMutationId:(NSString *)arg1 ;
-(NSString *)imageURLString;
-(NSString *)pageId;
-(NSString *)clientMutationId;
-(void)setImageURLString:(NSString *)arg1 ;
-(NSString *)actorId;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)itemURLString;
-(void)setItemURLString:(NSString *)arg1 ;
-(NSString *)buttonURLString;
-(void)setButtonURLString:(NSString *)arg1 ;
-(void)setThreadIds:(NSArray *)arg1 ;
-(NSArray *)threadIds;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setMessageText:(NSString *)arg1 ;
-(void)setButtonTitle:(NSString *)arg1 ;
-(NSString *)buttonTitle;
-(NSString *)messageText;
-(void)setTrigger:(NSString *)arg1 ;
-(NSString *)trigger;
@end

