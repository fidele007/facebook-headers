/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:42 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBNetworkerRequest.h>

@class NSMutableDictionary, NSString;

@interface FBCrowdsourcingEditsUploadRequest : FBNetworkerRequest {

	NSMutableDictionary* _parameters;
	NSString* _placeID;

}

@property (nonatomic,retain) NSString * placeID;              //@synthesize placeID=_placeID - In the implementation block
-(id)networkRequest;
-(id)_constructHoursDataFromHours:(id)arg1 forType:(id)arg2 ;
-(id)initWithModel:(id)arg1 imageData:(id)arg2 sessionID:(long long)arg3 ;
-(void)setPlaceID:(NSString *)arg1 ;
-(NSString *)placeID;
@end

