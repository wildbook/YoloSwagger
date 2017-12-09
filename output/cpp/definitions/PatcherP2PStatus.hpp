#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PatcherP2PStatus_t {
    bool isEnabledForPatchline;
    bool requiresRestart;
    bool isAllowedByUser;
  };

  inline void to_json(nlohmann::json& j, const PatcherP2PStatus_t& v) {
    j["isEnabledForPatchline"] = v.isEnabledForPatchline;
    j["requiresRestart"] = v.requiresRestart;
    j["isAllowedByUser"] = v.isAllowedByUser;
  }

  inline void from_json(const nlohmann::json& j, PatcherP2PStatus_t& v) {
    v.isEnabledForPatchline = j.at("isEnabledForPatchline").get<bool>();
    v.requiresRestart = j.at("requiresRestart").get<bool>();
    v.isAllowedByUser = j.at("isAllowedByUser").get<bool>();
  }
  inline std::string to_string(const PatcherP2PStatus_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
