#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PatcherP2PStatus_t {
    bool_t isAllowedByUser;
    bool_t requiresRestart;
    bool_t isEnabledForPatchline;
  };

  inline void to_json(nlohmann::json& j, const PatcherP2PStatus_t& v) {
    j["isAllowedByUser"] = v.isAllowedByUser;
    j["requiresRestart"] = v.requiresRestart;
    j["isEnabledForPatchline"] = v.isEnabledForPatchline;
  }

  inline void from_json(const nlohmann::json& j, PatcherP2PStatus_t& v) {
    v.isAllowedByUser = j.at("isAllowedByUser").get<bool_t>();
    v.requiresRestart = j.at("requiresRestart").get<bool_t>();
    v.isEnabledForPatchline = j.at("isEnabledForPatchline").get<bool_t>();
  }
  inline std::string to_string(const PatcherP2PStatus_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
