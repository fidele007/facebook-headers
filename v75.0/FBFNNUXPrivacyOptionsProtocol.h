/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:44 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class FBMemPrivacyOption, FBMemPrivacyOptionsLocationConnection;


@protocol FBFNNUXPrivacyOptionsProtocol
@property (nonatomic,retain) FBMemPrivacyOption * privacyOption; 
@property (nonatomic,retain) FBMemPrivacyOptionsLocationConnection * privacyOptions; 
@required
-(FBMemPrivacyOptionsLocationConnection *)privacyOptions;
-(FBMemPrivacyOption *)privacyOption;
-(void)setPrivacyOptions:(id)arg1;
-(void)setPrivacyOption:(id)arg1;
-(void)reloadData;

@end

