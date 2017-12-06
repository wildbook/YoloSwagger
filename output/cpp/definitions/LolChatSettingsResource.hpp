#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChatSettingsResource_t {
    nlohmann::json data;
  };

  inline void to_json(nlohmann::json& j, const LolChatSettingsResource_t& v) {
    j["data"] = v.data;
  }

  inline void from_json(const nlohmann::json& j, LolChatSettingsResource_t& v) {
    v.data = j.at("data").get<nlohmann::json>();
  }
}
