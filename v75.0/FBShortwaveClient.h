/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:57 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@class FBShortwaveClientListenerAnnouncer, NSString;

@interface FBShortwaveClient : NSObject {

	unique_ptr<facebook::shortwave::AsrClient, std::__1::default_delete<facebook::shortwave::AsrClient> >* _client;
	shared_ptr<facebook::shortwave::AsrTurn>* _turn;
	FBShortwaveClientListenerAnnouncer* _announcer;
	NSString* _fbTraceMeta;
	BOOL _streamIsOpen;
	BOOL _endOfSpeechDetection;
	NSString* _domain;

}

@property (nonatomic,copy) NSString * domain;                        //@synthesize domain=_domain - In the implementation block
@property (assign,nonatomic) BOOL streamIsOpen;                      //@synthesize streamIsOpen=_streamIsOpen - In the implementation block
@property (assign,nonatomic) BOOL endOfSpeechDetection;              //@synthesize endOfSpeechDetection=_endOfSpeechDetection - In the implementation block
-(id)initWithSession:(id)arg1 settings:(id)arg2 ;
-(void)setEndOfSpeechDetection:(BOOL)arg1 ;
-(BOOL)endOfSpeechDetection;
-(void)setFBTraceMeta:(id)arg1 ;
-(void)openStream;
-(void)sendAudioSamples:(short*)arg1 withLength:(unsigned long long)arg2 ;
-(BOOL)streamIsOpen;
-(void)setStreamIsOpen:(BOOL)arg1 ;
-(void)dealloc;
-(NSString *)domain;
-(void)closeStream;
-(id)initWithSession:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
-(void)setDomain:(NSString *)arg1 ;
@end

