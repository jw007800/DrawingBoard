//
//  RSColorPickerView.h
//  RSColorPicker
//
//  Created by Ryan Sullivan on 8/12/11.
//  Copyright 2011 Freelance Web Developer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>
#import "ANImageBitmapRep.h"

@class RSColorPickerView, BGRSLoupeLayer;
@protocol RSColorPickerViewDelegate <NSObject>
-(void)colorPickerDidChangeSelection:(RSColorPickerView*)cp;
@end

@interface RSColorPickerView : UIView {
}

-(UIColor*)selectionColor;
-(CGPoint)selection;
-(void)setSelectionColor:(UIColor *)selectionColor;

@property (nonatomic)BOOL cropToCircle;
@property (nonatomic)CGFloat brightness;
@property (nonatomic, weak)id<RSColorPickerViewDelegate> delegate;

/**
 * Hue, saturation and briteness of the selected point
 * @Reference: Taken From ars/uicolor-utilities 
 * http://github.com/ars/uicolor-utilities
 */

-(void)selectionToHue:(CGFloat *)pH saturation:(CGFloat *)pS brightness:(CGFloat *)pV;
-(UIColor*)colorAtPoint:(CGPoint)point; //Returns UIColor at a point in the RSColorPickerView

@end
