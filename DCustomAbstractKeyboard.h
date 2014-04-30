//
//  DCustomAbstractKeyboard.h
//  Scout
//
//  Created by Denis Chaschin on 30.04.14.
//  Copyright (c) 2014 RSA LLC. All rights reserved.
//

#import <UIKit/UIKit.h>

extern NSString *const kDCustomAbstractKeyboardEmptyCharacter;
extern NSString *const kDCustomAbstractKeyboardBackSpaceCharacter;

@protocol DCustomGridKeyboardButtonStyle;

@interface DCustomAbstractKeyboard : UIView <UIInputViewAudioFeedback>
- (void)applyKeyboardToTextInput:(id<UITextInput>)textInput;

@property (strong, nonatomic) id<DCustomGridKeyboardButtonStyle> style;
@property (strong, nonatomic) id<DCustomGridKeyboardButtonStyle> highlightedStyle;
@end