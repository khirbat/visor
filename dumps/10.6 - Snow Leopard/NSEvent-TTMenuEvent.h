/*
 *     Generated by class-dump 3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "NSEvent.h"

@interface NSEvent (TTMenuEvent)
+ (id)eventByChangingKeyEvent:(id)arg1 toCharacters:(id)arg2;
+ (id)eventByChangingKeyEvent:(id)arg1 toCharacters:(id)arg2 withModifierFlags:(unsigned long long)arg3;
- (unsigned short)characterCodeWithModifierFlags:(unsigned long long)arg1;
- (unsigned short)characterCodeWithCarbonModifiers:(unsigned int)arg1;
- (BOOL)isCommandEqualBelowPlusKeyDown;
- (BOOL)isCommandUnderscoreAboveMinusKeyDown;
- (BOOL)isCommandShiftLeftArrowDown;
- (BOOL)isCommandShiftRightArrowDown;
@end
