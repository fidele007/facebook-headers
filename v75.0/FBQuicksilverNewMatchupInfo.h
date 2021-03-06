/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface FBQuicksilverNewMatchupInfo : FBValueObject <NSCopying> {

	BOOL _hasPlayed;
	NSString* _threadId;
	NSString* _matchupName;
	NSString* _firstLine;
	NSString* _secondLine;
	NSArray* _participants;

}

@property (nonatomic,copy,readonly) NSString * threadId;                 //@synthesize threadId=_threadId - In the implementation block
@property (nonatomic,copy,readonly) NSString * matchupName;              //@synthesize matchupName=_matchupName - In the implementation block
@property (nonatomic,copy,readonly) NSString * firstLine;                //@synthesize firstLine=_firstLine - In the implementation block
@property (nonatomic,copy,readonly) NSString * secondLine;               //@synthesize secondLine=_secondLine - In the implementation block
@property (nonatomic,copy,readonly) NSArray * participants;              //@synthesize participants=_participants - In the implementation block
@property (nonatomic,readonly) BOOL hasPlayed;                           //@synthesize hasPlayed=_hasPlayed - In the implementation block
-(NSString *)matchupName;
-(BOOL)hasPlayed;
-(id)initWithThreadId:(id)arg1 matchupName:(id)arg2 firstLine:(id)arg3 secondLine:(id)arg4 participants:(id)arg5 hasPlayed:(BOOL)arg6 ;
-(NSString *)secondLine;
-(NSString *)firstLine;
-(NSArray *)participants;
-(NSString *)threadId;
@end

