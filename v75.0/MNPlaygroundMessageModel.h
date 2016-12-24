/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:01 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface MNPlaygroundMessageModel : NSObject {

	BOOL _isFromMe;
	BOOL _shouldDisplayProfileImage;
	NSString* _messageId;
	NSString* _senderInitial;
	NSString* _messageBody;
	NSString* _receiptText;

}

@property (nonatomic,copy) NSString * messageId;                          //@synthesize messageId=_messageId - In the implementation block
@property (nonatomic,copy) NSString * senderInitial;                      //@synthesize senderInitial=_senderInitial - In the implementation block
@property (nonatomic,copy) NSString * messageBody;                        //@synthesize messageBody=_messageBody - In the implementation block
@property (nonatomic,copy) NSString * receiptText;                        //@synthesize receiptText=_receiptText - In the implementation block
@property (assign,nonatomic) BOOL isFromMe;                               //@synthesize isFromMe=_isFromMe - In the implementation block
@property (assign,nonatomic) BOOL shouldDisplayProfileImage;              //@synthesize shouldDisplayProfileImage=_shouldDisplayProfileImage - In the implementation block
-(NSString *)senderInitial;
-(void)setSenderInitial:(NSString *)arg1 ;
-(NSString *)receiptText;
-(void)setReceiptText:(NSString *)arg1 ;
-(void)setIsFromMe:(BOOL)arg1 ;
-(BOOL)shouldDisplayProfileImage;
-(void)setShouldDisplayProfileImage:(BOOL)arg1 ;
-(id)description;
-(NSString *)messageBody;
-(void)setMessageBody:(NSString *)arg1 ;
-(BOOL)isFromMe;
-(NSString *)messageId;
-(void)setMessageId:(NSString *)arg1 ;
@end
