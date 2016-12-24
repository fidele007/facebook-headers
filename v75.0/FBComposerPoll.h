/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:45 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface FBComposerPoll : FBValueObject <NSCopying> {

	BOOL _canOthersAddOptions;
	BOOL _canOthersVoteOnMultipleOptions;
	NSArray* _pollOptions;

}

@property (nonatomic,copy,readonly) NSArray * pollOptions;                       //@synthesize pollOptions=_pollOptions - In the implementation block
@property (nonatomic,readonly) BOOL canOthersAddOptions;                         //@synthesize canOthersAddOptions=_canOthersAddOptions - In the implementation block
@property (nonatomic,readonly) BOOL canOthersVoteOnMultipleOptions;              //@synthesize canOthersVoteOnMultipleOptions=_canOthersVoteOnMultipleOptions - In the implementation block
-(NSArray *)pollOptions;
-(BOOL)canOthersAddOptions;
-(BOOL)canOthersVoteOnMultipleOptions;
-(id)initWithPollOptions:(id)arg1 canOthersAddOptions:(BOOL)arg2 canOthersVoteOnMultipleOptions:(BOOL)arg3 ;
@end
