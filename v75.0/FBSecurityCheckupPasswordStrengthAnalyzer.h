/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:42 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSArray, FBSecurityCheckupPasswordStrengthScheme;

@interface FBSecurityCheckupPasswordStrengthAnalyzer : NSObject {

	NSDictionary* _simpleSchemeExplicitLetterScores;
	NSDictionary* _lowerCaseSchemeExplicitLetterScores;
	NSDictionary* _deleetifySchemeExplicitLetterScores;
	NSDictionary* _deleetifyReplacements;
	NSArray* _simpleSchemeDigraphStrings;
	NSArray* _simpleSchemeTrigraphStrings;
	NSArray* _lowerCaseSchemeDigraphStrings;
	NSArray* _lowerCaseSchemeTrigraphStrings;
	NSArray* _deleetifySchemeDigraphStrings;
	NSArray* _deleetifySchemeTrigraphStrings;
	FBSecurityCheckupPasswordStrengthScheme* _simpleStrengthScheme;
	FBSecurityCheckupPasswordStrengthScheme* _deleetifyStrengthScheme;
	FBSecurityCheckupPasswordStrengthScheme* _lowerCaseStrengthScheme;

}
-(double)computeScoreForPassword:(id)arg1 ;
-(id)init;
@end
