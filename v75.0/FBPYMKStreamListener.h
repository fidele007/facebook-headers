/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBPYMKStreamListener <NSObject>
@required
-(void)PYMKStream:(id)arg1 didFinishedLoadingSuggestions:(id)arg2 andNumberOfNew:(unsigned long long)arg3;
-(void)PYMKStream:(id)arg1 didFailLoadingWithError:(id)arg2 andCurrentSuggestions:(id)arg3;
-(void)PYMKStream:(id)arg1 didUpdateSuggestion:(id)arg2 atIndex:(unsigned long long)arg3;
-(void)PYMKStream:(id)arg1 didRemoveSuggestion:(id)arg2 atIndex:(unsigned long long)arg3;

@end
