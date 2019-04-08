#import <Preferences/PSListController.h>
#import <Preferences/PSSpecifier.h>

@interface MagmaPrefs : PSListController
@end

@interface MagmaLogo : PSTableCell {
	UILabel *background;
	UILabel *tweakName;
	UILabel *version;
}
@end
