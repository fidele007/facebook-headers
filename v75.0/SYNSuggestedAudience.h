/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:00 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@class SYNPhotoConceptGroupIdentifierLocation, NSArray, SYNFolder, NSString;

@interface SYNSuggestedAudience : NSObject {

	unsigned long long _hash;
	unsigned long long _suggestionType;
	SYNPhotoConceptGroupIdentifierLocation* _locationIdentifier;
	NSArray* _users;
	SYNFolder* _folder;
	NSString* _eventTitle;

}

@property (nonatomic,readonly) unsigned long long suggestionType;                                               //@synthesize suggestionType=_suggestionType - In the implementation block
@property (nonatomic,retain,readonly) SYNPhotoConceptGroupIdentifierLocation * locationIdentifier;              //@synthesize locationIdentifier=_locationIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSArray * users;                                                            //@synthesize users=_users - In the implementation block
@property (nonatomic,copy,readonly) SYNFolder * folder;                                                         //@synthesize folder=_folder - In the implementation block
@property (nonatomic,copy,readonly) NSString * eventTitle;                                                      //@synthesize eventTitle=_eventTitle - In the implementation block
-(unsigned long long)suggestionType;
-(NSString *)eventTitle;
-(id)initWithNativeSuggestionAudience:(const SuggestedAudience*)arg1 sessionUser:(id)arg2 ;
-(id)bugReportInfo;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(SYNFolder *)folder;
-(NSArray *)users;
-(SYNPhotoConceptGroupIdentifierLocation *)locationIdentifier;
@end

