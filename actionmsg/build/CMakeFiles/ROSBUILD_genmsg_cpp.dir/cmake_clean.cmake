FILE(REMOVE_RECURSE
  "../msg_gen"
  "../src/actionmsg/msg"
  "../msg_gen"
  "CMakeFiles/ROSBUILD_genmsg_cpp"
  "../msg_gen/cpp/include/actionmsg/markerAction.h"
  "../msg_gen/cpp/include/actionmsg/markerGoal.h"
  "../msg_gen/cpp/include/actionmsg/markerActionGoal.h"
  "../msg_gen/cpp/include/actionmsg/markerResult.h"
  "../msg_gen/cpp/include/actionmsg/markerActionResult.h"
  "../msg_gen/cpp/include/actionmsg/markerFeedback.h"
  "../msg_gen/cpp/include/actionmsg/markerActionFeedback.h"
  "../msg/markerAction.msg"
  "../msg/markerGoal.msg"
  "../msg/markerActionGoal.msg"
  "../msg/markerResult.msg"
  "../msg/markerActionResult.msg"
  "../msg/markerFeedback.msg"
  "../msg/markerActionFeedback.msg"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/ROSBUILD_genmsg_cpp.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
