#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLootGameDataSummonerEmote_t {
    std::string_t inventoryIcon;
    std::string_t description;
    std::string_t name;
    int64_t_t id;
  };

  inline void to_json(nlohmann::json& j, const LolLootGameDataSummonerEmote_t& v) {
    j["inventoryIcon"] = v.inventoryIcon;
    j["description"] = v.description;
    j["name"] = v.name;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolLootGameDataSummonerEmote_t& v) {
    v.inventoryIcon = j.at("inventoryIcon").get<std::string_t>();
    v.description = j.at("description").get<std::string_t>();
    v.name = j.at("name").get<std::string_t>();
    v.id = j.at("id").get<int64_t_t>();
  }
  inline std::string to_string(const LolLootGameDataSummonerEmote_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
