#pragma once
#include <json.hpp>
#include <optional>
#include "LolCollectionsAcsChampionGames.hpp"
namespace leagueapi {
  struct LolCollectionsAcsChampionGamesCollection_t {
    std::vector<LolCollectionsAcsChampionGames_t> champions;
    uint32_t gameCount;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsAcsChampionGamesCollection_t& v) {
    j["champions"] = v.champions;
    j["gameCount"] = v.gameCount;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsAcsChampionGamesCollection_t& v) {
    v.champions = j.at("champions").get<std::vector<LolCollectionsAcsChampionGames_t>>();
    v.gameCount = j.at("gameCount").get<uint32_t>();
  }
  inline std::string to_string(const LolCollectionsAcsChampionGamesCollection_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
