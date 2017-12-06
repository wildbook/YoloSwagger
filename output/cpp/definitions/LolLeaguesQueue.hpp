#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLeaguesQueue_t {
    nlohmann::json type;
  };

  inline void to_json(nlohmann::json& j, const LolLeaguesQueue_t& v) {
    j["type"] = v.type;
  }

  inline void from_json(const nlohmann::json& j, LolLeaguesQueue_t& v) {
    v.type = j.at("type").get<nlohmann::json>();
  }
}
