/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:58 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBGraphQLInput.h>

@class FBNodeSavedStateActionContext;

@interface FBNodeSavedStateAdditionalParams : FBGraphQLInput {

	FBNodeSavedStateActionContext* _eventActionContext;

}

@property (nonatomic,copy) FBNodeSavedStateActionContext * eventActionContext;              //@synthesize eventActionContext=_eventActionContext - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(FBNodeSavedStateActionContext *)eventActionContext;
-(void)setEventActionContext:(FBNodeSavedStateActionContext *)arg1 ;
@end
