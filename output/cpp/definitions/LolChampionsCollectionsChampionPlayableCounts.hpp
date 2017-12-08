#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChampionsCollectionsChampionPlayableCounts_t {
    uint32_t_t championsOwned;
    uint32_t_t championsFreeToPlay;
    uint32_t_t championsRented;
    uint32_t_t championsFreeToPlayReward;
  };

  inline void to_json(nlohmann::json& j, const LolChampionsCollectionsChampionPlayableCounts_t& v) {
    j["championsOwned"] = v.championsOwned;
    j["championsFreeToPlay"] = v.championsFreeToPlay;
    j["championsRented"] = v.championsRented;
    j["championsFreeToPlayReward"] = v.championsFreeToPlayReward;
  }

  inline void from_json(const nlohmann::json& j, LolChampionsCollectionsChampionPlayableCounts_t& v) {
    v.championsOwned = j.at("championsOwned").get<uint32_t_t>();
    v.championsFreeToPlay = j.at("championsFreeToPlay").get<uint32_t_t>();
    v.championsRented = j.at("championsRented").get<uint32_t_t>();
    v.championsFreeToPlayReward = j.at("championsFreeToPlayReward").get<uint32_t_t>();
  }
  inline std::string to_string(const LolChampionsCollectionsChampionPlayableCounts_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
