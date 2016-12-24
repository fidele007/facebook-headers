/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBTimelineActionButton.h>

@protocol FBQueriedProfileFieldsProtocol;
@class FBMemModelObject;

@interface FBTimelineSubscribeButton : FBTimelineActionButton {

	FBMemModelObject*<FBQueriedProfileFieldsProtocol> _person;

}

@property (nonatomic,copy) FBMemModelObject*<FBQueriedProfileFieldsProtocol> person;              //@synthesize person=_person - In the implementation block
-(void)_configureButton;
-(id)initWithFrame:(CGRect)arg1 person:(id)arg2 session:(id)arg3 ;
-(void)setPerson:(FBMemModelObject*<FBQueriedProfileFieldsProtocol>)arg1 ;
-(FBMemModelObject*<FBQueriedProfileFieldsProtocol>)person;
@end
