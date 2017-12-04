#ifndef SWAGGER_TYPES_PatcherP2PStatus_HPP
#define SWAGGER_TYPES_PatcherP2PStatus_HPP
#include <json.hpp>
namespace test {
  // 
  struct PatcherP2PStatus {
'    // 
    bool isAllowedByUser;
    // 
    bool isEnabledForPatchline;
    // 
    bool requiresRestart;
  };

  void to_json(nlohmann::json& j, const PatcherP2PStatus& v) {
    j["isAllowedByUser"] = v.isAllowedByUser;
    j["isEnabledForPatchline"] = v.isEnabledForPatchline;
    j["requiresRestart"] = v.requiresRestart;
  }

  void from_json(const nlohmann::json& j, PatcherP2PStatus& v) {
    v.isAllowedByUser = j.at("isAllowedByUser").get<bool>;
    v.isEnabledForPatchline = j.at("isEnabledForPatchline").get<bool>;
    v.requiresRestart = j.at("requiresRestart").get<bool>;
  }

}
#endif // SWAGGER_TYPES_PatcherP2PStatus_HPP
