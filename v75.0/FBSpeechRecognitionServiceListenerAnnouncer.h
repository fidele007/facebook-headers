/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:57 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBAnnouncerBase.h>
#import <Facebook/FBSpeechRecognitionServiceListener.h>

@class NSString;

@interface FBSpeechRecognitionServiceListenerAnnouncer : FBAnnouncerBase <FBSpeechRecognitionServiceListener>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)onAudioUpdate:(short*)arg1 withLength:(unsigned long long)arg2 ;
-(void)onAudioInterruption:(unsigned long long)arg1 ;
-(void)onAudioError:(int)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end
