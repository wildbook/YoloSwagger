#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLootGameDataSummonerEmote_t {
    std::string description;
    int64_t id;
    std::string inventoryIcon;
    std::string name;
  };

  inline void to_json(nlohmann::json& j, const LolLootGameDataSummonerEmote_t& v) {
    j["description"] = v.description;
    j["id"] = v.id;
    j["inventoryIcon"] = v.inventoryIcon;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, LolLootGameDataSummonerEmote_t& v) {
    v.description = j.at("description").get<std::string>();
    v.id = j.at("id").get<int64_t>();
    v.inventoryIcon = j.at("inventoryIcon").get<std::string>();
    v.name = j.at("name").get<std::string>();
  }
}
