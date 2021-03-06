/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:44 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FB360VideoOverlayState : NSObject <NSCopying> {

	BOOL _expanded;
	BOOL _playing;
	BOOL _waitingForPlayback;
	BOOL _hasBegunPlayback;
	BOOL _controlsDimmed;
	BOOL _shouldDisplayGyroIndicator;
	BOOL _shouldDisplayMovementNux;

}

@property (assign,nonatomic) BOOL expanded;                                //@synthesize expanded=_expanded - In the implementation block
@property (assign,nonatomic) BOOL playing;                                 //@synthesize playing=_playing - In the implementation block
@property (assign,nonatomic) BOOL waitingForPlayback;                      //@synthesize waitingForPlayback=_waitingForPlayback - In the implementation block
@property (assign,nonatomic) BOOL hasBegunPlayback;                        //@synthesize hasBegunPlayback=_hasBegunPlayback - In the implementation block
@property (assign,nonatomic) BOOL controlsDimmed;                          //@synthesize controlsDimmed=_controlsDimmed - In the implementation block
@property (assign,nonatomic) BOOL shouldDisplayGyroIndicator;              //@synthesize shouldDisplayGyroIndicator=_shouldDisplayGyroIndicator - In the implementation block
@property (assign,nonatomic) BOOL shouldDisplayMovementNux;                //@synthesize shouldDisplayMovementNux=_shouldDisplayMovementNux - In the implementation block
-(void)setShouldDisplayGyroIndicator:(BOOL)arg1 ;
-(void)setControlsDimmed:(BOOL)arg1 ;
-(void)setWaitingForPlayback:(BOOL)arg1 ;
-(void)setShouldDisplayMovementNux:(BOOL)arg1 ;
-(void)setHasBegunPlayback:(BOOL)arg1 ;
-(BOOL)controlsDimmed;
-(BOOL)waitingForPlayback;
-(BOOL)hasBegunPlayback;
-(BOOL)shouldDisplayMovementNux;
-(BOOL)shouldDisplayGyroIndicator;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setExpanded:(BOOL)arg1 ;
-(BOOL)expanded;
-(BOOL)playing;
-(void)setPlaying:(BOOL)arg1 ;
@end

