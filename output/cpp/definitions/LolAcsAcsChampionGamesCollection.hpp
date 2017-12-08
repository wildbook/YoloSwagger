#pragma once
#include <json.hpp>
#include <optional>
#include "LolAcsAcsChampionGames.hpp"
namespace leagueapi {
  struct LolAcsAcsChampionGamesCollection_t {
    std::vector<LolAcsAcsChampionGames_t> champions;
    uint32_t gameCount;
  };

  inline void to_json(nlohmann::json& j, const LolAcsAcsChampionGamesCollection_t& v) {
    j["champions"] = v.champions;
    j["gameCount"] = v.gameCount;
  }

  inline void from_json(const nlohmann::json& j, LolAcsAcsChampionGamesCollection_t& v) {
    v.champions = j.at("champions").get<std::vector<LolAcsAcsChampionGames_t>>();
    v.gameCount = j.at("gameCount").get<uint32_t>();
  }
  inline std::string to_string(const LolAcsAcsChampionGamesCollection_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
