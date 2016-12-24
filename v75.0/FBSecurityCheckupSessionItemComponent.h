/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:42 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>

@class FBMemSecurityCheckupUserSession;

@interface FBSecurityCheckupSessionItemComponent : CKCompositeComponent {

	CKTypedComponentAction<> _selectAction;
	FBMemSecurityCheckupUserSession* _session;

}

@property (nonatomic,retain) FBMemSecurityCheckupUserSession * session;              //@synthesize session=_session - In the implementation block
+(id)newWithSession:(id)arg1 imageDownloader:(id)arg2 selectAction:(CKTypedComponentAction<>)arg3 selected:(BOOL)arg4 ;
-(void)toggleSelect;
-(FBMemSecurityCheckupUserSession *)session;
-(void)setSession:(FBMemSecurityCheckupUserSession *)arg1 ;
@end

