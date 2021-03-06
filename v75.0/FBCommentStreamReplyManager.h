/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBCommentStreamReloadableProtocol.h>
#import <Facebook/FBCommentStreamDisabling.h>
#import <Facebook/FBCommentStreamDimmable.h>

@class FBUserSession, FBCommentReplyPreviewConfiguration, FBCommentStreamComponentDescriptor, FBCommentStreamCommentStateManager, FBCommentStreamSource, FBMemComment, NSString;

@interface FBCommentStreamReplyManager : NSObject <FBCommentStreamReloadableProtocol, FBCommentStreamDisabling, FBCommentStreamDimmable> {

	FBUserSession* _userSession;
	FBCommentReplyPreviewConfiguration* _replyPreviewConfiguration;
	FBCommentStreamComponentDescriptor* _replyDescriptor;
	FBCommentStreamCommentStateManager* _stateManager;
	FBCommentStreamSource* _replySource;
	BOOL _disabled;
	BOOL _dimmed;
	FBMemComment* _reply;

}

@property (nonatomic,retain) FBMemComment * reply;                                 //@synthesize reply=_reply - In the implementation block
@property (nonatomic,readonly) id<FBCommentStreamChildSource> source;              //@synthesize replySource=_replySource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL disabled;                                        //@synthesize disabled=_disabled - In the implementation block
@property (assign,nonatomic) BOOL dimmed;                                          //@synthesize dimmed=_dimmed - In the implementation block
-(id)initWithUserSession:(id)arg1 ;
-(void)reloadSources;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(id<FBCommentStreamChildSource>)source;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)disabled;
-(void)setDisabled:(BOOL)arg1 ;
-(FBMemComment *)reply;
-(void)setReply:(FBMemComment *)arg1 ;
-(void)setDimmed:(BOOL)arg1 ;
-(BOOL)dimmed;
@end

