/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:45 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBAnnouncerBase.h>
#import <Facebook/FBComposerMentionDecoratorListener.h>

@class NSString;

@interface FBComposerMentionDecoratorListenerAnnouncer : FBAnnouncerBase <FBComposerMentionDecoratorListener>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)mentionDecorator:(id)arg1 hasSuggestedMentions:(id)arg2 ;
-(void)mentionDecorator:(id)arg1 selectedMention:(id)arg2 ;
-(void)mentionDecoratorDidAbortProgressiveMentionalizing:(id)arg1 ;
-(void)mentionDecoratorCommittedMentionsDidChange:(id)arg1 withChange:(id)arg2 ;
-(void)mentionDecoratorDidFinishFetchingResults:(id)arg1 ;
-(void)mentionDecorator:(id)arg1 didChangeTextInTextView:(id)arg2 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

