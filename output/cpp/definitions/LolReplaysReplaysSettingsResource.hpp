#pragma once
#include <json.hpp>
#include <optional>
#include "LolReplaysReplaysSettingsData.hpp"
namespace leagueapi {
  struct LolReplaysReplaysSettingsResource_t {
    LolReplaysReplaysSettingsData_t data;
  };

  inline void to_json(nlohmann::json& j, const LolReplaysReplaysSettingsResource_t& v) {
    j["data"] = v.data;
  }

  inline void from_json(const nlohmann::json& j, LolReplaysReplaysSettingsResource_t& v) {
    v.data = j.at("data").get<LolReplaysReplaysSettingsData_t>();
  }
}
