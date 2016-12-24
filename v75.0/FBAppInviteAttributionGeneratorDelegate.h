/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBAttributionGeneratorDelegateProtocol.h>

@class NSSet, NSString;

@interface FBAppInviteAttributionGeneratorDelegate : NSObject <FBAttributionGeneratorDelegateProtocol> {

	NSSet* _requestFBIDs;

}

@property (nonatomic,copy,readonly) NSSet * requestFBIDs;              //@synthesize requestFBIDs=_requestFBIDs - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqualToAppInviteAttributionGeneratorDelegate:(id)arg1 ;
-(NSSet *)requestFBIDs;
-(void)_applicationRequestDidAcceptWithRequestIDs:(id)arg1 didJustInstall:(BOOL)arg2 userSession:(id)arg3 ;
-(void)attributionDidHappenForStoreEntity:(id)arg1 entityLocations:(id)arg2 pollCount:(int)arg3 userSession:(id)arg4 ;
-(void)attributionAlreadyHappenedForStoreEntity:(id)arg1 entityLocations:(id)arg2 userSession:(id)arg3 ;
-(void)attributionDidFailForStoreEntity:(id)arg1 exception:(id)arg2 ;
-(void)addToLogExtra:(id)arg1 ;
-(id)initWithAppRequestFBIDs:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
@end
