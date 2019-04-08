@interface CCUIRoundButton : UIControl
@property (nonatomic,retain) UIView * selectedStateBackgroundView;
@end

@interface CCUIButtonModuleView : UIControl
@property (nonatomic,copy) NSString * glyphState;
-(void)colorButton;
@end

@interface CCUIToggleModule : NSObject
@end

@interface CCUIButtonModuleViewController : UIViewController
@end

@interface CCUIToggleViewController : CCUIButtonModuleViewController
-(CCUIToggleModule *)module;
@end

@interface UIView (Magma)
@property (copy,readonly) NSArray * allSubviews;
@end

@interface CALayer (Magma)
@property (assign) CGColorRef contentsMultiplyColor;
@end

@interface CCUIModuleSliderView : UIControl
@end

@interface MTMaterialView : UIView
@end

@interface _MTBackdropView : UIView
@property (assign,nonatomic) double brightness;
@property (nonatomic,copy) UIColor * colorAddColor;
@end

static BOOL getBool(NSString *key);
static NSString* getValue(NSString *key);
static void colorLabel(UILabel *label, UIColor *color);
static void colorLayers(NSArray *layers, CGColorRef color);
