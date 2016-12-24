/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _FBReactionAdapterProfileHelperDelegate, FBQueriedProfileFieldsProtocol;
@class FBMemModelObject;

@interface _FBReactionCardAdapterProfileHelper : NSObject {

	id<_FBReactionAdapterProfileHelperDelegate> _delegate;
	FBMemModelObject*<FBQueriedProfileFieldsProtocol> _profile;

}

@property (assign,nonatomic,__weak) id<_FBReactionAdapterProfileHelperDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) FBMemModelObject*<FBQueriedProfileFieldsProtocol> profile;              //@synthesize profile=_profile - In the implementation block
-(id)initWithProfile:(id)arg1 attachmentView:(id)arg2 ;
-(void)attachmentTapped;
-(void)setDelegate:(id<_FBReactionAdapterProfileHelperDelegate>)arg1 ;
-(id<_FBReactionAdapterProfileHelperDelegate>)delegate;
-(FBMemModelObject*<FBQueriedProfileFieldsProtocol>)profile;
@end

