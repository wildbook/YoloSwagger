#pragma once
#include <json.hpp>
#include <optional>
#include "LolCollectionsAcsChampionGames.hpp"
namespace leagueapi {
  struct LolCollectionsAcsChampionGamesCollection_t {
    uint32_t gameCount;
    std::vector<LolCollectionsAcsChampionGames_t> champions;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsAcsChampionGamesCollection_t& v) {
    j["gameCount"] = v.gameCount;
    j["champions"] = v.champions;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsAcsChampionGamesCollection_t& v) {
    v.gameCount = j.at("gameCount").get<uint32_t>();
    v.champions = j.at("champions").get<std::vector<LolCollectionsAcsChampionGames_t>>();
  }
  inline std::string to_string(const LolCollectionsAcsChampionGamesCollection_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
