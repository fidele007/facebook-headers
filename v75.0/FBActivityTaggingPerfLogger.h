/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBActivityTaggingPerfLogger : NSObject {

	BOOL _verbStarted;
	BOOL _verbResultsFromCache;
	BOOL _verbViewRendered;
	BOOL _verbResultsLoaded;
	BOOL _objectsStarted;
	BOOL _objectsFromCache;
	BOOL _objectViewRendered;
	BOOL _objectResultsLoaded;

}
+(void)onObjectPickerBeginTTI;
+(void)onObjectPickerResultsLoadedFromCache:(BOOL)arg1 ;
+(void)onObjectPickerViewShown;
+(void)onObjectPickerAbortedWithReason:(id)arg1 ;
+(void)onObjectPickerFailedWithReason:(id)arg1 ;
+(void)onActivityPickerResultsLoadedFromCache:(BOOL)arg1 ;
+(void)onActivityPickerFailedWithReason:(id)arg1 ;
+(void)onActivityPickerAbortedWithReason:(id)arg1 ;
+(void)onActivityPickerViewShown;
+(void)onActivityPickerBeginTTI;
+(void)onActivityPickerCancelled;
+(void)onObjectPickerCancelled;
+(id)sharedLogger;
-(void)onObjectPickerBeginTTI;
-(void)onObjectPickerResultsLoadedFromCache:(BOOL)arg1 ;
-(void)onObjectPickerViewShown;
-(void)onObjectPickerAbortedWithReason:(id)arg1 ;
-(void)onObjectPickerFailedWithReason:(id)arg1 ;
-(void)onActivityPickerResultsLoadedFromCache:(BOOL)arg1 ;
-(void)onActivityPickerFailedWithReason:(id)arg1 ;
-(void)onActivityPickerAbortedWithReason:(id)arg1 ;
-(void)onActivityPickerViewShown;
-(void)_markFailEvent:(id)arg1 withReason:(id)arg2 ;
-(void)onActivityPickerBeginTTI;
-(void)_tryToStopVerbPickerResults;
-(void)_tryStopAndCancelFromCache:(BOOL)arg1 regularEvent:(id)arg2 cachedEvent:(id)arg3 ;
-(void)_markFailAndCancelFromCache:(BOOL)arg1 regularEvent:(id)arg2 cachedEvent:(id)arg3 withReason:(id)arg4 ;
-(void)onActivityPickerCancelled;
-(void)_markAbortFromCache:(BOOL)arg1 regularEvent:(id)arg2 cachedEvent:(id)arg3 withReason:(id)arg4 ;
-(void)_tryToStopObjectPickerResults;
-(void)onObjectPickerCancelled;
@end
