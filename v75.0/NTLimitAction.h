/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:01 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/NTAction.h>

@protocol NTAction;
@class NSDictionary, NSString;

@interface NTLimitAction : NSObject <NTAction> {

	long long _limit;
	id<NTAction> _childAction;
	NSDictionary* _model;

}

@property (nonatomic,readonly) long long limit;                        //@synthesize limit=_limit - In the implementation block
@property (nonatomic,readonly) id<NTAction> childAction;               //@synthesize childAction=_childAction - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * model;              //@synthesize model=_model - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newWithModel:(id)arg1 context:(id)arg2 ;
+(id)childModelNames;
+(Class)controllerClass;
-(id<NTAction>)childAction;
-(NSDictionary *)model;
-(void)performAction;
-(long long)limit;
@end

