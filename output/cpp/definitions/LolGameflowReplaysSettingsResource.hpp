#pragma once
#include <json.hpp>
#include <optional>
#include "LolGameflowReplaysSettingsData.hpp"
namespace leagueapi {
  struct LolGameflowReplaysSettingsResource_t {
    LolGameflowReplaysSettingsData_t data;
  };

  inline void to_json(nlohmann::json& j, const LolGameflowReplaysSettingsResource_t& v) {
    j["data"] = v.data;
  }

  inline void from_json(const nlohmann::json& j, LolGameflowReplaysSettingsResource_t& v) {
    v.data = j.at("data").get<LolGameflowReplaysSettingsData_t>();
  }
  inline std::string to_string(const LolGameflowReplaysSettingsResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
