/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBQueriedActorFieldsProtocol, FBIntentHandler;
@class FBMemComment, NSString, FBMemModelObject, FBMemPrivateReplyContext;

@interface FBPagePrivateReplyButtonHelper : NSObject {

	unsigned long long _privateReplyButtonEnum;
	FBMemComment* _comment;
	NSString* _commentGraphQLID;
	FBMemModelObject*<FBQueriedActorFieldsProtocol> _commentAuthor;
	FBMemPrivateReplyContext* _commentPrivateReplyContext;
	id<FBIntentHandler> _intentHandler;

}

@property (nonatomic,readonly) BOOL shouldShowButton; 
@property (nonatomic,readonly) BOOL adminCanReply; 
@property (nonatomic,readonly) BOOL adminDidReply; 
@property (nonatomic,copy,readonly) NSString * buttonTitleText; 
@property (nonatomic,readonly) unsigned long long buttonTitleColor; 
-(id)initWithComment:(id)arg1 intentHandler:(id)arg2 ;
-(BOOL)shouldShowButton;
-(NSString *)buttonTitleText;
-(void)adminDidTapOnPrivateReplyButton;
-(void)_adminDidRequestNewPrivateReply;
-(void)_adminDidRequestExistingPrivateReply;
-(BOOL)adminCanReply;
-(BOOL)adminDidReply;
-(unsigned long long)buttonTitleColor;
@end

