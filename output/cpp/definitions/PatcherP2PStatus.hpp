#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PatcherP2PStatus_t {
    bool isAllowedByUser;
    bool requiresRestart;
    bool isEnabledForPatchline;
  };

  inline void to_json(nlohmann::json& j, const PatcherP2PStatus_t& v) {
    j["isAllowedByUser"] = v.isAllowedByUser;
    j["requiresRestart"] = v.requiresRestart;
    j["isEnabledForPatchline"] = v.isEnabledForPatchline;
  }

  inline void from_json(const nlohmann::json& j, PatcherP2PStatus_t& v) {
    v.isAllowedByUser = j.at("isAllowedByUser").get<bool>();
    v.requiresRestart = j.at("requiresRestart").get<bool>();
    v.isEnabledForPatchline = j.at("isEnabledForPatchline").get<bool>();
  }
  inline std::string to_string(const PatcherP2PStatus_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
