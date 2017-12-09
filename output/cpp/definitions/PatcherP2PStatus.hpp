#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PatcherP2PStatus_t {
    bool requiresRestart;
    bool isAllowedByUser;
    bool isEnabledForPatchline;
  };

  inline void to_json(nlohmann::json& j, const PatcherP2PStatus_t& v) {
    j["requiresRestart"] = v.requiresRestart;
    j["isAllowedByUser"] = v.isAllowedByUser;
    j["isEnabledForPatchline"] = v.isEnabledForPatchline;
  }

  inline void from_json(const nlohmann::json& j, PatcherP2PStatus_t& v) {
    v.requiresRestart = j.at("requiresRestart").get<bool>();
    v.isAllowedByUser = j.at("isAllowedByUser").get<bool>();
    v.isEnabledForPatchline = j.at("isEnabledForPatchline").get<bool>();
  }
  inline std::string to_string(const PatcherP2PStatus_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
