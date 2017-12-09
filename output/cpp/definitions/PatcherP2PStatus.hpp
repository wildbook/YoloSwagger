#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PatcherP2PStatus_t {
    bool isAllowedByUser;
    bool isEnabledForPatchline;
    bool requiresRestart;
  };

  inline void to_json(nlohmann::json& j, const PatcherP2PStatus_t& v) {
    j["isAllowedByUser"] = v.isAllowedByUser;
    j["isEnabledForPatchline"] = v.isEnabledForPatchline;
    j["requiresRestart"] = v.requiresRestart;
  }

  inline void from_json(const nlohmann::json& j, PatcherP2PStatus_t& v) {
    v.isAllowedByUser = j.at("isAllowedByUser").get<bool>();
    v.isEnabledForPatchline = j.at("isEnabledForPatchline").get<bool>();
    v.requiresRestart = j.at("requiresRestart").get<bool>();
  }
  inline std::string to_string(const PatcherP2PStatus_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
