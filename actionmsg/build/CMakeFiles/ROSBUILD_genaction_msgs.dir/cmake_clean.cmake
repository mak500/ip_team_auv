FILE(REMOVE_RECURSE
  "../msg_gen"
  "../src/actionmsg/msg"
  "../msg_gen"
  "CMakeFiles/ROSBUILD_genaction_msgs"
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
  INCLUDE(CMakeFiles/ROSBUILD_genaction_msgs.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
