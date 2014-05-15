FILE(REMOVE_RECURSE
  "../msg_gen"
  "../src/actionmsg/msg"
  "../msg_gen"
  "CMakeFiles/ROSBUILD_genmsg_py"
  "../src/actionmsg/msg/__init__.py"
  "../src/actionmsg/msg/_markerAction.py"
  "../src/actionmsg/msg/_markerGoal.py"
  "../src/actionmsg/msg/_markerActionGoal.py"
  "../src/actionmsg/msg/_markerResult.py"
  "../src/actionmsg/msg/_markerActionResult.py"
  "../src/actionmsg/msg/_markerFeedback.py"
  "../src/actionmsg/msg/_markerActionFeedback.py"
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
  INCLUDE(CMakeFiles/ROSBUILD_genmsg_py.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
