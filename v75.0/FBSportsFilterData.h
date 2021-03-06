/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:42 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBSportsFilterData : FBValueObject <NSCopying> {

	NSString* _team1Name;
	NSString* _team2Name;
	unsigned long long _team1Score;
	unsigned long long _team2Score;
	NSString* _status;
	NSString* _team1PrimaryColor;
	NSString* _team2PrimaryColor;

}

@property (nonatomic,copy,readonly) NSString * team1Name;                      //@synthesize team1Name=_team1Name - In the implementation block
@property (nonatomic,copy,readonly) NSString * team2Name;                      //@synthesize team2Name=_team2Name - In the implementation block
@property (nonatomic,readonly) unsigned long long team1Score;                  //@synthesize team1Score=_team1Score - In the implementation block
@property (nonatomic,readonly) unsigned long long team2Score;                  //@synthesize team2Score=_team2Score - In the implementation block
@property (nonatomic,copy,readonly) NSString * status;                         //@synthesize status=_status - In the implementation block
@property (nonatomic,copy,readonly) NSString * team1PrimaryColor;              //@synthesize team1PrimaryColor=_team1PrimaryColor - In the implementation block
@property (nonatomic,copy,readonly) NSString * team2PrimaryColor;              //@synthesize team2PrimaryColor=_team2PrimaryColor - In the implementation block
-(id)initWithTeam1Name:(id)arg1 team2Name:(id)arg2 team1Score:(unsigned long long)arg3 team2Score:(unsigned long long)arg4 status:(id)arg5 team1PrimaryColor:(id)arg6 team2PrimaryColor:(id)arg7 ;
-(NSString *)team1Name;
-(NSString *)team2Name;
-(unsigned long long)team1Score;
-(unsigned long long)team2Score;
-(NSString *)team1PrimaryColor;
-(NSString *)team2PrimaryColor;
-(NSString *)status;
@end

