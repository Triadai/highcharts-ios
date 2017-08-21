/**
* (c) 2009-2017 Highsoft AS
*
* License: www.highcharts.com/license
* For commercial usage, a valid license is required. To purchase a license for Highcharts iOS, please see our website: https://shop.highsoft.com/
* In case of questions, please contact sales@highsoft.com
*/

#import "HIPlotOptionsLineMarkerStatesSelect.h"
#import "HIPlotOptionsLineMarkerStatesHover.h"


@interface HIPlotOptionsLineMarkerStates: HIChartsJSONSerializable

/**
* description: The appearance of the point marker when selected. In order to allow a point to be 
		selected, set the series.allowPointSelect option to true.
*/
@property(nonatomic, readwrite) HIPlotOptionsLineMarkerStatesSelect *select;
@property(nonatomic, readwrite) HIPlotOptionsLineMarkerStatesHover *hover;

-(NSDictionary *)getParams;

@end