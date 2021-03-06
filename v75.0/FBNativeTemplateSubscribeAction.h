/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/NTAction.h>

@class FBNativeTemplateContext, NSDictionary, NSString;

@interface FBNativeTemplateSubscribeAction : NSObject <NTAction> {

	FBNativeTemplateContext* _context;
	NSDictionary* _model;
	NSString* _key;
	NSString* _clientData;

}

@property (nonatomic,readonly) FBNativeTemplateContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * model;                      //@synthesize model=_model - In the implementation block
@property (nonatomic,copy,readonly) NSString * key;                            //@synthesize key=_key - In the implementation block
@property (nonatomic,copy,readonly) NSString * clientData;                     //@synthesize clientData=_clientData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newWithModel:(id)arg1 context:(id)arg2 ;
+(Class)controllerClass;
-(NSString *)key;
-(void)invalidate;
-(FBNativeTemplateContext *)context;
-(NSDictionary *)model;
-(void)performAction;
-(NSString *)clientData;
@end

