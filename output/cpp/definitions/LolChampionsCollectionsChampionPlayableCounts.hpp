#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChampionsCollectionsChampionPlayableCounts_t {
    uint32_t championsFreeToPlay;
    uint32_t championsFreeToPlayReward;
    uint32_t championsOwned;
    uint32_t championsRented;
  };

  inline void to_json(nlohmann::json& j, const LolChampionsCollectionsChampionPlayableCounts_t& v) {
    j["championsFreeToPlay"] = v.championsFreeToPlay;
    j["championsFreeToPlayReward"] = v.championsFreeToPlayReward;
    j["championsOwned"] = v.championsOwned;
    j["championsRented"] = v.championsRented;
  }

  inline void from_json(const nlohmann::json& j, LolChampionsCollectionsChampionPlayableCounts_t& v) {
    v.championsFreeToPlay = j.at("championsFreeToPlay").get<uint32_t>();
    v.championsFreeToPlayReward = j.at("championsFreeToPlayReward").get<uint32_t>();
    v.championsOwned = j.at("championsOwned").get<uint32_t>();
    v.championsRented = j.at("championsRented").get<uint32_t>();
  }
}
