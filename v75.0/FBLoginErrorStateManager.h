/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:56 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSError, NSString;

@interface FBLoginErrorStateManager : NSObject {

	unsigned long long _incorrectPasswordCount;
	NSError* _error;
	NSString* _correctLoginIdentifier;
	NSString* _errorURL;

}

@property (nonatomic,copy,readonly) NSString * correctLoginIdentifier;              //@synthesize correctLoginIdentifier=_correctLoginIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * errorURL;                            //@synthesize errorURL=_errorURL - In the implementation block
-(NSString *)errorURL;
-(NSString *)correctLoginIdentifier;
-(void)clearIncorrectPasswordCount;
-(void)_getFallbackLoginErrorStrings;
-(void)updateWithError:(id)arg1 ;
@end
