/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBMemPage, NSString, NSDate;

@interface FBReactionSportsMatchComponentConfig : NSObject {

	BOOL _hasBottomBorder;
	FBMemPage* _matchPage;
	FBMemPage* _firstTeam;
	NSString* _firstTeamName;
	long long _firstTeamRank;
	FBMemPage* _secondTeam;
	NSString* _secondTeamName;
	long long _secondTeamRank;
	NSString* _broadcastNetwork;
	NSDate* _startTime;

}

@property (nonatomic,readonly) FBMemPage * matchPage;                         //@synthesize matchPage=_matchPage - In the implementation block
@property (nonatomic,readonly) FBMemPage * firstTeam;                         //@synthesize firstTeam=_firstTeam - In the implementation block
@property (nonatomic,copy,readonly) NSString * firstTeamName;                 //@synthesize firstTeamName=_firstTeamName - In the implementation block
@property (nonatomic,readonly) long long firstTeamRank;                       //@synthesize firstTeamRank=_firstTeamRank - In the implementation block
@property (nonatomic,readonly) FBMemPage * secondTeam;                        //@synthesize secondTeam=_secondTeam - In the implementation block
@property (nonatomic,copy,readonly) NSString * secondTeamName;                //@synthesize secondTeamName=_secondTeamName - In the implementation block
@property (nonatomic,readonly) long long secondTeamRank;                      //@synthesize secondTeamRank=_secondTeamRank - In the implementation block
@property (nonatomic,readonly) BOOL hasBottomBorder;                          //@synthesize hasBottomBorder=_hasBottomBorder - In the implementation block
@property (nonatomic,copy,readonly) NSString * broadcastNetwork;              //@synthesize broadcastNetwork=_broadcastNetwork - In the implementation block
@property (nonatomic,readonly) NSDate * startTime;                            //@synthesize startTime=_startTime - In the implementation block
-(FBMemPage *)matchPage;
-(NSString *)broadcastNetwork;
-(id)initWithMatchPage:(id)arg1 firstTeam:(id)arg2 firstTeamName:(id)arg3 firstTeamRank:(long long)arg4 secondTeam:(id)arg5 secondTeamName:(id)arg6 secondTeamRank:(long long)arg7 hasBottomBorder:(BOOL)arg8 broadCastNetwork:(id)arg9 startTime:(id)arg10 ;
-(NSString *)firstTeamName;
-(long long)firstTeamRank;
-(NSString *)secondTeamName;
-(long long)secondTeamRank;
-(NSDate *)startTime;
-(FBMemPage *)firstTeam;
-(FBMemPage *)secondTeam;
-(BOOL)hasBottomBorder;
@end

