#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLootGameDataSummonerIcon_t {
    int32_t_t id;
    std::string_t iconPath;
  };

  inline void to_json(nlohmann::json& j, const LolLootGameDataSummonerIcon_t& v) {
    j["id"] = v.id;
    j["iconPath"] = v.iconPath;
  }

  inline void from_json(const nlohmann::json& j, LolLootGameDataSummonerIcon_t& v) {
    v.id = j.at("id").get<int32_t_t>();
    v.iconPath = j.at("iconPath").get<std::string_t>();
  }
  inline std::string to_string(const LolLootGameDataSummonerIcon_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
