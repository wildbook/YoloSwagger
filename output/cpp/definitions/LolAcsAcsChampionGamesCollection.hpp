#pragma once
#include <json.hpp>
#include <optional>
#include "LolAcsAcsChampionGames.hpp"
namespace leagueapi {
  struct LolAcsAcsChampionGamesCollection_t {
    uint32_t_t gameCount;
    std::vector<LolAcsAcsChampionGames_t> champions;
  };

  inline void to_json(nlohmann::json& j, const LolAcsAcsChampionGamesCollection_t& v) {
    j["gameCount"] = v.gameCount;
    j["champions"] = v.champions;
  }

  inline void from_json(const nlohmann::json& j, LolAcsAcsChampionGamesCollection_t& v) {
    v.gameCount = j.at("gameCount").get<uint32_t_t>();
    v.champions = j.at("champions").get<std::vector<LolAcsAcsChampionGames_t>>();
  }
  inline std::string to_string(const LolAcsAcsChampionGamesCollection_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
