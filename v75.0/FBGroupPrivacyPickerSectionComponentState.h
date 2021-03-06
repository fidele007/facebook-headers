/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FBGroupPrivacyPickerSectionComponentState : NSObject {

	NSString* _privacy;
	NSString* _parentGroupName;

}

@property (nonatomic,copy,readonly) NSString * privacy;                      //@synthesize privacy=_privacy - In the implementation block
@property (nonatomic,copy,readonly) NSString * parentGroupName;              //@synthesize parentGroupName=_parentGroupName - In the implementation block
+(id)initialState;
-(NSString *)privacy;
-(id)initWithPrivacy:(id)arg1 parentGroupName:(id)arg2 ;
-(NSString *)parentGroupName;
@end

