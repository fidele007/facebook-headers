/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:42 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBSportsFilterCommand.h>

@interface FBSportsFilterUpdateScoreCommand : FBSportsFilterCommand {

	unsigned long long _score;
	unsigned long long _teamID;

}

@property (nonatomic,readonly) unsigned long long score;               //@synthesize score=_score - In the implementation block
@property (nonatomic,readonly) unsigned long long teamID;              //@synthesize teamID=_teamID - In the implementation block
-(id)initWithScore:(unsigned long long)arg1 teamID:(unsigned long long)arg2 ;
-(unsigned long long)teamID;
-(unsigned long long)score;
@end
