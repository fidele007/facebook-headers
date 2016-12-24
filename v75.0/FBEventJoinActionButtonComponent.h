/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>
#import <Facebook/FIGCardContentLandscapeAttachmentRightCompliant.h>
#import <Facebook/FIGCardContentHScrollChildRightCompliant.h>

@class FBMemEvent, FBUserSession, FBEventAnalyticTracker, NSString;

@interface FBEventJoinActionButtonComponent : CKCompositeComponent <FIGCardContentLandscapeAttachmentRightCompliant, FIGCardContentHScrollChildRightCompliant> {

	FBMemEvent* _event;
	FBUserSession* _session;
	FBEventAnalyticTracker* _tracker;
	CKTypedComponentAction<> _didJoinAction;

}

@property (nonatomic,readonly) FBMemEvent * event;                                  //@synthesize event=_event - In the implementation block
@property (nonatomic,readonly) FBUserSession * session;                             //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) CKTypedComponentAction<> didJoinAction;              //@synthesize didJoinAction=_didJoinAction - In the implementation block
@property (nonatomic,readonly) FBEventAnalyticTracker * tracker;                    //@synthesize tracker=_tracker - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newWithEvent:(const FBEventJoinActionButtonComponentGraphQL*)arg1 options:(const FBEventJoinActionButtonOptions*)arg2 session:(id)arg3 tracker:(id)arg4 ;
-(FBEventAnalyticTracker *)tracker;
-(void)didTapJoin:(id)arg1 ;
-(CKTypedComponentAction<>)didJoinAction;
-(FBMemEvent *)event;
-(FBUserSession *)session;
@end

