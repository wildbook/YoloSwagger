#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLootGameDataSummonerIcon_t {
    std::string iconPath;
    int32_t id;
  };

  inline void to_json(nlohmann::json& j, const LolLootGameDataSummonerIcon_t& v) {
    j["iconPath"] = v.iconPath;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolLootGameDataSummonerIcon_t& v) {
    v.iconPath = j.at("iconPath").get<std::string>();
    v.id = j.at("id").get<int32_t>();
  }
}
