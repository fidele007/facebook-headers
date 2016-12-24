/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:59 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBGraphQLInput.h>

@class NSNumber, NSArray;

@interface FBSportsMatchesQueryData : FBGraphQLInput {

	NSNumber* _timestamp;
	NSArray* _teamIds;
	NSArray* _leagueIds;

}

@property (nonatomic,copy) NSNumber * timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy) NSArray * teamIds;                 //@synthesize teamIds=_teamIds - In the implementation block
@property (nonatomic,copy) NSArray * leagueIds;               //@synthesize leagueIds=_leagueIds - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSArray *)teamIds;
-(void)setTeamIds:(NSArray *)arg1 ;
-(NSArray *)leagueIds;
-(void)setLeagueIds:(NSArray *)arg1 ;
-(NSNumber *)timestamp;
-(void)setTimestamp:(NSNumber *)arg1 ;
@end

