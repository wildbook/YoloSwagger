#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLootGameDataSummonerEmote_t {
    std::string name;
    std::string description;
    std::string inventoryIcon;
    int64_t id;
  };

  inline void to_json(nlohmann::json& j, const LolLootGameDataSummonerEmote_t& v) {
    j["name"] = v.name;
    j["description"] = v.description;
    j["inventoryIcon"] = v.inventoryIcon;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolLootGameDataSummonerEmote_t& v) {
    v.name = j.at("name").get<std::string>();
    v.description = j.at("description").get<std::string>();
    v.inventoryIcon = j.at("inventoryIcon").get<std::string>();
    v.id = j.at("id").get<int64_t>();
  }
  inline std::string to_string(const LolLootGameDataSummonerEmote_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
